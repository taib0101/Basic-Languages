#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 1; i <= 10; ++i)
        printf("%d ",i);
    cout << endl;

    int n;
    while(cin >> n && n)
        printf("n = %d\n",n);

    do
    {
        int m = n++;
        printf("m = %d\n",m);//asign first then increment
        m = ++n;
        printf("m = %d\n\n",m);//increment first then asign
    }
    while(0);
    
    //making fucking pyramid
    n = 10;
    for(int i = 0; i < n; ++i)
    {
        for(int j = n-i; j >= 0; --j)
            cout << " ";
        for(int j = 1; j <= i; ++j)
            cout << "*";
        for(int j = 1; j < i; ++j)
            cout << "*";
        cout << endl;
    }
    return 0;
}