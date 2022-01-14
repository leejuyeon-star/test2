#include <iostream>

int sum=0;
using namespace std;


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,A,i;
    int biggest_u;

    cin>>N;
    int list[N][2]={0};
    
    for (int i=1;i<N;i++)
    {
        cin>>list[i][0]>>list[i][1];
    }
    
    while(1)
    {
    int A=1;
    for (int i=2;i<N;i++)
    {
        if (list[A][0]<=list[i][0])
        {
            A=i;
        }
    }
    if (list[A][0]==0)
        { 
        cout<<sum;
        break;
        }  
    if (A==1)
        {
            sum++;
            cout<<sum;
            break;
        }
    sum++;
    
    biggest_u = list[A][0];
    

    for (int i=1;i<N;i++)
    {
        if ((list[i][0]==biggest_u)||(list[i][1]==biggest_u))
            list[i][0]=0;
    }

    }

 
}