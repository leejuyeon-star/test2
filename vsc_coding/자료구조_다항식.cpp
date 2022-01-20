#include <iostream>
using namespace std;

typedef class {
    public:
    int degree;
    float coef[200]={0};
}poly;

poly plus_both(poly one, poly two){
    poly final;
    int minus = one.degree - two.degree;
    if (minus<0) {
        final.degree = two.degree;
        cout<<final.degree<<endl;
        for (int i=0; i<-(minus); i++)
        {
        final.coef[i] = two.coef[i];
        cout<<final.coef[i]<<endl;
        }
        minus= -(minus);
        int small = 0;
        while ((one.coef[small]!=0)||(two.coef[minus]!=0))
        {
            final.coef[minus]=one.coef[small]+two.coef[minus];
            minus++;
            small++;
        }
    }
    else if(minus==0){
        final.degree = two.degree;
        cout<<final.degree<<endl;

        int small = 0;
        while ((one.coef[small]!=0)||(two.coef[small]!=0))
        {
            final.coef[small]=one.coef[small]+two.coef[small];
            small++;
        }
    }
    else {
        final.degree = one.degree;
        cout<<final.degree<<endl;
        for (int i=0; i<minus; i++)
        {
        final.coef[i] = one.coef[i];
        cout<<final.coef[i]<<endl;
        }
        int small = 0;
        while ((one.coef[minus]!=0)||(two.coef[small]!=0))
        {
            final.coef[minus]=one.coef[minus]+two.coef[small];
            minus++;
            small++;
        }
    }
   
    for (int i=0;i<final.degree;i++)
    {
        cout << final.coef[i]<<',';
    }
    return final;

}

int main()
{
    poly one= {7, {2,3,1,3,2,2,3}};
    poly two= {4, {2,2,2,2}};

    poly final = plus_both(one, two);
   
}