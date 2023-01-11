#include<bits/stdc++.h>
using namespace std;

void fun1(int n,int i)
{
    if(i == n+1)
    {
        cout << "\n";
        return;
    }
    cout << i << " ";
    fun1(n,i+1);
    cout << i << " ";
}

int fun2(int n,int i)
{
    if(i == n+1)
        return 1;
    return i * fun2(n,i+1);
}

int fun3(int x,int y)
{
    if((x%y) == 0)
        return y;
    return fun3(y,x%y);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        fun1(n,1);
        cout << "\n";
        cout << "factorial = " << fun2(n,1) << endl;
        int m;
        cin >> n >> m;
        cout << "G.C.D = " << fun3(n,m) << endl;
    }
    return 0;
}