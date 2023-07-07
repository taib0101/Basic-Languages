//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int arr[n];
        for(int i = 0; i < n; ++i)
            cin >> arr[i];
        int k = 1;
        do
        {
            cout << "k = " << k << endl;
            for(int i = 0; i < n; ++i)
                cout << arr[i] << " ";
            cout << endl << endl;
            k++;
        }while(next_permutation(arr,arr+n));
    }
    return 0;
}
