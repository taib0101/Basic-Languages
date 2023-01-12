//In the nme of Allah, the entirely merciful,the specially merciful
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void get_prime(vector < ll > *prime)
{
    int mx = 1e6;
    bool bprime[mx+10];
    memset(bprime,0,sizeof(bprime));
    for(int i = 4; i <= mx; i += 2)
        bprime[i] = 1;
    for(int i = 3; (i * i) <= mx; i += 2)
    {
        if(!bprime[i])
        {
            for(int j = i+i; j <= mx; j += i)
                bprime[j] = 1;
        }
    }
    for(int i = 2; i <= mx; ++i)
    {
        if(!bprime[i])
            (*prime).push_back((ll) (i));
    }
}

void segmented_sieve(ll l,ll r,vector < ll > prime)
{
    bool bprime[r-l+10] = {0};
    int sz = prime.size();
    for(int i = 0; (prime[i]*prime[i]) <= r && i < sz; ++i)
    {
        ll cp = prime[i];
        //cout << "cp = " << cp << endl;
        ll base = (l / cp) * cp;
        if(base < l)
            base += cp;
        for(ll j = base; j <= r; j += cp)
            bprime[j-l] = 1;
        if(base == cp)
            bprime[base-l] = 0;
    }
    for(int i = 0; i < r-l+1; ++i)
    {
        if(!bprime[i] && i+l != 1)
            cout << (ll) (i+l) << " ";
    }
    cout << endl;
}

int main()
{
    vector < ll > prime;
    get_prime(&prime);
    int t;
    cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        segmented_sieve(l,r,prime);
    }
    return 0;
}
