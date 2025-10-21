M- 1: Piyush
#include<stdio.h>
#include<math.h>

int main() {
	int n, c, i;
	
	while(scanf("%d", &n) == 1) {
		i = 0;
		while(i < 10) {
			c = pow(3, i);
			if(c == n) {
				printf("%d ", c);
			}
			i++;
		}
	}
	return 0;
}

#include <stdio.h>
int main () {
	int a, b;
	float q;
	while (1) {
		b = scanf("%d", &a);
		if (b != 1) {
		return 0;
		}
		q = (float)a;
		while (q >= 3) {
			if (a == 1) {
				break;
			}
			q /= 3;
		}
		if (q == 1) {
			printf ("%d ", a);
		}
	}
	return 0;
}

// alternate
#include <stdio.h>
int main(void)
{
    int num, q;

    while(scanf("%d", &num) != EOF){
        q = num;
        while(q > 0 && q % 3 == 0){
            q /= 3;
        }
        if(q == 1){
            printf("%d ", num);
        }
    }
    return 0;
}
