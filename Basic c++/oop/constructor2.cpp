#include<bits/stdc++.h>
using namespace std;

class car
{
    private:
        int price;
        int *model;
    public:
        car();//deafault constructor
        car(int pricee,int *modell);//paramiterized constructor
        int update(class car obj);
        int update_ref(class car &obj);
        int update_point(class car *obj);
        void final_variables();
};

car :: car()
{
    cout << "Hello gentleman , I am here during initial time" << endl;
}

car :: car(int pricee,int *modell)
{
    price = pricee;
    model = modell;
    cout << "Initialized price and model as pointer " << endl;
    cout << "Sum1 = " << price + *model << endl;
}

int car :: update(class car obj)
{
    // cout << "Update function part" << endl;
    obj.price = 200;
    *obj.model = 10000;
    return obj.price + *obj.model;
}

int car :: update_ref(class car &obj)
{
    // cout << "Update_ref function part" << endl;
    obj.price = 50;
    return obj.price + *obj.model; 
}

int car :: update_point(class car *obj)
{
    (*obj).price = 50;
    // obj -> price = 50;
    *(*obj).model = 50;
    // *(obj -> model) = 50;
    return (*obj).price + *(*obj).model;
}

void car :: final_variables()
{
    cout << "Price = " << price << endl;
    cout << "Model = " << *model << endl;
}

int main()
{
    int x, y;
    cin >> x >> y;
    class car taib = car(x,&y);
    // taib = car(200,564564);
    cout << endl;
    cout << "sum2 = " << taib.update(taib) << endl;
    taib.final_variables();
    cout << endl;
    cout << "sum3 = " << taib.update_ref(taib) << endl;
    taib.final_variables();
    cout << endl;
    cout << "sum4 = " << taib.update_point(&taib) << endl;
    taib.final_variables();
    cout << endl;

    return 0;
}