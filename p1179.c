#include <stdio.h>
int main(void)
{
    int beg, end, i, temp, cnt = 0;
    scanf("%d%d", &beg, &end);
    for (i = beg; i <= end; i++)
    {
        temp = i;
        do
        {
            if (i % 10 == 2)
            {
                cnt++;
            }
        } while (i /= 10);
        i = temp;
    }
    printf("%d", cnt);
    system("pause");
    return 0;
}