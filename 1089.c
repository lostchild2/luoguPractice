#include <stdio.h>
#define TH 300
int main(void)
{
    int cost, i, sum = 0, store, a, left;
    for (i = 0; i < 12; i++)
    {
        scanf("%d", &cost);
        sum += (TH - cost);
        if (sum < 0)
        {
            printf("-%d\n", i + 1);
            break;
        }
        else
        {
            a = sum / 100;
            store += a * 100;
            sum -= a * 100;
        }
    }
    if (i >= 12)
    {
        printf("%.0f", sum + (1.2 * (store)));
    }
    system("pause");
    return 0;
}