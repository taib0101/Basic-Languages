//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first,second,sum,n;

    while(cin >> n)
    {
        first = 1;
        second = 0;
        for(int i=1; i<=n; ++i)
        {
            sum = first + second;
            second = first;
            first = sum;
        }
        cout<<first<<endl;
    }
    return 0;
}
