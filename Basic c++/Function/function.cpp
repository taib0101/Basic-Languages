#include<bits/stdc++.h>
using namespace std;

struct meta
{
    int x;
    int y;
};

void fun1(int n)
{
    char c = n + 'a';//this is acceptable for 0 - 9
    cout << "c = " << c << endl;
}

float fun2(int n)
{
    return (float) (n);
}

vector < int > fun3(int n)
{
    vector < int > vc;
    int a;
    for(int i = 0; i < n; ++i)
        cin >> a,vc.push_back(a);
    return vc;
}

struct meta fun4()
{
    meta mm = {1,2};
    return mm;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        fun1(n);
        printf("c = %.2f\n",fun2(n));
        vector < int > vc = fun3(n);

        meta m = fun4();
        cout << "m.xx = " << m.x << " , m.xx = " << m.y << endl;
    }
    return 0;
}