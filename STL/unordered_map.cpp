#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    //creation 
    unordered_map<string,string> table;

    //insertion;

    table["in"]="India";
    table.insert(make_pair("us","America"));


    pair<string,string> p;
    p.first = "br";
    p.second = "Brazil";

    table.insert(p);



    cout<<"Table size = "<<table.size()<<endl;


    //traversing 
    unordered_map<string , string>::iterator it = table.begin();

    while(it != table.end()){
        pair<string,string>p = *it;
        cout<<p.first<<"="<<p.second<<endl;
        it++;

    }


    // table.erase(table.begin(),table.end());
    // //table.clear();
    // cout<<"Now Table size is = "<<table.size()<<endl;
    

    if(table.find("im") != table.end()){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not Find"<<endl;
    }


    if(table.count("im")==1){
        cout<<"Key found"<<endl;

    }
    if(table.count("im")==0){
        cout<<"Key not found"<<endl;
    }







 

    return 0;
}