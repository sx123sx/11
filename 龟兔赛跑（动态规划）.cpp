#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

// 从“开始充电站”到“结束充电站”所用的时间
double charge(int p[], int start, int end, int T, int VT1, int VT2, int C)
{
	int dis =* (p + end) - *(p + start);
	if (dis > C) {
		return T + double(C) / VT1 + double(dis - C) / VT2;
	}
	else {
		return T + double(dis) / VT1;
	}
}

int main()
{
	int L, N, C, T, VR, VT1, VT2, i, j, p[102], remain, dis;
	double dp[102], m;
	while (cin >> L ) {
		cin >> N >> C >> T;
		cin >> VR >> VT1 >> VT2;
		p[0] = 0;
		p[N + 1] = L;
		for (i = 1; i <= N; i++) {
			cin >> p[i];
		}
		dp[0] = 0;
		for (i = 1; i <= N + 1; i++) {
			for (j = 0; j < i; j++) {
				// 当从起点开始时不用充电
				if (!j) {
					if (p[i] - p[j] > C) {
						m = double(C) / VT1 + double(p[i] - p[j] - C) / VT2;
					}
					else {
						m = double(p[i] - p[j]) / VT1;
					}
				}
				else {
					if (dp[j] + charge(p, j, i, T, VT1, VT2, C) < m)
					{
						m = dp[j] + charge(p, j, i, T, VT1, VT2, C);
					}
				}
			}
			dp[i] = m;
		}

		if (dp[N + 1] < double(L) / VR) {
			printf("What a pity rabbit!\n");
		}
		else {
			printf("Good job,rabbit!\n");
		}
	}
	return 0;
}

