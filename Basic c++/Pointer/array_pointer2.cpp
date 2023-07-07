//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    // arr = new int[n];
    cout << "Address of array is : " << &arr << endl;
    for(int i = 0; i < n; ++i)
        scanf("%d",arr+i);//sacnf("%d",&arr[i]);
    // for(int i = 0; i < n; ++i)
    //     printf("%d ",*(arr+i));
    for(int i = 0; i < n; ++i)
        cout << *(arr+i) << " ";//cout << arr[i]<< " ";
    cout << endl;
    cout << "Address of second index of array is : " << arr+1 << endl;
    delete []arr;
    return 0;
}
