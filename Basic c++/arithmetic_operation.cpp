#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        scanf("%d %d",&a,&b);
        float x, y;
        scanf("%f %f",&x,&y);
        char c;
        cin >> c;
        printf("sum = %d\n",a+b);
        printf("sum = %.2f\n",x+y);
        printf("sum = %d\n",a + (c - '0'));
    }
    return 0;
}