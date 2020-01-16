#include<iostream>
using namespace std;

const int N=3;
const int W=50;
int weights[N+1]={0,10,20,30};
int values[N+1]={0,60,100,120};
int V[N+1][W+1]={0};

int knapsack(int i,int j)
{
    int value;
    if(V[i][j]<0)
    {
        if(j<weights[i])
        {
            value=knapsack(i-1,j);
        }
        else
        {
            value=max(knapsack(i-1,j),values[i]+knapsack(i-1,j-weights[i]));
        }
        V[i][j]=value;
    }
    return V[i][j];
}

int main()
{
    int i,j;
    for(i=1;i<=N;i++)
        for(j=1;j<=W;j++)
            V[i][j]=-1;
    cout<<knapsack(3,50)<<endl;
    cout<<endl;
}