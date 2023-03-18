#include <stdio.h>
int main(void)
{
    int k, i, flag = 0;
    scanf("%d", &k);
    for (i = 10000; i <= 30000; i++)
    {
        // sub1 = ;
        // sub2 = ;
        // sub3 = ;
        if ((i / 100 % k) == 0 && ((i / 10 - (i / 10000 * 1000)) % k) == 0 && ((i - (i / 1000 * 1000)) % k) == 0)
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("NO");
    }
    system("pause");
    return 0;
}