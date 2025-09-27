#include <stdio.h>
#include <string.h>
struct  account {
	int acctid;
	char name[32];
	double amount;
	int type;
};
int main() {
	struct account data[8];
	int n, i, min;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d %s %lf %d", &(data[i].acctid),
			data[i].name, &(data[i].amount),
			&(data[i].type));
	min = 0;
	for(i = 1; i < n; i++)
		if(strcmp(data[i].name, data[min].name) < 0)
			min = i;
	printf("%d %s %.2lf %d\n", data[min].acctid,
		data[min].name, data[min].amount,
		data[min].type);
	return 0;
}
