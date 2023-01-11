#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n+10] = {0};
        for(int i = 1;i <= n; ++i)
            cin >> ar[i];
        sort(ar+1,ar+n+1);
        int q;
        cin >> q;
        while(q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(ar+1,ar+n+1,x);
            printf("upper_bound[%ld] = %d\n",it - ar,*it);
            it = upper_bound(ar+1,ar+n+1,x);
            printf("upper_bound[%ld] = %d\n",it - ar,*it);
        }
        

    }
    return 0;
}
