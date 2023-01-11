///list
#include<bits/stdc++.h>
using namespace std;
int broo(int a,int b) /// bool ow lekha jay no prblm
{
    return (a > b);
}
/// 10 432 32 52 12 50
int main()
{
    /// double,float,char......er khetreo same
    list <double> mlist;
    list <double> :: iterator it;
    mlist.push_back(432);
    mlist.push_back(32);
    mlist.push_back(52);
    mlist.push_back(12);
    mlist.push_back(50);
    mlist.push_front(11);
    int sizee = mlist.size();
    printf("size of list : %d\n",sizee);

    printf("Iteration of list\n");
    for(it= mlist.begin(); it!=mlist.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;

    it = find(mlist.begin(),mlist.end(),12);

    mlist.insert(it,7);
    for(it= mlist.begin(); it!=mlist.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;
    it = find(mlist.begin(),mlist.end(),12);

    mlist.erase(it);
    for(it= mlist.begin(); it!=mlist.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;
    /// baki gula vector er motoi same......
//    std :: string :: iterator it;
    return 0;
}
/*printf("reverse of list\n");
    mlist.reverse();*/
