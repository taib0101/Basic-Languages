//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

class member_variable
{
    private:
        string name;
        string university;
        int age;
        float cgpa;
        void show_info();
    public:
        void insertt(string nm, string uni,int ag,float cg);
};
//"::" is called scope resolution
void member_variable :: show_info()
{
    cout << "Name : " << name << "\n"
         << "University : " << university << "\n"
         << "Age : " << age << "\n"
         << "Cgpa : " << cgpa << endl;
}

void member_variable :: insertt(string nm, string uni,int ag,float cg)
{
    name = nm;
    university = uni;
    age = ag;
    cgpa = cg;
    show_info();
    cout << endl;
}

int main()
{
    //make member variable as private and 
    // show it by using private member function
    //but we cant call private member variable and 
    //we need to get help of public member function
    //It is secured to keep member variables in private
    class member_variable obj1;
    obj1.insertt("Taib","BUBT",23,2.00);   
    obj1.insertt("Ifty","STEC",22,4.00);   
    return 0;
}
