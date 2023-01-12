#include<bits/stdc++.h>
using namespace std;

void ad_d(int n)
{
    string first,second;
    vector< char > sum;
    first = '1';
    second = '0';

    for(int i=1; i<=n; ++i)
    {
        int len = first.size();
        int len1 = second.size();

        reverse(first.begin(),first.end());
        reverse(second.begin(),second.end());

        int rslt = 0, carry = 0;
        for(int f=0; f<len1; ++f)
        {
            rslt = (first[f]-'0') + (second[f] - '0') + carry;
            carry = rslt / 10;
            sum.push_back (rslt % 10 + '0');
        }
        for(int j=len1; j<len; ++j)
        {
            rslt = first[j] - '0' + carry;
            carry = rslt/10;
            sum.push_back(rslt % 10 + '0');
        }
        if(carry) sum.push_back('1');
        second = first;
        first.clear();

        for(int i=0; i<sum.size(); ++i)
        {
            first.push_back(sum[i]);//string can copy like that push_back
        }

        reverse(first.begin(),first.end());
        reverse(second.begin(),second.end());

        sum.clear();
    }
    cout<<first<<endl;
    first.clear();
}

int main()
{
    int n;
    while(cin>>n && n > 0)
    {
        ad_d(n);
    }
    return 0;
}
