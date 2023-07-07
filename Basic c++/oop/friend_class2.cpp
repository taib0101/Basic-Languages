//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

class friend2
{
    public:
        void show_friend1_from_friend2(class friend1 &ref);
};

class friend1
{
    private:
        char *name;
        int age;
        const char *hobby;
        friend class friend2;
    public:
        void frnd_insert(char *namee,int agee,const char *hobbyy);
        
};
//friend2 getting all access of friend1 by using friend class friend2
void friend1 :: frnd_insert(char *namee,int agee,const char *hobbyy)
{
    name = namee;
    age = agee;
    hobby = hobbyy;
}
void friend2 :: show_friend1_from_friend2(class friend1 &ref)
{
    cout << "showing friend1 elements by using friend2 member function" << endl;
    cout << "Friend1 name = " << ref.name << endl;
    cout << "Friend1 age = " << ref.age << endl;
    cout << "Friendly hobby = " << ref.hobby << endl; 
}
int main()
{
    class friend1 x;
    char ch[] = "Rafi";
    x.frnd_insert(ch,24,"Pot");
    x.frnd_insert(ch,24,"Mod");
    class friend2 y;
    y.show_friend1_from_friend2(x);
    return 0;
}
