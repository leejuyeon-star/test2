#include <iostream>

using namespace std;

typedef class{
    public:
    int coef[20][2];
}poly;


poly plus_both(poly one, poly two)
{
    poly final;
    int Apos=0, Bpos=0, Cpos=0;
   while((one.coef[Apos][1]!=0)||(two.coef[Bpos][1]!=0))
    {
        if ((one.coef[Apos][0]) > (two.coef[Bpos][0]))
        {
            final.coef[Cpos][0]= one.coef[Apos][0];
            final.coef[Cpos][1]=one.coef[Apos][1];
            Apos++;
            Cpos++;
            cout<<"one big\n";

        }

        else if ((one.coef[Apos][0]) < (two.coef[Bpos][0]))
        {
            final.coef[Cpos][0]= two.coef[Bpos][0];
            final.coef[Cpos][1]=two.coef[Bpos][1];
            Bpos++;
            Cpos++;
            cout<<"two big\n";
        }

        else if(one.coef[Apos][0]==two.coef[Bpos][0])
        {
            final.coef[Cpos][0]= one.coef[Apos][0];
            final.coef[Cpos][1]=one.coef[Apos][1]+two.coef[Bpos][1];
            Apos++;
            Bpos++;
            Cpos++;
        }

    }
    for (int i=0;i<Cpos;i++)
        {
            cout<<'['<<final.coef[i][0]<<','<<final.coef[i][1]<<"]";
        }
}


int main()
{
    poly one= {10,1,1,2,0,3};
    poly two= {10,3,5,2,3,1,0,2};
    poly final = plus_both(one, two);
}