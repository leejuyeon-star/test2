#include <iostream>
using namespace std;

class Point
{
    private:
    int xpos, ypos;
    public:
    void Init(int x, int y)
    {
        xpos=x;
        ypos=y;
    }
    void ShowPointInfo() const{
        cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Circle
{
    private:
    int radius;
    public:
    //중심좌표, 반지름길이 저장, 출력
    int take(int x, int y,int r)
    {
        radius=r;
        cout<<"radius: "<<radius<<endl;
        Point point;
        point.Init(x,y);
        point.ShowPointInfo();
    }
};

class Ring
{
    public:
    void Init(int X,int Y,int R,int x,int y,int r)
    {
        cout<<"Inner Circle Info..."<<endl;
        start(Circle &circle);
        cout<<"Outter Circle Info..."<<endl;
        starts(Circle &circle);
    }

    void starts(Circle &circle)
        {
            circle.take(x,y,r);
        }
    
    void start(Circle &circle)
        {
            circle.take(X,Y,R);
        }
};



int main()
{
    Ring ring;

    ring.Init(1,1,4,2,2,9);
    return 0;
}


