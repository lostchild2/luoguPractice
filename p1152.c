#include <stdio.h>
#include <math.h>
int main(void)
{
    int arr[20], num, i = 0, cnt, temp, flag = 1;
    scanf("%d", &cnt);
    for (i = 0; i < cnt; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    for (i = 0; i < cnt - 1; i++)
    {
        arr[i] = abs(arr[i + 1] - arr[i]);
    }
    int j = 0;
    for (i = 0; i < cnt - 2; i++)
    {
        for (j = i + 1; j < cnt - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (arr[i] != (i + 1))
        {
            flag = 0;
        }
    }
    // for (i = 0; i < cnt - 1; i++)
    // {
    //     if (arr[i] != (i + 1))
    //     {
    //         flag = 0;
    //     }
    // }
    if (flag)
    {
        printf("Jolly");
    }
    else
    {
        printf("Not jolly");
    }
    system("pause");
    return 0;
}