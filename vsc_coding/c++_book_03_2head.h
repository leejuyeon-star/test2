#ifndef HEAD
#define HEAD

#include <iostream> 
using namespace std;



class Calculator{
    private:
    int plus=0, minus=0;

    public:
    inline float Add(float a, float b);
    void ShowOpCount();
};

inline float Calculator::Add(float a, float b)
{
    plus++;
    return a+b;
}

#endif