#include <iostream>

using namespace std;

typedef class{
    public:
    int coef[20][3];
}poly;


poly plus_both(poly one, poly two)
{
    poly final;
    int Apos=0, Bpos=0;
   while((one.coef[Apos][1]!=0)||(two.coef[Bpos][1]!=0))
    {
        if (one.coef[Apos][0] > two.coef[Bpos][0])
        {
            final.coef[Apos][0]= one.coef[Apos][0];
            final.coef[Apos][1]=one.coef[Apos][1];
            Apos++;
        }

        else if (one.coef[Apos][0] < two.coef[Bpos][0])
        {
            final.coef[Bpos][0]= one.coef[Bpos][0];
            final.coef[Bpos][1]=one.coef[Bpos][1];
            Bpos++;
        }

        else
        {
            final.coef[Bpos][0]= one.coef[Bpos][0];
            final.coef[Bpos][1]=one.coef[Bpos][1]+two.coef[Apos][1];
            Apos++;
            Bpos++;
        }

    }
    for (int i=0;i<20;i++)
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