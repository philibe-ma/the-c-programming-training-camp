#include <stdio.h>

void search_two_single_numbers(int arr[], int len)
{
    int sum = 0;
    int pos;
    int num1 = 0;
    int num2 = 0;
    int i;

    // 将所有元素异或，结果就等于这两个“单身数”的异或
    for (i = 0; i < len; ++i)
        sum ^= arr[i];

    // 这两个数必然存在至少一个二进制位，其值不同。找出其中一个这样的二进制位
    for (i = 0; i < 32; ++i)
    {
        if (arr[i] & (1 << i))
        {
            pos = i;
            break;
        }
    }

    // 根据这个位置上的值是 1 还是 0，将数组中所有元素分为两组
    // 这两组中必定各自包含一个“单身数”
    for (i = 0; i < len; ++i)
    {
        if (arr[i] & (1 << pos))
            num1 ^= arr[i];
        else
            num2 ^= arr[i];
    }

    printf("%d %d\n", num1, num2);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 6};
    int len = sizeof(arr) / sizeof(int);

    search_two_single_numbers(arr, len);

    return 0;
}