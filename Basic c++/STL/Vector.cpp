///sort
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
    vector <int> vec;
    vector <int> :: iterator it;
    vec.push_back(10);
    vec.push_back(432);
    vec.push_back(32);
    vec.push_back(52);
    vec.push_back(12);
    vec.push_back(50);
    int sizee = vec.size();
    printf("size of vector : %d\n",sizee);

    printf("Iteration of vectors\n");
    int i;
    for(it= vec.begin(), i=0; it < vec.end(); ++it,++i)
    {
        cout<<"i = "<<i<<endl;
        cout<<*it<<endl;
    }
    cout<<endl;
    it  =  find(vec.begin(),vec.end(),12);

    vec.insert(it,7);
    for(it= vec.begin(); it!=vec.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;
    printf("Acesnding vectors element mane choto theke boro\n");

    sort(vec.begin(),vec.end());
    for(it= vec.begin(); it!=vec.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;

    printf("desending vectors element mane boro theke chot\n");

    sort(vec.begin(),vec.end(),broo);
    for(it= vec.begin(); it!=vec.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;

    printf("Acesnding vectors first three element \n");

    sort(vec.begin(),vec.begin() + 3);///normal array er khetreo same hoy
    for(it= vec.begin(); it!=vec.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;

    printf("Decesnding vectors first three element\n");

    sort(vec.begin(),vec.begin() + 3,broo);
    reverse(vec.begin(),vec.end());
    for(it= vec.begin(); it!=vec.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;
    vec.clear();//shudhu sizee clear hoy i mean size jdi 7 thke clear er por size 0 hoy ,,,initialy zero hoy kina jni na
    sizee = vec.size();
    for(it= vec.begin(); it!=vec.end(); ++it)
        cout<<*it<<"\t";
    cout<<endl;
    cout<<sizee<<endl;

    return 0;
}

//Taib vai whats up!
