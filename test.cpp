#include<bits/stdc++.h>
using namespace std;

#define V 4 

int selectMinVertex(vector<int>& value,vector<bool>& processed)
{
	int minimum = INT_MAX;
	int vertex;
	for(int i=0;i<V;++i)
	{
		if(processed[i]==false && value[i]<minimum)
		{
			vertex = i;
			minimum = value[i];
		}
	}
	return vertex;
}

void dijkstra(int graph[V][V])
{
	int parent[V];
	vector<int> value(V,INT_MAX);
	vector<bool> processed(V,false);	
	
	parent[0] = -1;	
	value[0] = 0;	//start node with 0 to picked it 1st

	//Include (V-1) edges to cover all V-vertices
	for(int i=0;i<V-1;++i)
	{
		
		int U = selectMinVertex(value,processed);
		processed[U] = true;	//Include new Vertex in shortest Path Graph

		for(int j=0;j<V;++j)
		{
			if(graph[U][j]!=0 && processed[j]==false && value[U]!=INT_MAX
			&& (value[U]+graph[U][j] < value[j]))
			{
				value[j] = value[U]+graph[U][j];
				parent[j] = U;
			}
		}
	}
	//Print Shortest Path Graph
	for(int i=1;i<V;++i)
		cout<<"U->V: "<<parent[i]<<"->"<<i<<"  wt = "<<graph[parent[i]][i]<<"\n";
}
int main()
{
    int graph[V][V];

    // Taking input 
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << "Enter the value for graph[" << i << "][" << j << "]: ";
            cin >> graph[i][j];
        }
    }

	dijkstra(graph);	
	return 0;
}