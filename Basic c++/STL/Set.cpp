#include<bits/stdc++.h>
using namespace std;

int main()
{
    set < int > sett;
    set < int > :: iterator it;

    sett.insert(3);
    sett.insert(10);
    sett.insert(4);
    sett.insert(9);
    // string er khetreo same kaj kre dude like fucking map
    pair < set < int > :: iterator , bool > cmp;
    cmp = sett.insert(4);
    if(cmp.second == false)
        cout<<"can't insert"<<endl;
    else
        cout<<"inserted"<<endl;

    for(it = sett.begin(); it != sett.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
//    set < int , greater <int> > sett;
//    set < int , greater <int> > :: iterator it;
//
//    sett.insert(10);
//    sett.insert(5);
//    sett.insert(2);
//    sett.insert(20);
//
//    for(it = sett.begin(); it != sett.end(); ++it)
//        cout<<*it<<endl;
