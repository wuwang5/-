#include <stdio.h>
void main()
{
    int i,k,g,s;
    int m1,m2,m3,a[10];
    a[1]=1;i=1;g=1;s=0;
    while(1)
    {
        g=1;
        for(k=i-1;k>0;k--)   //ע��˴�����������ϰ�ߴ�д�� for(k=i-1;i>0;i--)
            if(a[k]==a[i]) {g=0; break;} //������ͬ�����g=0
            
            if(i==9 && g==1 && a[1]<a[4]){  //Ϊ�˱������ظ�����a[1]<a[4]
                m1=a[2]*10+a[3];
                m2=a[5]*10+a[6];
                m3=a[8]*10+a[9];			
                if(a[1]*m2*m3+a[4]*m1*m3==a[7]*m1*m2){
                    s++;
                    printf("%d/%d+%d/%d=%d/%d \t",a[1],m1,a[4],m2,a[7],m3);
                    if(s%2==0) printf("\n");
                }			
            }		
            
            if(i<9 &&g==1){i++; a[i]=1; continue;} //��ǰ������,ִ��continue���ֱ������while��䣬����ִ����������  		
            while(a[i]==9 && i>1) i--;   //����һ������			
            if(a[i]==9 && i==1) break;  //ע��˴����ܼ�д�� 
            else a[i]++;				
    }
    printf("����%d���⣡\n",s);
}