#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxn = 10000000;
vector < int > prime;
static ll moulik_number[1000],power_number[1000],sizee,sizee2,total;
int findd[mxn+10] = {0};
void sieve()
{

    findd[1] = findd[0] = 1;
    for(int i=2; i*i<=mxn; ++i)
    {
        if(findd[i] == 0)
        {
            for(int j=i+i; j<=mxn; j += i)
                findd[j] = 1;
        }
    }
    for(int i=1; i<=mxn; ++i)
    {
        if(findd[i] == 0)
            prime.push_back(i);
    }
}
void prime_factor_divisor(ll n)
{
    sizee = 0;
    sizee2 = 0;
    ll sq = sqrt(n);
    total = 1;
    ll counn;
    for(ll i=0; prime[i]<=sq; ++i)
    {
        ll cp = prime[i];
        counn = 0;
        if(n%cp == 0)
        {
            moulik_number[++sizee] = cp;
            while(n%cp == 0)
            {
                n /= cp;
                counn++;
            }
            power_number[++sizee2] = counn;
            total *= (counn + 1);
        }
    }
    if(n != 1){
        moulik_number[++sizee] = n ;
        power_number[++sizee2] = 1;
        total *= 2;
    }
}

int main()
{
    sieve();
    ll n;
    while(cin>>n)
    {
        prime_factor_divisor(n);
        for(ll i=1; i<=sizee; ++i)
        {
            cout<<moulik_number[i]<<"^"<<power_number[i];
            if(i != sizee) cout<<" , ";
        }
        cout<<endl;
        cout<<"Number of divisor (NOD) = "<<total<<endl;
        memset(moulik_number,0,sizeof(moulik_number));
        memset(power_number,0,sizeof(power_number));
    }
    return 0;
}

