/*
Write a program that reads the file (three examples of such files attached), 
and then prints the location and human-readable time of the transaction with the lowest 
amount.  
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>
// #include <fcntl.h>
// #define SIZE 16
// typedef struct transaction {
//     double amount;
//     time_t time;
//     unsigned int from_id;
//     unsigned int to_id;
//     char location[32];
// } transaction;
// int readfile(char *filename, transaction t[], int size) {
//     int fd = open(filename, O_RDONLY);
//     if (fd == -1) {
//         perror("open failed\n");
//         exit(1);
//     }
//     int n;
//     if(read(fd, &n, sizeof(int)) != sizeof(int)){
//         perror("error\n");
//         exit(1);
//     }
//     double minamount = t[0].amount;
//     int minindex = 0;
//     int i = 0;

//     while (i < n && read(fd, &t[i], size) == size) {
//         if (t[i].amount < minamount) {
//             minamount = t[i].amount;
//             minindex = i;
//         }
//         i++;
//     }
//     close(fd);
//     if (minindex == -1) {
//         printf("Invalid Transactions\n");
//         exit(1);
//     }
//     return minindex;
// }
// int main(int argc, char *argv[]) {
//     char file[SIZE];
//     transaction t[SIZE];

//     scanf("%s", file);

//     int i = readfile(file, t, sizeof(transaction));
//     if (i == -1) {
//         return 1;
//     }

//     struct tm *T = gmtime(&t[i].time);
//     if (T == NULL) {
//         perror("gmtime failed");
//         return 1;
//     }

// //    printf("Location: %s\n", t[i].location);
//     printf("%02d:%02d:%04d %02d:%02d:%02d\n",
//            T->tm_mday,
//            T->tm_mon + 1,
//            T->tm_year + 1900,
//            T->tm_hour,
//            T->tm_min,
//            T->tm_sec
//     );

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

typedef struct transaction {
	double amount;
	time_t time;
	unsigned int from_id;
	unsigned int to_id;
	char location[32];    
} transaction;

int main() {
	int fd, n, i;
	char buffer[32];
	scanf ("%s", buffer);
	double minamount;
	transaction min_trans;

	fd = open(buffer, O_RDONLY);
	if (fd == -1) {
		printf ("open failed\n");
		exit(1);
	}

	read(fd, &n, sizeof(int));
	transaction t[n];
	read(fd, t, n * sizeof(transaction));
	close(fd);

	minamount = t[0].amount;
	min_trans = t[0];
	for (i = 1; i < n; i++) {
		if (t[i].amount < minamount) {
			minamount = t[i].amount;
			min_trans = t[i];
		}
	}
	struct tm *T = gmtime(&min_trans.time);
	printf("%02d:%02d:%04d %02d:%02d:%02d\n", 
    T -> tm_mday, 
    T -> tm_mon + 1, 
    T -> tm_year + 1900, 
    T -> tm_hour, 
    T -> tm_min, 
    T -> tm_sec
    );
	return 0;
}
