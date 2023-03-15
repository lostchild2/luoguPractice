#include <stdio.h>
int main(void)
{
    int arr[10];
    int i = 0;
    int num, cnt = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        arr[i] = num;
    }
    int height = 0;
    scanf("%d", &height);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] <= (height + 30))
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    system("pause");
    return 0;
}