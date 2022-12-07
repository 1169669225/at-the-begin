#include <iostream>
using namespace std;
class Person
{
    public:
    Person()
    {
        printf("Person函数的默认构造函数调用");
    }
    Person(int Age)
    {
        printf("Person的有参构造函数调用");
        m_Age = Age;
    }
    Person(const Person &p)
    {
        printf("Personee的拷贝构造函数调用");
        m_Age = p.m_Age;
    }
    ~Person()
    {
        printf("Person的析构函数调用");
    }
    int m_Age;
};
void test01()
{
    Person p;
    p.m_Age = 18;
    Person p2(p);
    printf("p2的年龄是:%d",p2.m_Age);

}
void test02()
{
    Person p;
}
int main()
{
    test02();
    return 0;
}