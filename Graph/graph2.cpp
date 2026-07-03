#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


//weighted graph
class Graph{
    public:
    unordered_map<int,vector<pair<int,int>>>adjList;

    void addEdge(int u , int v , int weight , int direction){

        if(direction==1){
            adjList[u].push_back({v,weight});

        }
        else{
            adjList[u].push_back({v,weight});
            adjList[v].push_back({u,weight});
        }

    }

    void printAdj(){
        for(auto i : adjList){
            cout<<i.first<<" : ";
            cout<<"{";
            for(auto j : i.second){
                cout<<"("<<j.first<<","<<j.second<<") ";
            }
            cout<<"}"<<endl;
        }
    }

};



int main(){
    Graph g;
    g.addEdge(0,1,10,1);
    g.addEdge(1,2,20,1);
    g.addEdge(2,3,30,1);
    g.addEdge(3,4,40,1);
    g.printAdj();


    return 0;

}



