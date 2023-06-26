#include<bits/stdc++.h>
using namespace std;

class boy
{
    private:
        char *name;
        int age;
        const char *boy_x_gf_name;
        string addiction;
        class girl jenny;
    public:
        void insertt(char *namee,int agee,const char *boyx,string addictionn);
};

class girl
{
    private:
        char *name;
        int age;
        const char *girl_x_bf_name;
        string addiction;
    public:
        friend class boy; // friend class
                          //girl gives all access to boy and boy know everything about girl
                          //but girl doesn't know about boy's details
                          //because boy doesn't give access to know about his details;
        void girl_show();
};

void girl :: girl_show()
{
    cout << "It is class girl and object jenny and ";
    cout << "object is defined in class private part and also called it ";
    cout << "from public member function named class boy" << endl;
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
    cout << "X Bf = " << girl_x_bf_name << endl;
    cout << "Addiction = " << addiction << endl;
}

void boy :: insertt(char *namee,int agee,const char *boyx,string addictionn)
{
    //inserting boys information in boy class;
    name = namee;
    age = agee;
    boy_x_gf_name = boyx;
    addiction = addictionn;
    cout << "From class boy and object Taib" << endl;
    cout << "Name = " << name << endl;
    cout << "Age = " << age << endl;
    cout << "X Gf = " << boy_x_gf_name << endl;
    cout << "Addiction = " << addiction << endl;

    //allocating girls infromation in boy class;
    char jnn[] = "Jenny";
    //jenny = {jnn,age,girl_x_bf_name};
    jenny.name = jnn; //jenny.name = "jenny" its not correct
    jenny.age = 21;
    jenny.girl_x_bf_name = "Taib";
    jenny.addiction = "pizza";
    jenny.girl_show();
}

int main()
{
    class boy taib;
    char namee[] = "Taib";
    taib.insertt(namee,24,"jenny","marijuana");   
    return 0;
}