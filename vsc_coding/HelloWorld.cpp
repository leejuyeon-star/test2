# include <iostream>
using namespace std;

int ID;
char name[1000][100]={};
int coin[1000]={0};

inline void create();
inline void choose(int a);
inline void put();
inline void out();
inline void allprint();


int main(void)
{
    int a;
    while(1)
    {
        cout<<"-----Menu-----"<<endl;
        cout<<"1. 계좌개설"<<endl;
        cout<<"2. 입금\n";
        cout<<"3. 출금\n";
        cout<<"4. 계좌번호 전체 출력\n";
        cout<<"5. 프로그램 종료\n";
        cout<<"선택:";
        cin>>a;
        choose(a);
    }


}

inline void choose(int a)
{
    switch(a)
    {
    case 1:
        create();
        break;
    case 2:
        put();
        break;
    case 3:
        out();
        break;
    case 4:
        allprint();
        break;
    case 5:
        exit(0);
        break;
    }
    
}

inline void create()
{
    cout<<"[계좌개설]\n계좌ID :";
    cin>>ID;
    cout<<"이름 :";
    cin>>name[ID];
    cout<<"입금액 :";
    cin>>coin[ID];
}


inline void put()
{
    int plus;

    cout<<"[입금]\n";
    cout<<"계좌ID:";
    cin>>ID;
    cout<<"입금액:";
    cin>>plus;
    coin[ID]+=plus;
    cout<<"입금완료";
}

inline void out()
{
    int minus;

    cout<<"[출금]\n";
    cout<<"계좌ID:";
    cin>>ID;
    cout<<"출금액:";
    cin>>minus;
    coin[ID]-=minus;
    cout<<"출금완료";
}

inline void allprint()
{
    for (int i=0;i<1001;i++)
    {
        if (name[i][0]!='\0')
        {
            cout<<"계좌ID:"<<i<<endl;
            cout<<"이름:"<<name[i]<<endl;
            cout<<"잔액"<<coin[i];
        }
    }
    
}

