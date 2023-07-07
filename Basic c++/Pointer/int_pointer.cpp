//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n,*ptr;
    int n, *ptr = &n;
    scanf("%d",&n);
    // ptr = &n;
    cout << "Address of n is : " << &n << endl;
    cout << "Address of n by using ptr variable which has pointed n's adrress is : " << ptr << endl;
    cout << "Value of n is : " << n << endl;
    cout << "Value of N using *ptr is : " << *ptr << endl;
    cout << "Address of ptr is : " << &ptr << endl;
    return 0;
}
