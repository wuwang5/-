#include <stdio.h>
#include <string>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
//ÿ�ν����黮��Ϊ�����֣���������������һ�������ҵ���kС��������ǰ�����������С��k����
void FindKLeastNums(int Data[],int lower,int upper,int Least_Size)//����С���ĺ���
{
	if(Least_Size<lower||Least_Size>upper)
		return;
	int i = lower;int j = upper + 1;int Tmp;
	while (1)
	{
		do 
		{
			i++;
		} while (i<upper && Data[i]<Data[lower]);
	    do 
	    {
			j--;
	    } while (Data[j]>Data[lower]);
		if (i>j)
		  break;
		Tmp = Data[i];
		Data[i] = Data[j];
		Data[j] = Tmp;
	}
	Tmp = Data[lower];
	Data[lower] = Data[j];
	Data[j] = Tmp;
	if (j<Least_Size)
	{
		FindKLeastNums(Data,j+1,upper,Least_Size);
	}
	else if (j>Least_Size)
	{
		FindKLeastNums(Data,lower,j-1,Least_Size);
	}
	return;
}
 
int main(void)
{
	int k;
	int i = 0;
	int data[10] = {2,0,5,1,3,8,6,4,7,9};

	printf("ԭ����Ϊ��"); //���ԭ����
	while(i<10)
	{
		printf("%d ",data[i]);
		i++;
	}

	FindKLeastNums(data,0,9,3);

	printf("\n���������������С���ĸ���k��");//�������������С���ĸ���
	scanf("%d",&k);

	printf("��С��%d����Ϊ:",k);//�����С��
    for (i = 0;i<k;i++)    
    {
		printf("%d ",data[i]);
    }
	printf("\n");
    return 0;
}