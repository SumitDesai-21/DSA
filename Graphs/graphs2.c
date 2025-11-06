#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100
#define MAX_EDGES 100

typedef struct {
    int adj[MAX_EDGES];   // adjacency list for node
    int edgeCount;        // number of edges for this node
    int exists;           // 1 if node exists, 0 otherwise
} Node;

Node graph[MAX_NODES];

// Initialize graph
void initializeGraph() {
    for (int i = 0; i < MAX_NODES; i++) {
        graph[i].edgeCount = 0;
        graph[i].exists = 0;
    }
}

// Helper to check if edge exists in adjacency list
int edgeInList(int node, int target) {
    for (int i = 0; i < graph[node].edgeCount; i++) {
        if (graph[node].adj[i] == target)
            return 1;
    }
    return 0;
}

// Add node
void addNode(int node) {
    if (node < 0 || node >= MAX_NODES) {
        printf("Node number must be between 0 and %d\n", MAX_NODES - 1);
        return;
    }
    if (graph[node].exists) {
        printf("Node %d already exists.\n", node);
    } else {
        graph[node].exists = 1;
        graph[node].edgeCount = 0;
        printf("Node %d added.\n", node);
    }
}

// Add undirected edge
void addEdge(int u, int v) {
    if (u < 0 || v < 0 || u >= MAX_NODES || v >= MAX_NODES) {
        printf("Node numbers must be between 0 and %d\n", MAX_NODES - 1);
        return;
    }
    if (!graph[u].exists || !graph[v].exists) {
        printf("Both nodes must exist to add an edge.\n");
        return;
    }
    if (edgeInList(u, v)) {
        printf("Edge between %d and %d already exists.\n", u, v);
        return;
    }
    if (graph[u].edgeCount >= MAX_EDGES || graph[v].edgeCount >= MAX_EDGES) {
        printf("Max edges reached for one of the nodes.\n");
        return;
    }

    graph[u].adj[graph[u].edgeCount++] = v;
    graph[v].adj[graph[v].edgeCount++] = u;
    printf("Edge added between %d and %d.\n", u, v);
}

// Delete edge
void deleteEdge(int u, int v) {
    if (u < 0 || v < 0 || u >= MAX_NODES || v >= MAX_NODES) {
        printf("Node numbers must be between 0 and %d\n", MAX_NODES - 1);
        return;
    }
    if (!graph[u].exists || !graph[v].exists) {
        printf("Both nodes must exist to delete an edge.\n");
        return;
    }
    int found = 0;

    // Remove v from u's adj list
    for (int i = 0; i < graph[u].edgeCount; i++) {
        if (graph[u].adj[i] == v) {
            graph[u].adj[i] = graph[u].adj[graph[u].edgeCount - 1];
            graph[u].edgeCount--;
            found = 1;
            break;
        }
    }
    // Remove u from v's adj list
    for (int i = 0; i < graph[v].edgeCount; i++) {
        if (graph[v].adj[i] == u) {
            graph[v].adj[i] = graph[v].adj[graph[v].edgeCount - 1];
            graph[v].edgeCount--;
            break;
        }
    }
    if (found) {
        printf("Edge between %d and %d deleted.\n", u, v);
    } else {
        printf("Edge between %d and %d does not exist.\n", u, v);
    }
}

// Delete node and all edges referencing it
void deleteNode(int node) {
    if (node < 0 || node >= MAX_NODES) {
        printf("Node number must be between 0 and %d\n", MAX_NODES - 1);
        return;
    }
    if (!graph[node].exists) {
        printf("Node %d does not exist.\n", node);
        return;
    }
    // Remove edges from all adjacent nodes to this node
    for (int i = 0; i < graph[node].edgeCount; i++) {
        int adjNode = graph[node].adj[i];
        // Remove node from adjNode's adjacency list
        for (int j = 0; j < graph[adjNode].edgeCount; j++) {
            if (graph[adjNode].adj[j] == node) {
                graph[adjNode].adj[j] = graph[adjNode].adj[graph[adjNode].edgeCount - 1];
                graph[adjNode].edgeCount--;
                break;
            }
        }
    }
    graph[node].edgeCount = 0;
    graph[node].exists = 0;
    printf("Node %d and all connected edges deleted.\n", node);
}

// Search node
void searchNode(int node) {
    if (node < 0 || node >= MAX_NODES) {
        printf("Node number must be between 0 and %d\n", MAX_NODES - 1);
        return;
    }
    if (graph[node].exists) {
        printf("Node %d exists.\n", node);
    } else {
        printf("Node %d does not exist.\n", node);
    }
}

// Search edge
void searchEdge(int u, int v) {
    if (u < 0 || v < 0 || u >= MAX_NODES || v >= MAX_NODES) {
        printf("Node numbers must be between 0 and %d\n", MAX_NODES - 1);
        return;
    }
    if (!graph[u].exists || !graph[v].exists) {
        printf("Both nodes must exist to search for an edge.\n");
        return;
    }
    if (edgeInList(u, v)) {
        printf("Edge exists between %d and %d.\n", u, v);
    } else {
        printf("No edge exists between %d and %d.\n", u, v);
    }
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
    printf("7. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    return choice;
}

int main() {
    int choice, node, u, v;
    initializeGraph();

    while (1) {
        choice = menu();
        switch(choice) {
            case 1:
                printf("Enter node number to add (0-%d): ", MAX_NODES - 1);
                scanf("%d", &node);
                addNode(node);
                break;
            case 2:
                printf("Enter two node numbers to add an edge (0-%d): ", MAX_NODES - 1);
                scanf("%d %d", &u, &v);
                addEdge(u, v);
                break;
            case 3:
                printf("Enter node number to delete (0-%d): ", MAX_NODES - 1);
                scanf("%d", &node);
                deleteNode(node);
                break;
            case 4:
                printf("Enter two node numbers to delete edge (0-%d): ", MAX_NODES - 1);
                scanf("%d %d", &u, &v);
                deleteEdge(u, v);
                break;
            case 5:
                printf("Enter node number to search (0-%d): ", MAX_NODES - 1);
                scanf("%d", &node);
                searchNode(node);
                break;
            case 6:
                printf("Enter two node numbers to search edge (0-%d): ", MAX_NODES - 1);
                scanf("%d %d", &u, &v);
                searchEdge(u, v);
                break;
            case 7:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

