#include<bits/stdc++.h>
using namespace std;

int bfs(int V, int **rGraph, int s, int t, int parent[])
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));
 
    
    queue <int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
 
    
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
 
        for (int v=0; v<V; v++)
        {
            if (visited[v]==false && rGraph[u][v] > 0)
            {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
 
    
    return (visited[t] == true);
}

void dfs(int V, int **rGraph, int s, bool visited[])
{
    visited[s] = true;
    for (int i = 0; i < V; i++)
       if (rGraph[s][i] && !visited[i])
           dfs(V, rGraph, i, visited);
}


void minCut(int V, int **graph, int s, int t)
{
    int u, v;
 
    int **rGraph;
    rGraph = new int*[V];
  for(int i = 0; i < V; i++)
  {
      rGraph[i] = new int[V];
  }
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
             rGraph[u][v] = graph[u][v];
 
    int parent[V];
 
    
    while (bfs(V, rGraph, s, t, parent))
    {
        
        int path_flow = INT_MAX;
        for (v=t; v!=s; v=parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }
 
        
        for (v=t; v != s; v=parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
    }
 
    
    bool visited[V];
    memset(visited, false, sizeof(visited));
    dfs(V, rGraph, s, visited);
 
    
    for (int i = 0; i < V; i++)
      for (int j = 0; j < V; j++)
         if (visited[i] && !visited[j] && graph[i][j])
              cout<<i<<" "<<j<<" ";
    cout<<endl;
 
    return;
}

int main()
 {
  int t;
  cin>>t;
  while(t--)
  {
      int v, x, y;
      cin>>v;
      int **graph;
      graph = new int*[v];
      for(int i = 0; i < v; i++)
      {
          graph[i] = new int[v];
      }
      for(int i = 0; i < v; i++)
      {
          for(int j = 0; j < v; j++)
          {
              cin>>graph[i][j];
          }
      }
      cin>>x>>y;
      minCut(v, graph, x, y);
  }
  return 0;
}