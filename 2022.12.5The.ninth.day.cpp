 #include <iostream>

using namespace std;
//立方体类
//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体体积和面积
//4.分别利用全局函数和成员函数，判段两个立方体是否相等
class Cube
{
    public:
    //行为,获取立方体面积和体积
    //设置长
    void setL(int l)
    {
      m_L = 1;
    }
    //获取长
    int getL()
    {
        return  m_L;
    }
    //设置宽
    void setW(int w)
    {
      m_W= w;
    }
    //获取宽
    int getW()
    {
        return  m_W;
    }
    //设置高
    void setH(int h)
    {
      m_H = h;
    }
    //获取高
    int getH()
    {
        return m_H;
    }
    //获取立方体面积
    int calculateS()
    {
        return 2*m_L*m_W+2*m_W*m_H+2*m_L*m_H;
    }
    //获取立方体体积
    int calculateV()
    {
        return m_L*m_H*m_W;
    }
//利用成员函数判断相等
    bool issamebyclass(Cube &c)
    {
        if(m_L == c.getL() && M_w == c.getW() && m_H == c.getH())
        {
            return true;
        }
        return false;
    }
    private:
    //属性
    int m_L;
    int m_W;
    int m_H;
};
//利用全局函数判断相等
// bool issame(Cube c1, Cube c2)
// {
//     if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//     {
//         return true;
//     }
//     return false;
// }
int main()
{
    //创建立方体对象
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(11);
   printf("c1的体积为%d\n",c1.calculateV());
   //创建第二个立方体
   Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);
    bool ret = c1.issamebyclass(c2);
    if(ret)
    {
      printf("c1与c2相等");
    }
    else{
        printf("c1与c2不相等");
    }
    return 0;
}

点和圆的关系
点到圆心的距离 == 半径，在圆上
            >            外
            <            内
#include <iostream> 
using namespace std;
//点类
class Point
{
    public:
    //设置x
    void setX(int x)
    {m_X = x;}
    //获取x
    int getX()
    { return m_X; }
    //设置y
     void setY(int y)
    { m_Y = y;}
    //获取y
    int getY()
    { return m_Y; }
    private:
    int m_X;
    int m_Y;
};
//圆类
class circle
{
    public:
    //设置半径
    void setR(int r)
    {m_R = r;}
    //获取半径
    int getR()
    {return m_R;}
    //设置圆心
    void setCenter(Point center)
    {m_Center = center;}
    //获取圆心
    Point getCenter()
   { return m_Center;}
    private:
    int m_R;//半径
    int m_X;
    int m_Y;
    Point m_Center;
    
};
//判断点和圆关系
void isincircle(circle &c, Point &p)
{
    //计算两点之间距离平方
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    //计算半径的平方
    int rDistance = c.getR() * c.getR();
    //判断关系
    if(distance == rDistance)
    {printf("点在圆上");}
    else if(distance > rDistance)
    {printf("点在圆外");}
    else
     {printf("点在圆内");}
}
int main()
{
    //创建圆
    circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    //创建点
    Point p;
    p.setX(10);
    p.setY(10);
    //判断关系
    isincircle(c,p);
    return 0;
}

