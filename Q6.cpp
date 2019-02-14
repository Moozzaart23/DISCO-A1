#include <iostream>
using namespace std;
 //Compiler version g++ 6.3.0

 #include <bits/stdc++.h>

int n;
//cin>>n;
int adj[100][100];
int visited[100005] = { 0 };

void dfs(int s){
visited[s] = 1;
cout<<s<<" ";
for(int i = 0; i < n; ++i)
if(adj[s][i] == 1 && visited[i]==0)
	dfs(i);
}

int main(){
int  e, x, y;
cin >> n>> e;
for(int i = 0; i < e; i++)
{
cin >> x >> y;
adj[x][y]=1; 
}

dfs(0);

return 0;
}
