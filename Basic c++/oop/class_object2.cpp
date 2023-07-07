//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
        void fun_A();
};

class B
{
    public:
        A obj1;
};

void A :: fun_A()
{
    cout << "calling from B" << endl;
}

int main()
{
    class B obj2;
    obj2.obj1.fun_A();//calling member function of class A through class B
    return 0;
}
