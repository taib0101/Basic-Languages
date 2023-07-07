//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

class friend2
{
    private:
        char *name;
        int age;
        const char *hobby;
    public:
        void show1(class friend1 &ref);//defining function here
};

class friend1
{
    private:
        char *name;
        int age;
        const char *hobby;
    public:
        void insertt(char *namee,int agee,const char *hobbyy);
        friend void friend2 :: show1(class friend1 &ref); //need to define your friend function first
};
void friend1 :: insertt(char *namee, int agee,const char *hobbyy)
{
    name = namee;
    age = agee;
    hobby = hobbyy;
}

void friend2 :: show1(class friend1 &ref)
{
    cout << "output from defined by my freind as chesra" << endl;
    cout << "Name : " << ref.name << endl;
    cout << "Age : " << ref.age << endl;
    cout << "Hobby : " << ref.hobby << endl;
}

int main()
{
    class friend1 chesra;
    char nam[] = "orpa";
    chesra.insertt(nam,21,"doing flirt with boys");
    class friend2 taib;
    taib.show1(chesra);
    return 0;
}
