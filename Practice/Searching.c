// #include <stdio.h>
// #define SIZE 16
// // searching algo using struct 
// // Linear Search / Binary Search 
// struct student
// {
//     int mis;
//     char name[32];
//     float marks;
// }; // Only struct is declared or defined 
// typedef struct student student;
// // void print_records(student a[], int len){
// //     int i;
// //     for(i = 0; i < len; i++){
// //         printf("%d %s %.2f\n", a[i].mis, a[i].name, a[i].marks);
// //     }
// // }
// // // searching
// int linear_search(student a[], int len, int target){
//     int i;
//     for(i = 0; i < len; i++){
//         if(a[i].mis == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(void)
// {
//     student a[SIZE];
//     int len = 0, ret, target;
//     scanf("%d", &target);

//     while(len < SIZE && scanf("%d %s %f\n", &a[len].mis,  a[len].name, &a[len].marks) == 3)
//         len++;

//     //print_records(a, len);
//     ret = linear_search(a, len, 49);
//     if(ret == -1){
//         printf("not found\n");
//     }        
//     else
// 		printf("%d %s %.2f\n", a[ret].mis, a[ret].name, a[ret].marks);
//     return 0;
// }


// // selection sort
// #include <stdio.h>
// struct student {
// 	int mis;
// 	char name[32];
// 	float marks;
// };
// #define SIZE 16
// typedef struct student student;
// void print_records(student a[], int len) {
// 	int i;
// 	printf("-----array-------\n");
// 	for(i = 0; i < len; i++)
// 		printf("%d %s %.2f\n", a[i].mis, 
// 			a[i].name, a[i].marks);
// }
// /* linear search;
//  * searches for the record with mis id = mis
//  * in the array a[], upto len,
//  * returns the index of the element found
//  * returns -1 if not found
//  */
// int findithmin(student a[], int len, int i) {
// 	int min = a[i].mis;
// 	int minindex = i;
// 	int j;
// 	for(j = i + 1; j < len; j++)
// 		if(a[j].mis < min) {
// 			min = a[j].mis;
// 			minindex = j;
// 		}
// 	return minindex;
// }
// void selsort(student a[], int len) {
// 	student t;
// 	int min;
// 	int i;
// 	i = 0;
// 	while(i < len - 1) {
// 		min = findithmin(a, len, i);
// 		//move ith minimum to ith position
// 		t = a[i];
// 		a[i] = a[min];
// 		a[min] = t;	
// 		i++;
// 	}
// }
// int main() {
// 	student a[SIZE];
// 	int len = 0;
// 	int mis, ret;

// 	while(len < SIZE && scanf("%d%s%f", &a[len].mis, a[len].name,
// 			&a[len].marks) == 3)
// 		len++;	
// 	print_records(a, len);	
// 	selsort(a, len);
// 	print_records(a, len);	

// 	return 0;	
// }

// selection sort / bubble sort / insertion sort
