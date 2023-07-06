#include<bits/stdc++.h>
using namespace std;

int main()
{
    // float *ptr = new float;
    //ptr = new float;
    float *ptr = new float(50);
    // scanf("%f",ptr);
    // cin >> *ptr;
    cout << *ptr << endl;
    delete ptr;
    return 0;
}