#include<bits/stdc++.h>
using namespace std;

int main()
{
    //pair<string , int> pairr("Taib" , 25); ///we can write it this way also mane amra ei vabe ow likhte pari xd
    /*pair<string , int> pairr;
    pairr = make_pair("Bushra" , 25);*/////eivabeow likha jay aro shortcurt technique ache rukhu jara sabar koro
    vector<pair < int , string > >pairr;
    for(int i=1; i<=5; ++i)
    {
        int n;
        string get;
        cin>>n>>get;
        pairr.push_back(make_pair(n,get));
    }
    pairr.push_back(make_pair(10,"Taib"));
    pairr.push_back(make_pair(20,"Bushra"));
    pairr.push_back({30,"Love"});//emneo lekha jay
   // pairrr = make_pair(30,"Love")//single pair er jnno not vector diya tar jonno (pair <int , string> pairr) likhlei jothesto
   // pairrr = {30,"Love"};// make_pair na diya second braket deya jay;
    for(int i = 0; i < pairr.size(); ++i)
    {
        cout<<pairr[i].first<<" "<<pairr[i].second<<endl;
    }
    return 0;
}
