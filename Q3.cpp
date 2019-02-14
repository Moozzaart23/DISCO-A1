  #include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 #include <bits/stdc++.h>
    int nodes;
	cin >> nodes;  
	int adj[nodes][nodes];
	int visited[100005] = { 0 };

    void dfs(int s) {
        visited[s] = 1;
        for(int i = 0;i < nodes;++i)    {
         if(adj[s][i] == 1 && visited[i]==0)
			dfs(i);
        }
    }

    

    int main()
	 {
        int  edges, x, y, connectedComponents = 0;
                             //Number of nodes
        //cin >> edges;                       //Number of edges
        for(int i = 0;i < nodes;++i) {
         cin >> x ;     
     //Undirected Graph 
         adj[i][x-1]=1;
		 adj[x-1][i]=1;                  //Edge from vertex y to vertex x
        }

        

        for(int i = 0;i < nodes;++i) {
         if(visited[i] == 0)     {
             dfs(i);
             connectedComponents++;
         }
        }
        cout <<connectedComponents << endl;
        return 0;
    }
