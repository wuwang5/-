
#include <stdio.h>
#include <stdlib.h>
 
int Search(int *a, int key)
{
    // ��˳������۰���� key������Ԫ�ء����ҵ�������ֵΪ
    int low = 0, mid; // ��Ԫ�ص������±ꣻ����Ϊ0��
    int high = 9;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
            return mid; // �ҵ�����Ԫ��
        else if (key < a[mid])
            high = mid - 1; // ������ǰ��������в���
        else
            low = mid + 1; // �����ں��������в���
    }
    return -1; // ˳����в����ڴ���Ԫ��
}
void main()
{
    int *a, key, i;
    int b[10] = {0};
    a = b;
 
    printf("����С��������10��������\n");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &b[i - 1]);
        printf("\n");
    }
    printf("��������Ҫ���ҵ�����\n");
    scanf("%d", &key);
    i = Search(a, key);
    if (-1 == i)
        printf("��Ҫ���ҵ�������Ŀ�������У�\n");
    else
        printf("��Ҫ���ҵ����������±�Ϊ %d \n", i);
}