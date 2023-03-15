#include <stdio.h>
int main(void)
{
    int cnt, num, endCnt = 1;
    int arr[100];
    scanf("%d", &cnt);
    int i = 0;
    for (i = 0; i < cnt; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    int j = 0;
    int temp = 0;
    for (i = 0; i < cnt - 1; i++)
    {
        for (j = i + 1; j < cnt; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (i == 0 || arr[i - 1] != arr[i])
        {
            endCnt++;
        }
    }
    // for (i = 0; i < cnt; i++)
    // {
    //     if (arr[i] != arr[i + 1])
    //     {
    //         endCnt++;
    //     }
    // }
    printf("%d\n", endCnt);
    for (i = 0; i < cnt; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            printf("%d ", arr[i]);
        }
    }

    system("pause");
    return 0;
}