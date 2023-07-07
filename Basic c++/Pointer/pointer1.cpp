//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, *p1 = &n;
        scanf("%d",p1);
        printf("address of n holds p1 but *p1 point the n's value\n n = %d\n",n);
        int **p2 = &p1; // **p2 -> *p1 -> n
        cout << "**p2 = *p1 = n :: " << **p2 << endl;
        cout << "*p2 = p1 = &n :: " << *p2 << endl;
    }
    return 0;
}
