#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n+5];
        int *arr2 = (int *) malloc(sizeof(int)*(n+5));
        for(int i = 1; i <= n; ++i)
            scanf("%d",&arr[i]);
        for(int i = 1; i <= n; ++i)
            printf("%d ",arr[i]);
        cout << endl;

        //getting input pointer array
        for(int i = 1; i <= n; ++i)
            scanf("%d",arr2+i);
        for(int i = 1; i <= n; ++i)
            printf("%d ",*(arr2+i));
        cout << endl;

        //for 2d with pointer
        int **arr3 = (int **) malloc(sizeof(int)*n);
        for(int i = 1; i <= n; ++i)
            arr3[i] = (int *) malloc(sizeof(int)*n);//for getting all memory of each row
        
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
                scanf("%d",(*(arr3+i)+j));
        }
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
                printf("%d ",*(*(arr3+i)+j));
            cout << "\n";
        }
        free(arr3);
        free(arr2);
        
        int arr4[n+2][n+2];
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
                scanf("%d",&arr4[i][j]);
        }
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= n; ++j)
                printf("%d ",arr4[i][j]);
            cout << "\n";
        }

        //so, we can create 3d stray .. as same shitt with different logic
    }
    return 0;
}