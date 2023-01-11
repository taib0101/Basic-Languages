#include<bits/stdc++.h>
using namespace std;
struct meta
{
    int xx;
    int yy;
};
void pointer1(int *p1)//we can use argument type as float, char , stl libraries
{
    *p1 = 3;
}

void pointer2(vector < int > *p1)
{
    int n = p1->size();
    //cout << "size of pointer vector = " << n << endl;
    p1->push_back(3);
}

void pointer3(struct meta *p1)
{
    *p1 = {4,5};
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,*p1 = &n;
        //p1 = &n;
        cin >> n;
        cout << "n value before calling function with reference " << n << endl;
        pointer1(&n);//pointer(p1)
        cout << "after updating ,n = " << n << endl;
        
        vector < int > vc;
        int a;
        for(int i = 0; i < 3; ++i)
            cin >> a,vc.push_back(a);
        cout << "vc size = " << vc.size() << endl;  
        pointer2(&vc);
        cout << "vc size after calling refernce = " << vc.size() << endl;
        
        struct meta b;//we can also write like this *meta b*;
        b = {1,2};
        cout << "b.xx = " << b.xx << " , b.yy = " << b.yy << endl;
        pointer3(&b);
        cout << "after ,b.xx = " << b.xx << " , b.yy = " << b.yy << endl;
    }
    return 0;
}