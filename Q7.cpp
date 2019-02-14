#include <iostream>
using namespace std;
#include <stdlib.h>
int nodes;int counter=0;
int adj[100][100];
int visited[100005] = { 0 };
int res[100005];
int indegree[100005]={0};
void toposort()
{
	int flag=0;int m=0;
	for(int i=0;i<nodes;i++)
	{
	    int notvisited=0,nextNode=0;
		for(int k=0;k<nodes;k++)
		{
		    if(k==i)continue;
		    if(!visited[k])notvisited++;
		    if( (indegree[k]==0 or (indegree[i]==0))  and !visited[k])nextNode++;
		}
		//cout<<"Notvisited="<<notvisited<<" nextNode="<<nextNode<<" i="<<i<<endl;
		if(notvisited>0 and nextNode==0)
        {
			    cout<<-1<<endl;
			    exit(0);
		}
		if(indegree[i]==0 && visited[i]==0)
		{
			for(int j=0;j<nodes;j++)
			{
				if(adj[i][j]==1)
					indegree[j]--;
			}
			//res[m++]=i;
			visited[i]=1;


			toposort();

			visited[i]=0;
			//res[m]=-10000;
			for(int j=0;j<nodes;j++)
			{
			    if(adj[i][j]==1)
				    indegree[j]++;
			}
			flag=1;
		}

	}
	if(!flag)
		    counter++;

}




int main()
{
	int  edges, x, y, connectedComponents = 0;
	cin >> nodes;                      //Number of nodes
	cin >> edges;                       //Number of edges
	for(int i = 0;i < edges;++i)
	{
	    cin >> x >> y;
	    adj[x][y]=1;
		indegree[y]++;
	}
	toposort();
	printf("\n %d",counter);
}
