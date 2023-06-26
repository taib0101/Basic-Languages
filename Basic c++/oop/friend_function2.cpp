#include<bits/stdc++.h>
using namespace std;

class boy
{
    public:
        void show(class girl &ref);
};

class girl
{
    private:
        char *name;
        int age;
        float cgpa;
        friend void boy :: show(class girl &ref);
    public:
        void insertt(char *namee,int agee);
};

void girl :: insertt(char namee[],int agee)
{
    name = namee;
    age = agee;
}

void boy :: show(class girl &ref)
{
    ref.cgpa = 2.00;
    cout << "Output of all information of girl named as tag chesra" << endl;
    cout << "Name : " << ref.name << endl;
    cout << "Age : " << ref.age << endl;
    cout << "Cgpa : " << ref.cgpa << endl;
}
//I got segmentation fault for copying char array pointer by using this 
//strcpy(name,namee) where *name and *namee and strcpy doesn't work
//in g++ new compiler
int main()
{
    class girl chesra;
    char ch[] = "orpa";
    chesra.insertt(ch,21);
    class boy taib;
    taib.show(chesra);
    return 0;
}