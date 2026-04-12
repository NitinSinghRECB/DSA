#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    unordered_map<int,vector<int>>adjList;

    void addEdge(int u , int v , bool direction){
        //direction = 1 -> directed edge
        //direction = 0 -> undirected edge

        if(direction ==1){
            //directed edge u->v
            adjList[u].push_back(v);
        }
        else{
            //undirected edge u->v and v->u 
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

    }

    void printadj(){

        for(auto i : adjList){
            cout<<i.first<<": ";
            cout<<"{";
            for(auto j : i.second){
                cout<<j<<" ";
            }
            cout<<"}"<<endl;
        }
    }

    
};

int main(){
    Graph g;
    g.addEdge(0,1,1); //directed edge 0->1
    g.addEdge(1,2,1);
    g.addEdge(0,2,1);
    g.addEdge(2,3,1);
    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0); //undirected edge 0<->1 and 1<->2
    // g.addEdge(2,3,0);
    // g.addEdge(3,4,0);
 
    g.printadj();



    return 0;
}