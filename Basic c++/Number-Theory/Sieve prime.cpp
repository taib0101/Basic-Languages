/*   ********Bismillah Hir-Rahmanir Rahim**********
            ********Allahu Akber********
             
*/
//O(nlogn)

#include<bits/stdc++.h>
using namespace std;
const int mas = 1000000;
bool fin[mas+10] ;
int prime[mas+10];
void sieve()
{
    fin[0] = fin[1] = 1;

    for(int i=2; i*i<=mas; i++)
    {
        if (fin[i]==0)
        {
            for(int j=i*i; j<=mas; j+=i)
            {
                fin[j] = 1;

            }
        }
    }
    for(int i=0,j=1; i<=mas; i++)
    {
        if(fin[i]==0)
        {
            prime[j] = i;
            //cout<<prime[j]<<endl;
            j++;
        }
    }
}

int main()
{
    sieve();
    for(int i=1; prime[i]<=100 ; i++)
    {
        cout<<prime[i]<<endl;
    }
    return 0;
}

// O(nloglogn)
#include<bits/stdc++.h>
using namespace std;
vector < int > primee;
int sum ;
void prime()
{
    bool cpp[1000002] = {0};
    for(int i = 4; i <= 1000000; i += 2)
        cpp[i] = 1;
    for(int i = 3; i * i<= 1000000; i += 2)
    {
        if(!cpp[i])
        {
           for(int j = i*i; j <= 1000000; j += (i+i))
               cpp[j] = 1;
        }
    }
    for(int i = 3; i <= 1000000; i += 2)
    {
        if(!cpp[i])
            primee.push_back(i);
    }
    cout<<"size = "<<primee.size()<<endl;
    for(int i = 0; i <= 100; ++i)
        cout<<primee[i]<<endl;
}

int main()
{
    prime();
    return 0;
}
