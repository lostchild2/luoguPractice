#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int num, i = 0;
    int j = 0;
    int flag = 0;
    scanf("%d", &num);
    for (i = num / 2; i > 2; i--)
    {
        if (num % i == 0)
        {
            j = 2;
            for (j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    break;
                }
            }
            if (j > sqrt(i))
            {
                printf("%d", i);
                break;
            }
        }
    }
    system("pause");
    return 0;
}