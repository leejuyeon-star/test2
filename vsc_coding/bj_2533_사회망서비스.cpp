#include <iostream>

int sum=0;
using namespace std;

class put
{
    public:
    void bringn (int &n);
    void bringlist(const int n, int lists[][2]);
};

void put::bringn(int &n)
{
    cin>>n;
}

void put::bringlist(const int n, int lists[][2])
{
    for (int i=1; i<n;i++)
    {
        cin>>lists[i][0]>>lists[i][1];
    }
    
}

int find_u_plus_sum(int n, int list[][2])
{
    
    int A=1;
    for (int i=2;i<n;i++)
    {
        cout<<"for is working?"<<endl;
        if (list[A][0]<=list[i][0])
        {
            A=i;
        }
    }
    if (list[A][0]==0)
        { 
        cout<<"no one alive"<<endl;
        return 0;
        }  
    if (A==1)
        {
            sum++;
            cout<<"rest is alive"<<endl;
            return 0;
        }
    sum++;
    cout<<"it will shoot much"<<endl;
    if (list[A][0]==0)
        cout<<"wrong zero"<<endl;
    return list[A][0];
}

void remove_u_v(int u, int list[][2], int const n)
{
    for (int i=1;i<n;i++)
    {
        if ((list[i][0]==u)||(list[i][1]==u))
            list[i][0]=0;
    }
}

int main(void)
{
    int N;
    int list[10000][2]={0};
    int biggest_u;
    put puts;

    puts.bringn(N);
    puts.bringlist(N, list);
    while(1)
    {
    cout<<"why?"<<endl;
    biggest_u = find_u_plus_sum(N,list);
    if (biggest_u==0)
        { 
            cout<<sum;
            break;
        }
    remove_u_v(biggest_u, list, N);
    }

 
}