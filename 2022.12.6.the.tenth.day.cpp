#include <iostream>
using namespace std;
//对象的初始化和清理
//1.构造函数，进行初始化操作,按照参数分：无参构造，有参构造
class Person
{
    public:
    //1.构造函数
    //没有返回值，不用写void
    //函数名与类名相同
    //构造函数可以有参数，可以发生重载
    //创建对象的时候，构造函数会自动调用，而且只调一次
    Person()
    {
        printf("Person无参构造函数的调用\n");
    }
    Person(int a)
    {
      age = a;
        printf("Person有参构造函数的调用\n");
    }
    //拷贝构造函数
    Person(const Person &p)
    {
      //将传入的人身上所有属性，拷贝到我身上
      age = p.age;
    }
    //2.析构函数，进行清理操作
    //没有返回值，不用写void
    //函数名与类名相同,在名称前加~
    //析构函数不可以有参数，不可以发生重载
    //对象在销毁前会自动调用析构函数，而且只会调用一次
    ~Person()
    {
        printf("Person的析构函数调用\n");
    }
    int age;
};
//构造和析构都是必须有的实现，如果自己不提供，编译器会提供空的构造合成析构
void test01()
{
    // Person p;//在栈上的数据，执行完毕后，释放这个对象
    //调用
    //1.括号法
    // Person p1;//默认构造函数调用,不要加()
    // Person p2(10);//有参构造函数
    // Person p3(p2);//拷贝构造函数
    // printf("p2的年龄:%d\n",p2.age);
    // printf("p3的年龄:%d\n",p3.age);
    //2.显示法
    Person p1;
    Person p2 = Person(10);//有参构造
    Person p3 = Person(p2);//拷贝构造
    //3.隐式转换法
    
}
int main()
{
     test01();
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
//   {
    
//     return 0;
//   }