#include <bits/stdc++.h>
#include "./dijkstras.h"
using namespace std;

int cost[100][100], n;

int getMin(int dist[], bool visited[])
{
	int key = 0;
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (!visited[i] && dist[i] < min)
		{
			min = dist[i];
			key = i;
		}
	}
	return key;
}

void display(int dist[], int par[], int src)
{
	int dest, temp;
	cout << endl
		 << "***************************************************************************" << endl
		 << endl;
	cout << endl
		 << left << setw(15) << "Node:"
		 << left << setw(15) << "Cost: "
		 << "Path:" << endl
		 << endl;
	for (int i = 0; i < n; i++)
	{
		if (i != src)
		{
			cout << left << setw(15) << i;
			cout << left << setw(15) << dist[i];
			cout << i << " <- ";
		}
		temp = par[i];

		while (temp != -1)
		{
			cout << temp << " <- ";
			temp = par[temp];
		};
		if (i != src)
			cout << endl;
	}
	cout << endl
		 << "***************************************************************************" << endl;
	cout << endl
		 << "Enter destination node: ";
	cin >> dest;
	cout << "--------------------------------------------------------------------------------------" << endl;
	cout << "The shortest distance to " << dest << "th node is: " << endl
		 << endl
		 << "------   " << dist[dest] << "   ------" << endl
		 << endl
		 << "attainable through the path " << endl
		 << endl;

	temp = par[dest];
	cout << dest << " <- ";
	while (temp != -1)
	{
		cout << temp << " <- ";
		temp = par[temp];
	}
}

void dijkstra(int src)
{
	int par[100], dist[100];
	bool visited[100] = {0};
	fill(dist, dist + n, INT_MAX);

	dist[src] = 0;
	par[src] = -1;

	for (int g = 0; g < n - 1; g++)
	{
		int u = getMin(dist, visited);
		visited[u] = true;
		// cout << " min = " << u << endl;
		for (int v = 0; v < n; v++)
		{
			if (!visited[v] && (dist[u] + cost[u][v]) < dist[v] && cost[u][v] != 9999)
			{
				par[v] = u;
				dist[v] = dist[u] + cost[u][v];
			}
		}
	}

	display(dist, par, src);
}

void visualize_dijkstras_algorithm()
{
	cout << "Enter n : ";
	cin >> n;
	cout << "Enter cost matrix : \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> cost[i][j];
	}
	int src;
	cout << "\nEnter source : ";
	cin >> src;
	dijkstra(src);
}