#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int a[n + 1], b[m + 1], c[m + n + 1] = {};
        for (int i = n; i >= 1; i--)
            scanf("%d", &a[i]);
        for (int i = m; i >= 1; i--)
            scanf("%d", &b[i]);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                c[i + j] += a[i] * b[j];
            }
        }
        for (int i = m + n; i >= 2; i--)
            printf("%d ", c[i]);
        printf("\n");
    }
}