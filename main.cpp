#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        
    }
};

void foo1()
{
    cout<<"foo1";
}
void foo2(int)
{
    cout<<"foo2";
}
void foo3(int, char)
{
    cout<<"foo3";
}
int foo4()
{
    return 1;
}
int foo5(double)
{
    return 1;
}
char foo6(char, A)
{
    return 'Q';
}
void foo7(int, ...)
{
    cout<<"foo7";
}

template <class T>
void foo8(T)
{
    cout<<"foo8";
}


int main()
{
    A q;
    void(*pfoo1)() = foo1;
    pfoo1();
    cout<<endl;
    void (*pfoo2)(int)= foo2;
    pfoo2(2);
    cout<<endl;
    void (*pfoo3)(int,char)= foo3;
    pfoo3(2,'Z');
    cout<<endl;
    int (*pfoo4)()=foo4;
    cout<<pfoo4();
    cout<<endl;
    int (*pfoo5)(double)=foo5;
    cout<<pfoo5(1.2);
    cout<<endl;
    char (*pfoo6)(char,A)=foo6;
    cout<<pfoo6('A',q);
    cout<<endl;
    void (*pfoo7)(int,...)=foo7;
    pfoo7(10,123,12313);
    cout<<endl;
    void (*pfoo8)(char)=foo8;
    pfoo8('Q');
    cout<<endl;
    void (*pfoo9)(int)=foo8;
    pfoo9(123);
    
    
    
    
    

    
}
