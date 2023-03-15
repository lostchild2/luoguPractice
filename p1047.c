#include <stdio.h>
int main(void)
{
    int length, num, beg, end, cnt = 0;
    scanf("%d%d", &length, &num);
    int i = 0;
    int arr[1000];
    for (i = 0; i < length + 1; i++)
    {
        arr[i] = 0;
    } //赋值500个0
    int j = 0;
    for (i = 0; i < num; i++) // num组数据
    {
        scanf("%d%d", &beg, &end);
        for (j = beg; j <= end; j++)
        {
            if (arr[j] != 1) //赋值过1的不进cnt++
            {
                arr[j] = 1;
                cnt++; // cnt表示数组1的数目
            }
        }
    }
    printf("%d", length - cnt + 1);
    system("pause");
    return 0;
}