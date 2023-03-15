#include <stdio.h>
int main(void)
{
    int tar;
    scanf("%d", &tar);
    float sum = 1;
    float temp;
    int i = 1;
    while (sum <= tar)
    {
        i++;
        temp = 1.0 / i;
        sum += temp;
    }
    printf("%d ", i);
    system("pause");
    return 0;
}