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
    int circle(x,y,r)
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
    int Init(X,Y,R,x,y,r)
    {
        cout<<"Inner Circle Info..."<<endl;
        start(const Circle &circle){circle.take(X,Y,R);};
        cout<<"Outter Circle Info..."<<endl;
        start(const Circle &Circle){circle.take(x,y,r);};
    }
    void ShowRingInfo(void);
};



int main()
{
    Ring ring;
    ring.Init(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}


