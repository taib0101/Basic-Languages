//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
        string name;
        string university;//member variable
        int age;
        float cgpa;
        void show() // inline member function
        {
            cout << name << "\n"
                 << university << "\n"
                 << age << "\n"
                 << cgpa << "\n";
        }
        //if we use inline member function 
        //time complexity is good when calling it but space complexity
        //is not good;
        void show2();
};

void A :: show2() // member function is good for space complexity
{
    cout << name << "\n"
        << university << "\n"
        << age << "\n"
        << cgpa << "\n";
}

int main()
{
    class A obj1,obj2;// here class is A and object is obj1
    //we can call public member variable like under below
    //but we cant call private member variable and 
    //we need to get help of public member function
    obj1 = {"Taib","BUBT",23,3.00};
    obj2 = {"Sifat","DIU",22,4.00};
    // obj1.str = "Taib";
    // obj1.university = "BUBT";
    //obj1.age = 23
    //obj1.cgpa = 3.00
    obj1.show();
    obj2.show2();
    return 0;
}
