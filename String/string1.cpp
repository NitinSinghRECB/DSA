#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string st;
    // cin>>st;
    getline(cin,st);
    cout<<st<<endl;




    // some built in function 
    cout<<"Length of string="<<st.length()<<endl;
    st.push_back('X');
    cout<<st<<endl;

    st.pop_back();
    cout<<st<<endl;

    cout<<st[2]<<endl;
    return 0;
}