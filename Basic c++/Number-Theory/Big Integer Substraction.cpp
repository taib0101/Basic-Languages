//11448 UVA
#include<bits/stdc++.h>
using namespace std;
bool flag;
vector< int > subb;
std :: string :: iterator it;
int x;
void biyog1(string a,string b)
{
    int l = a.size();//   cout<<"l = "<<l<<endl;
    int l1 = b.size();//    cout<<"l1 = "<<l1<<endl;

    if(l < l1) flag = 1;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());//cout<<"a = "<<a<<endl;//cout<<"b = "<<b<<endl;

    for(int i=l-1,j=l-1; !flag && l == l1 && i>=0; --i)//cout<<"i = "<<i<<endl;//cout<<"a = "<<a[i]<<",b = "<<b[i]<<endl;
    {
        if(a[j] == b[j]) j--;
        if(a[i] < b[i] && a[j] <= b[j])
            flag = 1;//    cout<<"flag = "<<flag<<endl;
    }

    if(flag)
    {
        swap(l,l1);
        swap(a,b);
    }
    int rslt,c,carry = 0;
    for(int i=0; i<l1; ++i)
    {
        rslt = (a[i] - '0') - (b[i] - '0' + carry) ;
        c = rslt;//cout<<"i = "<<i<<",carry = "<<rslt<<endl;

        if(rslt < 0){
            c = 10 - rslt;
            if(rslt == -10) c = 10;
            rslt = rslt + 10;
        }
        carry = c / 10;//        cout<<"rslt = "<<rslt<<", carry = "<<carry<<endl;

        subb.push_back(rslt);
    }
    for(int i=l1; i<l; ++i)
    {
        rslt = (a[i] - '0') - carry;
        c = rslt;
        if(rslt < 0)
        {
            c = 10 - rslt;
            if(rslt == -10) c = 10;
            rslt = rslt + 10;
        }
        carry = c / 10;
        subb.push_back(rslt);
    }

    reverse(subb.begin(),subb.end());
    x = subb.size() - 1;
    for(int i=0; i<subb.size(); ++i)//        cout<<"i = "<<subb[i]<<endl;
    {

        if(subb[i] != 0)
        {
            x = i;
            break;
        }
    }
}
void biyog2(string a,string b)
{
    if(a[0] == 45)
    {
        it = find(a.begin(),a.begin()+1,'-');
        a.erase(it);
        flag = 1;
    }
    else
    {
        it = find(b.begin(),b.begin()+1,'-');
        b.erase(it);
    }
    if(a[0] == '0' && b[0] == '0') flag = 0;
    int l = a.size();//    cout<<"l = "<<l<<endl;
    int l1 = b.size();//    cout<<"l1 = "<<l1<<endl;

    if(l < l1)
    {
        swap(l,l1);
        swap(a,b);
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());//    cout<<"a = "<<a<<endl;//    cout<<"b = "<<b<<endl;

    int rslt , carry = 0;
    for(int i=0; i<l1; ++i)
    {
       rslt = (a[i] - '0') + (b[i] - '0') + carry;
       carry = rslt / 10;
       subb.push_back(rslt%10);
    }
    for(int i=l1; i<l; ++i)
    {
       rslt = (a[i] - '0') + carry;
       carry = rslt / 10;
       subb.push_back(rslt%10);
    }
    if(carry)subb.push_back(carry);
    reverse(subb.begin(),subb.end());
}
void biyog3(string a,string b)
{
    it = find(a.begin(),a.begin()+1,'-');
    a.erase(it);
    it = find(b.begin(),b.begin()+1,'-');
    b.erase(it);

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    int l = a.size();
    int l1 = b.size();//    cout<<"l = "<<l<<endl;//    cout<<"l1 = "<<l1<<endl;

    if(l > l1)
        flag = 1;
     for(int i=l-1,j=l-1; !flag && l==l1 && i>=0; --i)
     {
         if(a[j] == b[j]) j--;
         if(a[i] > b[i] && a[j] >= b[j])
            flag = 1;
     }
     if(l < l1)
     {
        swap(l,l1);
        swap(a,b);
     }//     cout<<"a = "<<a<<endl;//    cout<<"b = "<<b<<endl;

    int rslt , carry = 0,c;
    for(int i=0; i<l1; ++i)
    {
        rslt = (a[i] - '0') - (b[i] - '0' + carry) ;
        c = rslt;//cout<<"a = "<<a[i]<<",b = "<<b[i]<<endl;//        cout<<"rslt = "<<rslt<<",carry = "<<carry<<endl;

        if(rslt < 0){
            c = 10 - rslt;
            if(rslt == -10) c = 10;
            rslt = rslt + 10;
        }
        carry = c / 10;
        subb.push_back(rslt);
    }
    for(int i=l1; i<l; ++i)
    {
        rslt = (a[i] - '0') - carry;
        c = rslt;//        cout<<"rslt = "<<rslt<<",carry = "<<carry<<endl;

        if(rslt < 0)
        {
            c = 10 - rslt;
            if(rslt == -10) c = 10;
            rslt = rslt + 10;
        }
        carry = c / 10;
        subb.push_back(rslt);
    }
    reverse(subb.begin(),subb.end());

    x = subb.size() - 1;
    for(int i=0; i<subb.size(); ++i)//        cout<<"i = "<<subb[i]<<endl;
    {
        if(subb[i] != 0)
        {
            x = i;
            break;
        }
    }
}

int main()
{
    string a,b;

    while(cin>>a>>b)
    {
        if((a[0]>=48 && a[0]<=57) && (b[0]>=48 && b[0]<=57))
            biyog1(a,b);
        else if((a[0] == 45 && b[0] != 45) || (a[0] != 45 && b[0] == 45))
            biyog2(a,b);
        else
            biyog3(a,b);

        if(flag)
            cout<<"-";

        for(int i=x; i<subb.size(); ++i)
            cout<<subb[i];

        cout<<endl;
        subb.clear();
        flag = 0;
        x = 0;
    }
    return 0;
}
