#include <cstring>
#include <cstdio>
using namespace std;

int f[50];

int main()
{
    int t, n, k, a, b;
    scanf("%d", &t);
    while (t--)
    {
        memset(f, 0, sizeof(f));
        f[0] = 1;
        scanf("%d%d", &n, &k);
        for (int i = 0; i < k; i++)
        {
            scanf("%d%d", &a, &b);
            for (int j = n; j >= a; j--)
            {
                for (int l = 1; l <= b; l++)
                {
                    if (j >= l * a) f[j] = f[j] + f[j - l * a];
                }
            }
        }
        printf("%d\n", f[n]);
    }
    return 0;
}

