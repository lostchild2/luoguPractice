#include <stdio.h>
int main(void)
{
    int sum, div, k, temp;
    scanf("%d%d", &sum, &k);
    temp = sum;
    do
    {
        div = temp / k;
        sum += div;
        temp = ((temp % k) + div);
    } while (div != 0);
    printf("%d", sum);
    system("pause");
    return 0;
}