/*当你看到题时，你在羡慕题出得多么精妙，是利用“分治”，“贪心”还是“动态规划”呢？
然而一顿操作猛如虎以后，你发现其实这道题特别的水…
关键在于那句“但是一晚上他最多只能复习m门课”上，最多为m，
那么也就是说我一晚上只复习一科也是可以的，而题的难度又是小于100的，
所以我一晚上只复习那最简单的一科时复习的效率最高。*/
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
	int T, i, j, n, m, min, a;
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> n >> m;
		for (j = 1; j <= n; j++) {
			cin >> a;
			if (j == 1) {
				min = a;
			}
			else {
				if (a < min) {
					min = a;
				}
			}
		}
		printf("%d\n", int(pow(100 - min, 2.0)));
	}
	return 0;
}

