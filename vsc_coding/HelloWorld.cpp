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
        cout<<"1. ���°���"<<endl;
        cout<<"2. �Ա�\n";
        cout<<"3. ���\n";
        cout<<"4. ���¹�ȣ ��ü ���\n";
        cout<<"5. ���α׷� ����\n";
        cout<<"����:";
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
    cout<<"[���°���]\n����ID :";
    cin>>ID;
    cout<<"�̸� :";
    cin>>name[ID];
    cout<<"�Աݾ� :";
    cin>>coin[ID];
}


inline void put()
{
    int plus;

    cout<<"[�Ա�]\n";
    cout<<"����ID:";
    cin>>ID;
    cout<<"�Աݾ�:";
    cin>>plus;
    coin[ID]+=plus;
    cout<<"�ԱݿϷ�";
}

inline void out()
{
    int minus;

    cout<<"[���]\n";
    cout<<"����ID:";
    cin>>ID;
    cout<<"��ݾ�:";
    cin>>minus;
    coin[ID]-=minus;
    cout<<"��ݿϷ�";
}

inline void allprint()
{
    for (int i=0;i<1001;i++)
    {
        if (name[i][0]!='\0')
        {
            cout<<"����ID:"<<i<<endl;
            cout<<"�̸�:"<<name[i]<<endl;
            cout<<"�ܾ�"<<coin[i];
        }
    }
    
}

