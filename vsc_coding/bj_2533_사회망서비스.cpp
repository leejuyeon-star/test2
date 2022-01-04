#include <iostream>

using namespace std;

class put
{
    public:
    void bringn (int &n);
    void bringlist(const int n, int (&lists)[][2]);
};

void put::bringn(int &n)
{
    cin>>n;
}

void put::bringlist(const int n, int (&lists)[][2])
{
    for (int i=0; i<n-1;i++)
    {
        cin>>lists[i][0]>>lists[i][1];
        cout<<lists[i][0]<<"\n"<<lists[i][1]<<"\n";
    }
    
}


int main(void)
{
    int N;
    int sum=0;
    int list[10000][2]={0};
    put puts;
    puts.bringn(N);
  
    puts.bringlist(N, list);
    

    /*
    while (1)
    {
        sum+=1;

        for (i=1;i<N-1;i++)
        {
            A=0;
            if (u[A]<u[i])
            {
                A=i;
            }
            
        }

        


    
    }

    //sum+=1
    //제일 큰 u 모두 제거, u값과 같은 v도 모두 제거
    //끝인지 확인
    //제일 큰 u 찾기...반복
    */
}