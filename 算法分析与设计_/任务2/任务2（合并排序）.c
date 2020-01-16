#include "stdafx.h"  
#include <stdlib.h>  
#include <malloc.h>  
  
  
//归并操作  
void merge(int src[], int des[], int low, int high ,int mid)  
{  
    int i = low;  
    int k = low;  
    int j = mid + 1;  
  
    while (( i <= mid ) && ( j <= high ))  
    {  
        if (src[i] < src[j])  
        {  
            des[k++] = src[i++];  
        }  
        else  
        {  
            des[k++] = src[j++];  
        }         
    }  
    while (i <= mid)  
    {  
        des[k++] = src[i++];  
    }  
    while (j <= high)  
    {  
        des[k++] = src[j++];  
    }  
}  
  
void MSort(int src[], int des[] ,int low, int high, int max_size)  
{  
    int mid = (low + high) / 2;  
    if (low == high)  
    {  
        des[low] = src[low];  
    }  
    else  
    {  
        int mid = (low + high) / 2;  
        int * des_space = (int *)malloc(sizeof(int) * max_size);  
  
        if (NULL != des_space)  
        {  
            MSort( src, des_space, low, mid, max_size);  
            MSort( src, des_space, mid+1, high, max_size);  
  
            merge( des_space, des, low, high, mid);  
        }     
  
        free(des_space);  
    }  
}  
  
void Meger_Sort(int arr[], int low, int high, int len)  
{  
    MSort( arr, arr, low, high, len);  
}  
  
int main(void)  
{  
    int arr[10];  
      
    for ( int i=0; i<10; i++)  //初始化数据  
    {  
        arr[i] = rand()%100;  //随机生成数据  
    }  
    printf("Before sort:\n");  //打印排序前的数据  
    for (int i = 0; i < 10; i++)  
    {  
        printf("%d ",arr[i]);  
    }  
  
    //开始排序  
    Meger_Sort( arr, 0, 10-1, 10);  
  
  
    printf("\nAfter sort:\n"); //打印排序后的数据  
    for (int i = 0; i < 10; i++)  
    {  
        printf("%d ",arr[i]);  
    }  
    system("pause");  
    return 0;  
}