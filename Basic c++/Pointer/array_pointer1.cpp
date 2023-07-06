#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = (int *) malloc(sizeof(int)*(n+1));
    // arr = (int *) malloc(sizeof(int)*(n+1));
    cout << "Address of array is : " << &arr << endl;
    for(int i = 0; i < n; ++i)
        scanf("%d",arr+i);//sacnf("%d",&arr[i]);
    // for(int i = 0; i < n; ++i)
    //     printf("%d ",*(arr+i));
    for(int i = 0; i < n; ++i)
        cout << *(arr+i) << " ";//cout << arr[i]<< " ";
    cout << endl;
    cout << "Address of second index of array is : " << arr+1 << endl;
    free(arr);
    return 0;
}