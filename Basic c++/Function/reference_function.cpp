//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;
/*
sending refernce is better then pointing a memmory address to a function
because if i want to point address it takes another memory address which might be get memory complexity,
to reduce this system we can use reference and reference use the variables same memory 
*/

void int_referencee(int &n)
{
    n = 5;
}

void int_arr_reference(int arr[],int &n)
{
    for(int i = 0; i < n; ++i)
        arr[i] = 3;//*(arr+i)
}

void int_arr_reference2d(int *arr2[],int &n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            *(*(arr2+i)+j) = 3;//arr2[i][j]
    }
}

int main()
{
    int n;
    cin >> n;
    int_referencee(n);
    cout << n << endl;
    int *arr = (int *) malloc(sizeof(int)*(n+3));//take memory from heap
    //int arr[n+3];//same shitt differnt technique
    for(int i = 0; i < n; ++i)
        arr[i] = 2;//*(arr+i)
    int_arr_reference(arr,n);

    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    free(arr);
    cout << endl;
    cout << endl;
    int **arr2 = (int **) malloc(sizeof(int)*(n+3));
    for(int i = 0; i < n; ++i)
        *(arr2+i) = (int *) malloc(sizeof(int)*(n+3));
    
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            *(*(arr2+i)+j) = 2;//arr2[i][j]
    }
    int_arr_reference2d(arr2,n);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << *(*(arr2+i)+j) << " ";//arr2[i][j]
        cout << endl;
    }
    free(arr2);
    return 0;
}
