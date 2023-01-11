#include<bits/stdc++.h>
using namespace std;

int main()
{
    //pair<string , int> pairr("Taib" , 25); ///we can write it this way also mane amra ei vabe ow likhte pari xd
    /*pair<string , int> pairr;
    pairr = make_pair("Bushra" , 25);*/////eivabeow likha jay aro shortcurt technique ache rukhu jara sabar koro
    map < string , int >mapp;
//    map < string , int , less <string> >mapp; // boro thke choto order ee sajano jay dude
//    map < string , int , greater <string> >mapp; // choto thke boro order ee sajano jay dude

    map < string , int >::iterator it;

    mapp["zello"] = 45;
    mapp["taib"] = 10;
    mapp.insert(make_pair("taib",23));// mapp ee push_back er kaj hoy na only insert;//eita dile man assign hoy na mane age jdi ekta deya thke
    mapp["taib"] = 20;
    //mapp.insert({"Taib",20});// make_pair na diya second braket diya kra jay bro;;

    pair < map < string , int > :: iterator , bool > cmp_map;// if( mapp.find() != mapp.end())

    cmp_map = mapp.insert(make_pair("taib",12));

    if(cmp_map.second == false)
        cout<<"can't insert"<<endl;
    else
        cout<<"insert"<<endl;

    for(it = mapp.begin(); it !=  mapp.end(); ++it)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    string x;
    cin>>x;
    for(it = mapp.find(x); it != mapp.end(); ++it)
    {
        if(it -> first == x)
        {
            cout<<"found\n";
            break;
        }
    }
//    for(auto &it : mapp)
//        cout<<it.first<<" "<<it.second<<endl; // without iterator ee emne kra jay
    return 0;
}
