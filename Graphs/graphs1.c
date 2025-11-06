#include <stdio.h>
#define MAX_NODES 100

int graph[MAX_NODES][MAX_NODES]; // to check if edge exits between two nodes
int validNodes[MAX_NODES]; // 1-> node exist, 0->doesn't exist

void initializeGraph() {
    for (int i = 0; i < MAX_NODES; i++) {
        validNodes[i] = 0;
        for (int j = 0; j < MAX_NODES; j++) {
            graph[i][j] = 0;
        }
    }
}

void addNode(int node) {
    if (node < 0 || node >= MAX_NODES) {
        printf("Node number must be between 0 and %d.\n", MAX_NODES - 1);
        return;
    }
    if (validNodes[node]) {
        printf("Node %d already exists.\n", node);
    } else {
        validNodes[node] = 1;
        printf("Node %d added.\n", node);
    }
}

void addEdge(int u, int v) {
    if (u < 0 || u >= MAX_NODES || v < 0 || v >= MAX_NODES) {
        printf("Nodes must be between 0 and %d.\n", MAX_NODES - 1);
        return;
    }
    if (!validNodes[u] || !validNodes[v]) {
        printf("Both nodes must exist to add an edge.\n");
        return;
    }
    if (graph[u][v]) {
        printf("Edge between %d and %d already exists.\n", u, v);
    } else {
        graph[u][v] = 1;
        graph[v][u] = 1;
        printf("Edge added between %d and %d.\n", u, v);
    }
}

void deleteNode(int node) {
    if (node < 0 || node >= MAX_NODES) {
        printf("Node number must be between 0 and %d.\n", MAX_NODES - 1);
        return;
    }
    if (validNodes[node]) {
        validNodes[node] = 0;
        for (int i = 0; i < MAX_NODES; i++) {
            graph[node][i] = 0;
            graph[i][node] = 0;
        }
        printf("Node %d and its edges deleted.\n", node);
    } else {
        printf("Node %d does not exist.\n", node);
    }
}

void deleteEdge(int u, int v) {
    if (u < 0 || u >= MAX_NODES || v < 0 || v >= MAX_NODES) {
        printf("Nodes must be between 0 and %d.\n", MAX_NODES - 1);
        return;
    }
    if (!validNodes[u] || !validNodes[v]) {
        printf("Both nodes must exist to delete an edge.\n");
        return;
    }
    if (!graph[u][v]) {
        printf("No edge exists between %d and %d.\n", u, v);
    } else {
        graph[u][v] = 0;
        graph[v][u] = 0;
        printf("Edge between %d and %d deleted.\n", u, v);
    }
}

void searchNode(int node) {
    if (node < 0 || node >= MAX_NODES) {
        printf("Node number must be between 0 and %d.\n", MAX_NODES - 1);
        return;
    }
    if (validNodes[node]) {
        printf("Node %d exists.\n", node);
    } else {
        printf("Node %d does not exist.\n", node);
    }
}

void searchEdge(int u, int v) {
    if (u < 0 || u >= MAX_NODES || v < 0 || v >= MAX_NODES) {
        printf("Nodes must be between 0 and %d.\n", MAX_NODES - 1);
        return;
    }
    if (!validNodes[u] || !validNodes[v]) {
        printf("Both nodes must exist to search for an edge.\n");
        return;
    }
    if (graph[u][v]) {
        printf("Edge exists between %d and %d.\n", u, v);
    } else {
        printf("No edge exists between %d and %d.\n", u, v);
    }
}

void bfsComponent(int src, int visited[MAX_NODES]){
	int q[MAX_NODES];
	int front = 0, rear = 0;

	// enqueue the source node & make it as visited
	q[rear++] = src;
	visited[src] = 1;

	while(front < rear){
		int curr = q[front++];
		printf("%d ", curr);

		for(int i = 0; i < MAX_NODES; i++){
			if(graph[curr][i] && !visited[i]){
				visited[i] = 1;
				q[rear++] = i;
			}
		}
	}
}
void bfsTraversal(){
	int visited[MAX_NODES] = {0};

	printf("\nBFS Traversal: \n");
	
	for(int i = 0; i < MAX_NODES; i++){
		if(validNodes[i] && !visited[i]){
			bfsComponent(i, visited);
		}
	}
	printf("\n");
}
void dfsRec(int visited[MAX_NODES], int s){
	visited[s] = 1;
	printf("%d ", s);
	
	// recursively visit all unvisited neighbours
	for(int i = 0; i < MAX_NODES; i++){
		if(graph[s][i] && !visited[i]){
			dfsRec(visited, i);
		}
	}
}
void dfs(){
	int visited[MAX_NODES] = {0};
	dfsRec(visited, 0);
}
int menu() {
    int choice;
    printf("\nGraph Operations Menu:\n");
    printf("1. Add Node\n");
    printf("2. Add Edge\n");
    printf("3. Delete Node\n");
    printf("4. Delete Edge\n");
    printf("5. Search Node\n");
    printf("6. Search Edge\n");
    printf("7. BFS Traversal\n");
    printf("8. DFS Traversal\n");
    printf("8. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    int choice, node, u, v;
    initializeGraph();

    while (1) {
        choice = menu();
        switch (choice) {
            case 1:
                printf("Enter node number to add (0-%d): ", MAX_NODES - 1);
                scanf("%d", &node);
                addNode(node);
                break;
            case 2:
                printf("Enter two node numbers to add an edge between (0-%d): ", MAX_NODES - 1);
                scanf("%d %d", &u, &v);
                addEdge(u, v);
                break;
            case 3:
                printf("Enter node number to delete (0-%d): ", MAX_NODES - 1);
                scanf("%d", &node);
                deleteNode(node);
                break;
            case 4:
                printf("Enter two node numbers to delete the edge between (0-%d): ", MAX_NODES - 1);
                scanf("%d %d", &u, &v);
                deleteEdge(u, v);
                break;
            case 5:
                printf("Enter node number to search (0-%d): ", MAX_NODES - 1);
                scanf("%d", &node);
                searchNode(node);
                break;
            case 6:
                printf("Enter two node numbers to search the edge between (0-%d): ", MAX_NODES - 1);
                scanf("%d %d", &u, &v);
                searchEdge(u, v);
                break;

	    case 7:
		bfsTraversal();
		break;
	    case 8:
		dfs();
		break;
            case 9:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

