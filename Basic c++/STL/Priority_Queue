#include<bits/stdc++.h>
using namespace std;
int main()
    {
        priority_queue < int > priq;
        priq.push(10);
        priq.push(100);
        priq.push(200);
        priq.push(150);
        priq.push(12);
        while(!priq.empty())
        {
            cout << priq.top() << endl;
            priq.pop();
        }
        return 0;
   }
   // lexicography er ulta kaj kre
//    int main()
//    {
//        priority_queue < string > priq;
//        priq.push("A");
//        priq.push("B");
//        priq.push("C");
//        priq.push("D");
//        priq.push("E");
//        while(!priq.empty())
//        {
//            cout << priq.top() << endl;
//            priq.pop();
//        }
//        return 0;
//    }
///////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        priority_queue < int , vector < int >, greater < int > > pq;
        for(int i = 0;i < n; ++i)
        {
            int nn;
            cin >> nn;
            pq.push(nn);
        }
        while(!pq.empty())
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
    
    return 0;
}
////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;

class cmp
{
    public:
        bool operator () (int &x,int &y)
        {
            return x > y;/// choto thke boro  condition
        }
};

int main()
{
    int n;
    while (cin >> n)
    {
        priority_queue < int , vector < int >, cmp > pq;
        for(int i = 0;i < n; ++i)
        {
            int nn;
            cin >> nn;
            pq.push(nn);
        }
        while(!pq.empty())
        {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
    
    return 0;
}
