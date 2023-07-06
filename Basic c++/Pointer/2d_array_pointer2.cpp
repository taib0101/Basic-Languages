#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    // arr = new int *[n];
    for(int i = 0; i < n; ++i)
        *(arr+i) = new int[n]; // arr[i] = new int[n]
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            scanf(("%d"),(*(arr+i)+j));//cin >> arr[i][j] or cin >> *(*(arr+i)+j);
    }
    cout << endl << endl;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << *(*(arr+i)+j) << " ";
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << "show the all address of 2d pointed from RAM\n";
    cout << "1st address of arr is : " << &arr << endl;
    cout << "2nd addresses for row are : \n";
    for(int i = 0; i < n; ++i)
        cout << i+1 << " : " << (arr+i) << endl;
    cout << "2nd addresses for collumn are : \n";
    cout << "\t 1 \t\t 2 \t\t 3\n";
    for(int i = 0; i < n; ++i)
    {
        cout << i+1 << " : ";
        for(int j = 0; j < n; ++j)
            cout  << (*(arr+i)+j) << " ";
        cout << endl;
    }
    delete []arr;
    return 0;
}