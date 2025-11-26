include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SIZE 100
// heap definition
typedef struct Heap {
    int capacity;
    int size;
    int arr[SIZE];
} Heap;
// heap functions
int parent(int i) {
    return (i - 1) / 2;
}

int left(int i) {
    return 2 * i + 1;
}

int right(int i) {
    return 2 * i + 2;
}

// MIN HEAP FUNCTIONS

void min_heapify(Heap *h, int idx) {
    int li = left(idx);
    int ri = right(idx);
    int smallest = idx;

    if (li < h->size && h->arr[li] < h->arr[smallest])
        smallest = li;

    if (ri < h->size && h->arr[ri] < h->arr[smallest])
        smallest = ri;

    if (smallest != idx) {
        int temp = h->arr[idx];
        h->arr[idx] = h->arr[smallest];
        h->arr[smallest] = temp;

        min_heapify(h, smallest);
    }
}

void min_insert(Heap *h, int x) {
    if (h->size == h->capacity) {
        printf("Binary heap overflow\n");
        return;
    }
    h->arr[h->size] = x;
    int i = h->size;
    h->size++;

    // Fix the min heap property upward
    while (i != 0 && h->arr[parent(i)] > h->arr[i]) {
        int temp = h->arr[i];
        h->arr[i] = h->arr[parent(i)];
        h->arr[parent(i)] = temp;
        i = parent(i);
    }
}

int min_getMin(Heap *h) {
    if (h->size <= 0) {
        printf("Heap is empty\n");
        return INT_MAX;
    }
    return h->arr[0];
}

int min_extractMin(Heap *h) {
    if (h->size <= 0)
        return INT_MAX;
    if (h->size == 1) {
        h->size--;
        return h->arr[0];
    }

    int root = h->arr[0];
    h->arr[0] = h->arr[h->size - 1];
    h->size--;
    min_heapify(h, 0);

    return root;
}

void min_decreaseKey(Heap *h, int i, int val) {
    h->arr[i] = val;
    while (i != 0 && h->arr[parent(i)] > h->arr[i]) {
        int temp = h->arr[i];
        h->arr[i] = h->arr[parent(i)];
        h->arr[parent(i)] = temp;
        i = parent(i);
    }
}

void min_deleteKey(Heap *h, int i) {
	if(h->size == 0){
		printf("Heap is empty.\n");
		return;
	}
	min_decreaseKey(h, i, INT_MIN);
    	min_extractMin(h);
	printf("Root element deleted.\n");
}

// MAX HEAP FUNCTIONS

void max_heapify(Heap *h, int idx) {
    int li = left(idx);
    int ri = right(idx);
    int largest = idx;

    if (li < h->size && h->arr[li] > h->arr[largest])
        largest = li;

    if (ri < h->size && h->arr[ri] > h->arr[largest])
        largest = ri;

    if (largest != idx) {
        int temp = h->arr[idx];
        h->arr[idx] = h->arr[largest];
        h->arr[largest] = temp;

        max_heapify(h, largest);
    }
}

void max_insert(Heap *h, int x) {
    if (h->size == h->capacity) {
        printf("Binary heap overflow\n");
        return;
    }
    h->arr[h->size] = x;
    int i = h->size;
    h->size++;

    // Fix the max heap property upward
    while (i != 0 && h->arr[parent(i)] < h->arr[i]) {
        int temp = h->arr[i];
        h->arr[i] = h->arr[parent(i)];
        h->arr[parent(i)] = temp;
        i = parent(i);
    }
}

int max_getMax(Heap *h) {
    if (h->size <= 0) {
        printf("Heap is empty\n");
        return INT_MIN;
    }
    return h->arr[0];
}

int max_extractMax(Heap *h) {
    if (h->size <= 0)
        return INT_MIN;
    if (h->size == 1) {
        h->size--;
        return h->arr[0];
    }

    int root = h->arr[0];
    h->arr[0] = h->arr[h->size - 1];
    h->size--;
    max_heapify(h, 0);

    return root;
}

void max_increaseKey(Heap *h, int i, int val) {
    h->arr[i] = val;
    while (i != 0 && h->arr[parent(i)] < h->arr[i]) {
        int temp = h->arr[i];
        h->arr[i] = h->arr[parent(i)];
        h->arr[parent(i)] = temp;
        i = parent(i);
    }
}

void max_deleteKey(Heap *h, int i) {
	if(h->size == 0){
		printf("Heap is empty.\n");
		return;
	}
    	max_increaseKey(h, i, INT_MAX);
    	max_extractMax(h);
	printf("Root element deleted.\n");
}
void traverseHeap(Heap *h){
	if(h -> size == 0){
		printf("Heap is empty.\n");
		return;
	}
	for(int i = 0; i < h->size; i++){
		printf("%d ", h->arr[i]);
	}
}
int menu(){
	printf("Select Option: \n");
	printf("1. Insert an element into the Heap.\n");
	printf("2. Delete the root element from the Heap.\n");
	printf("3. Traverse heap elements.\n");
	printf("4. Exit program.\n");
	int choice;
	scanf("%d", &choice);

	return choice;
}

int main(void) {
    Heap *h = (Heap *)malloc(sizeof(Heap));
    if (!h) {
        printf("Memory allocation failed\n");
        return -1;
    }

    // Example usage for min heap
    h->capacity = SIZE;
    h->size = 0;

    printf("Choose either min heap or max heap. (1 or 2))\n");
    int option, val;
    scanf("%d", &option);
    if(option == 1){
	while(1){
		int choice = menu(); 
		switch(choice){
			case 1:
				printf("Enter element you want to insert: ");
				scanf("%d", &val);
				min_insert(h, val);
				printf("\n");
				break;
			case 2:
				min_deleteKey(h, 0);
				printf("\n");
				break;
			case 3:
				traverseHeap(h);
				printf("\n");
				break;
			case 4:
				printf("Program exited successfully.\n");
				free(h);
				return 0;
			default:
				printf("Invalid choice.\n");
				break;
		}
	}
    }
    else if(option == 2){
	while(1){
		int choice = menu(); 
		switch(choice){
			case 1:
				printf("Enter element you want to insert: ");
				scanf("%d", &val);
				max_insert(h, val);
				printf("\n");
				break;
			case 2:
				max_deleteKey(h, 0);
				printf("\n");
				break;
			case 3:
				traverseHeap(h);
				printf("\n");
				break;
			case 4:
				printf("Program exited successfully.\n");
				free(h);
				return 0;
			default:
				printf("Invalid choice.\n");
				break;
		}
	}	
    }
    else{
	    printf("Invalid choice.\n");
    }
    free(h);
    return 0;
}

