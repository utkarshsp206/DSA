#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
         int vis[V]={0};
       vis[0] = 1;
        queue<int> q;
        //push the initial starting node
        q.push(0);
        vector<int> bfs;
        //iterate till the queue is empty
        while(!q.empty()){
            //get the topmost node
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            //traverse all its neighbours
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
            }
            return bfs;
    }
};
 
int main() {


return 0;
}