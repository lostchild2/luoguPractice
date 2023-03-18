#include <stdio.h>
int main(void)
{
    int i, j, num, cnt, temp;
    int sum = 0;
    int arr[100];
    scanf("%d", &cnt);
    for (i = 0; i < cnt; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    for (i = 0; i < cnt - 1; i++)
    {
        for (j = i + 1;; j++)
        {
            if (arr[i] == (i + 1))
            {
                sum += j - i - 1;
                break;
            }
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    printf("%d\n", sum);
    system("pause");
    return 0;
}