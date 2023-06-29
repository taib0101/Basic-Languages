#include<bits/stdc++.h>
using namespace std;
//A constructor rules
//1.function name as class name
//no return data_type
//constructor member fuction always deserve public
//can't call with dot (.)

class car
{
    private:
        const char *name;
        const char *model;
        int price;
        void show();
    public:
        car(const char *namee,const char *modell,int pricee);//paramiterized constructor
};
// int car :: price = 10; // when member variable is static 
                          // we need to define it like that else don't
void car :: show()
{
    cout << "class car " << endl;
    cout << "Name : " << name << endl;
    cout << "Model : " << model << endl;
    cout << "Price : " << price << endl;
}
car :: car(const char *namee,const char *modell,int pricee)
{
    name = namee;
    model = modell;
    price = pricee;
    show();
}

int main()
{
    class car obj1 = car("Toyota","Axio",200);//same
    // class car obj1("Toyota","Axio",200);//same
    return 0;
}