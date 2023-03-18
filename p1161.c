#include <stdio.h>
int arr[20];
int main(void)
{
    int n, t, i, j, max = 0;
    float a;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%f%d", &a, &t);
        for (j = 1; j <= t; j++)
        {
            if (arr[(int)(a * j)] == 1)
            {
                arr[(int)(a * j)] = 0;
            }
            else
            {
                arr[(int)(a * j)] = 1;
            }
        }
        if (a * t > max)
        {
            max = (int)(a * t);
        }
    }
    for (i = 1; i <= max; i++)
    {
        if (arr[i] == 1)
        {
            break;
        }
    }
    printf("%d", i);
    system("pause");
    return 0;
}