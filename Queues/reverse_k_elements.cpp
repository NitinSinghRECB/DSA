#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void printElemet(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void reverseKGroups(queue<int> &q , int k, int unusedElement ){
    if(unusedElement>=k){
        stack<int>st;
        for(int i =0 ; i<k ; i++){
            int element = q.front();
            q.pop();
            st.push(element);
        }
        for(int i =0 ; i<k ; i++){
            int element = st.top();
            st.pop();
            q.push(element);
        }


        reverseKGroups(q,k,unusedElement-k);
    }
    else{
        for(int i = 0 ; i<unusedElement ; i++){
            int el = q.front();
            q.pop();
            q.push(el);
        }
    }

}



int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    int k =3;


    reverseKGroups(q,k,q.size());
    printElemet(q);




    return 0;
}