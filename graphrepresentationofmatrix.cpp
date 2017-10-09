#include<iostream>
using namespace std;
struct Graph{
    int V;
    int E;
    int **adj;
};
int main()
{

    Graph *G=new Graph();
    cout<<"enter the no of vertex and edges"<<endl;
    cin>>G->V>>G->E;
    G->adj=new int*[G->V];
    for(int i=0;i<G->V;i++)
    {
        G->adj[i]=new int[G->V];
    }
    for(int i=0;i<G->V;i++)
    {
        for(int j=0;j<G->V;j++)
        {
            G->adj[i][j]=0;

        }
        cout<<endl;
    }
    cout<<"enter the edges (source ) to (destination) "<<endl;
    for(int i=0;i<G->E;i++)
    {
        int u,v;
        cin>>u>>v;
        G->adj[u][v]=1;
        G->adj[v][u]=1;
    }

    for(int i=0;i<G->V;i++)
    {
        for(int j=0;j<G->V;j++)
        {
            cout<<G->adj[i][j]<<" ";
        }
        cout<<endl;
    }


}
