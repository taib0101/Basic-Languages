//I seek refused with Allah, from the accursed devil(satan)
//In the name of Allah,The Entirely Merciful,The Specially Merciful
//Read In the name of Allah, who created you
//Combinatorics

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll ar[n+10][n+10];
        for(int i = 0; i <= n; ++i)
        {
            for(int j = 0; j <= i; ++j)
            {
                if(j == 0 || j == i)
                    ar[i][j] = 1;
                else
                    ar[i][j] = ar[i-1][j-1] + ar[i-1][j];
            }
        }

        for(int i = 0; i <= n; ++i)
        {
            for(int j = 0; j <= i; ++j)
                cout << ar[i][j] << " ";
            cout << endl;
        }
    }
}
