//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;
struct meta
{
    int xx;
    int yy;
};
int *pointer1(int *p1)//we can use argument type as float, char , stl libraries
{
    *p1 = 3;
    return p1;
}

vector < int > *pointer2(vector < int > *p1)
{
    int n = p1->size();
    //cout << "size of pointer vector = " << n << endl;
    p1->push_back(3);
    return p1;
}

struct meta *pointer3(struct meta *p1)//meta pointer is thoose same thing
{
    *p1 = {4,5};
    // p1 -> xx = 4;
    // p1 -> yy = 5;
    // (*p1).x = 4
    // (*p2).y = 5
    return p1;
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
        //pointer(p1)
        p1 = pointer1(&n);
        cout << "after updating ,n = " << *p1 << endl;
        
        vector < int > vc;
        int a;
        for(int i = 0; i < 3; ++i)
            cin >> a,vc.push_back(a);
        cout << "vc size = " << vc.size() << endl;  
        vector < int > *vcp = pointer2(&vc);
        cout << "vc size after calling refernce = " << vcp -> size() << endl;
        
        struct meta b;//we can also write like this *meta b*;
        b = {1,2};
        cout << "b.xx = " << b.xx << " , b.yy = " << b.yy << endl;
        meta *bp = pointer3(&b);
        cout << "after ,b.xx = " << bp -> xx << " , b.yy = " << bp -> yy << endl;
    }
    return 0;
}
