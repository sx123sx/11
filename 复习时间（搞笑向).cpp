/*���㿴����ʱ��������Ľ����ö�ô��������á����Ρ�����̰�ġ����ǡ���̬�滮���أ�
Ȼ��һ�ٲ������绢�Ժ��㷢����ʵ������ر��ˮ��
�ؼ������Ǿ䡰����һ���������ֻ�ܸ�ϰm�ſΡ��ϣ����Ϊm��
��ôҲ����˵��һ����ֻ��ϰһ��Ҳ�ǿ��Եģ�������Ѷ�����С��100�ģ�
������һ����ֻ��ϰ����򵥵�һ��ʱ��ϰ��Ч����ߡ�*/
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

