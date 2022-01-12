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
        if (list[A][0]<list[i][0])
        {
            A=i;
        }
    }
    if (A==1) 
        return 0;  

    sum++;
    return list[A][0];
}

void remove_u_v(int u, int list[][2], int const n)
{
    for (int i=1;i<n;i++)
    {
        if ((list[i][0]==u)||(list[i][1]==u))
        {
            list[i][0]=0;
        }
    }
}

int main(void)
{
    int N;
    int sum=0;
    int list[10000][2]={0};
    int biggest_u;
    put puts;

    puts.bringn(N);
    puts.bringlist(N, list);
    while(1)
    {
    biggest_u = find_u_plus_sum(N,list);
    if (biggest_u==0)
        { 
            sum++;
            cout<<sum;
            break;
        }
    remove_u_v(biggest_u, list, N);
    }

    /*
    

    //sum+=1
    //제일 큰 u 모두 제거, u값과 같은 v도 모두 제거
    //끝인지 확인
    //제일 큰 u 찾기...반복
    */
}