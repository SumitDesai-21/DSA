// lab tasks
// . Write at least 4 variations of the problem of finding the maximum among 3 numbers.
// These variations should include nested if-else, and a single if-else.
// single if-else
/*
#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    scanf("%d %d %d", &num1, &num2, &num3);

   
    if (num1 >= num2 && num1 >= num3) {
        max = num1;  
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;  
    } else {
        max = num3;  
    }

   
    printf("%d\n", max);

    return 0;
}
*/
/*
#include <stdio.h>
int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b){
       if(a>=c){
        printf("%d\n",a);
       }
       else{
        printf("%d\n",c);
       }
    }

    if(b>=a){
       if(b>=c){
        printf("%d\n",b);
       }
       else{
        printf("%d\n",c);
       }
    }

    if(c>=a){
       if(c>=b){
        printf("%d\n",c);
       }
       else{
        printf("%d\n",b);
       }
    }

    return 0;
}
*/