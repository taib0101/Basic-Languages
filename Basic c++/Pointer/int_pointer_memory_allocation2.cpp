#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int *ptr = new int;
    //ptr = new int;
    int *ptr = new int(50);
    // scanf("%d",ptr);
    // cin >> *ptr;
    cout << *ptr << endl;
    delete ptr;
    return 0;
}