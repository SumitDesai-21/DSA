#include <stdio.h>
#define MAXQ 100
void bfs(int adj[v][v], int res[v], int *resSize){
	int visited[v] = {0};
	int q[MAXQ];
	int front = 0, int rear = 0;
	int src = 0;
	visited[src] = 1; // first node visited
	q[rear++] = src;
	
	// i.e q is not empty 
	while(front < rear){
		int curr = q[front++];
		res[(*resSize)++] = curr;
		
		// visit all the unvisited neighbours of curr node
		for(int x = 0; x < V; x++){
			if(adj[curr][x] && !visited[x]){
				visited[x] = 1;
				q[rear++] = x;
			}
		}
	}
}

int main(void){	

	return 0;
}
