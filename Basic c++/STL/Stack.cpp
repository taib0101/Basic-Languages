//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack < int > st;
    st.push(2);
    st.push(5);
    st.push(4);
    st.push(10);

    cout << "size = " << st.size() << endl;
    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
