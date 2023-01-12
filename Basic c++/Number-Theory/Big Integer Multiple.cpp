//uva 10106
//uva 10523
#include<bits/stdc++.h>
using namespace std;

string multi(string str,string str2)
{
    vector< int > mul[5000];
    int l1 = str.size() , x = 0;
    int l2 = str2.size();
    int carry = 0;
    reverse(str.begin(),str.end());
    reverse(str2.begin(),str2.end());

    if(l1 > l2)
    {
        swap(l1,l2);
        swap(str,str2);
    }

    int get = 0;
    for(int i = 0; i < l1; ++i,++x)
    {
        carry = 0;
        for(int j = 1; j <= x; ++j)
            mul[x].push_back(0);
        for(int j = 0; j < l2; ++j)
        {
            get = ((str[i] - '0') * (str2[j] - '0')) + carry;
//            cout<<"str = "<<str[i]<<",str2 = "<<str2[j]<<endl;
//            cout<<"i = "<<i<<",get = "<<get % 10 <<endl;
            mul[x].push_back(get%10);
            carry = get / 10;
        }
        if(carry)
            mul[x].push_back(carry);
    }
    carry = 0;
    get = 0;
    str.clear();

    for(int i = 0,y = 0; i < x; ++i)
    {
        for( ; y < mul[i].size(); ++y)
        {
            for(int l = i; l < x; ++l)
                get += mul[l][y];

            get += carry;
//            cout<<"get = "<<get % 10 <<endl;
//            cout<<"get = "<<get<<endl;
            str.push_back(get%10 + '0');
            carry = get / 10;
            get = 0;
        }
        y = mul[i].size();
    }
    if(carry)
    {
        while(carry != 0)
        {
            str.push_back(carry % 10 + '0');
            carry /= 10;
        }
    }
    reverse(str.begin(),str.end());
    int countt = 0;
    for(int i = 0; i < str.size()-1; ++i)
    {
        if(str[i] != '0')
            break;
        countt++;
    }
    str.erase(str.begin() , str.begin() + countt);
    for(int i = 0; i < x; ++i)
        mul[i].clear();

    return str;
}


int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    string str,str2;
    while(cin>>str>>str2)
    {
        cout<<multi(str,str2)<<endl;;
    }

    return 0;
}
