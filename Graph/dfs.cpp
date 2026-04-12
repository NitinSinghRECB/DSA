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

  
    void dfsHelper(int src , unordered_map<int,bool>&visited){
        cout<<src<<" ";
        visited[src]=true;

        for(auto nbr : adjList[src]){
            if(!visited[nbr]){
                dfsHelper(nbr,visited);
            }
        }
    }
    void dfs(int src , int node){
        unordered_map<int,bool>visited;
        for(int i =0 ; i<node ; i++){
            if(!visited[i]){
                dfsHelper(src,visited);
            }
        }
        
    }

    
};







int main(){
    Graph g;
    // g.addEdge(0,1,1);
    // g.addEdge(1,2,1);
    // g.addEdge(0,2,1);
    // g.addEdge(2,3,1);
    g.addEdge(0,1,1);
    g.addEdge(0,2,1);
    g.addEdge(1,3,1);
    g.addEdge(2,8,1);
    g.addEdge(3,4,1);
    g.addEdge(8,4,1);
    g.addEdge(4,5,1);
    g.addEdge(4,7,1);
    g.addEdge(5,6,1);
    g.addEdge(7,6,1);
 
    g.printadj();

    cout<<"DFS Traversal : ";
    g.dfs(0,10);



    return 0;
}