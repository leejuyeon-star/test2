#include <iostream>
using namespace std;

typedef class {
    public:
    int degree;
    float coef[200];
}poly;

poly plus_both(poly one, poly two){
    poly final;
    int minus = one.degree - two.degree;
    if (minus<0) {
        final.degree = two.degree;
        cout<<final.degree;
        for (int i=0; i<-(minus); i++)
        {
        final.coef[i] = two.coef[i];
        cout<<final.coef[i];
        }
        minus= -(minus);
    }
    else if(minus==0){
        final.degree = two.degree;
        cout<<final.degree;
    }
    else {
        final.degree = one.degree;
        cout<<final.degree;
        for (int i=0; i<minus; i++)
        {
        final.coef[i] = one.coef[i];
        cout<<final.coef[i];
        }
    }
    minus--;
    while ((one.coef[minus]!=0)||(two.coef[minus]!=0))
    {
        final.coef[minus]=one.coef[minus]+two.coef[minus];
        minus++;
    }
    for (int i=0;i<10;i++)
    {
        cout << final.coef[i];
    }
    return final;

}

int main()
{
    poly one= {5, {1,3,2,2,3}};
    poly two= {7, {2,3,3,2,2,2,2}};

    poly final = plus_both(one, two);



    
}