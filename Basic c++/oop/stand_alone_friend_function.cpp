#include<bits/stdc++.h>
using namespace std;

class boy
{
    private:
        const char *name;
        int age;
    public:
        void set_boy(const char *namee,int agee);
        //stand alone friend function
        friend void show_all_class(class boy &ref1,class girl &ref2);

};

class girl
{
    private:
        const char *name;
        int age;
    public:
        void set_girl(const char *namee,int agee);
        //stand alone friend function
        friend void show_all_class(class boy &ref1,class girl &ref2);
};

void girl :: set_girl(const char *namee,int agee)
{
    name = namee;
    age = agee;
}

void boy :: set_boy(const char *namee,int agee)
{
    name = namee;
    age = agee;
}

void show_all_class(class boy &ref1,class girl &ref2)
{
    cout << "Boy" << endl;
    cout << "Name : " << ref1.name << endl;
    cout << "Age : " << ref1.age << endl;
    cout << endl;

    cout << "Girl" << endl;
    cout << "Name : " << ref2.name << endl;
    cout << "Age : " << ref2.age << endl;
}

int main()
{
    class boy boy;
    boy.set_boy("Taib",23);

    class girl girl;
    girl.set_girl("Taylor",21);
    show_all_class(boy,girl);
    return 0;
}