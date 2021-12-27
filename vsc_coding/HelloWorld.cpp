# include <iostream>
using namespace std;

int ID;
int name[1000];
int coin[1000];

inline int create()
{
    cout<<"[계좌개설]\n계좌ID :";
    cin<<ID;
    cout<<"이름 :";
    cin<<name[ID];
    cout<<"입금액 :";
    cin<<coin[ID];
}

int main(void)
{
    //while(1)
    {
        cout<<"-----Menu-----"<<endl;
        cout<<"1. 계좌개설"<<endl;
        cout<<"2. 입금\n";
        cout<<"3. 출금\n";
        cout<<"4. 계좌번호 전체 출력\n";
        cout<<"5. 프로그램 종료\n";
    }


}