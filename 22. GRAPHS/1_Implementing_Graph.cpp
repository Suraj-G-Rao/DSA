#include<iostream>
#include<vector>
using namespace std;

class Graph{

    public :
        int V;
        vector<vector<int>> adj;

        Graph(int V){
            this->V = V;
            adj.resize(V);
        }

        void addEdge(int u, int v, bool directed = false){
            adj[u].push_back(v);
            if(!directed){
                adj[v].push_back(u);
            }
        }

        void print(){
            for(int i = 0; i < V; i++){
                cout<<"Vertex "<<i<<" : ";
                for(int j = 0; j < adj[i].size(); j++){
                    cout<<adj[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        bool hasEdge(int u, int v){
            for(int i = 0; i < adj[u].size(); i++){
                if(adj[u][i] == v) return true;
            }
            return false;
        }

        bool isEmpty(){
            if(V == 0) return true;
            else       return false;
        }

};
int main() {


    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout<<"Adjacency List : "<<endl;
    g.print();

    if(g.hasEdge(0, 1)) {
        cout << "Edge 0-1 is Present mere dost " << endl;
    }
    else{
        cout << "Edge 0-1 is Not Present mere dost " << endl;
    }

    if(g.hasEdge(0, 3)) {
        cout << "Edge 0-3 is Present mere dost " << endl;
    }
    else{
        cout << "Edge 0-3 is Not Present mere dost " << endl;
    }

    if(g.isEmpty()) {
        cout << "Graph is Empty mere dost " << endl;
    }
    else{
        cout << "Graph is not Empty mere dost " << endl;
    }


    return 0;
}
