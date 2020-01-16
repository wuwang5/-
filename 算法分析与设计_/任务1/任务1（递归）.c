
#include <stdio.h>
#include <stdlib.h>
 
int Search(int *a, int key)
{
    // 在顺序表中折半查找 key的数据元素。若找到，则函数值为
    int low = 0, mid; // 该元素的数组下标；否则为0。
    int high = 9;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
            return mid; // 找到待查元素
        else if (key < a[mid])
            high = mid - 1; // 继续在前半区间进行查找
        else
            low = mid + 1; // 继续在后半区间进行查找
    }
    return -1; // 顺序表中不存在待查元素
}
void main()
{
    int *a, key, i;
    int b[10] = {0};
    a = b;
 
    printf("请自小到大输入10个整数：\n");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &b[i - 1]);
        printf("\n");
    }
    printf("请输入你要查找的数：\n");
    scanf("%d", &key);
    i = Search(a, key);
    if (-1 == i)
        printf("你要查找的数不在目标数组中！\n");
    else
        printf("你要查找的数的数组下标为 %d \n", i);
}