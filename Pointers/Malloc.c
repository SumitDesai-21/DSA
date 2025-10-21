// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int i = 20, *q;
//     int *p = malloc(8);
//     q = p;
//     p = &i;
//     free(p);
//     printf("%d\n", p);
//     return 0;
// }

/*
// Memory allocation 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = (int *)malloc(2 * sizeof(int));
    ptr[0] = 10;
    free(ptr);
    printf("%d\n", ptr); 
    return 0;
}
*/

// //  Pointer to pointer
// #include <stdio.h>
// int main(void)
// {
//     int x = 10;
//     int *p = &x;
//     int **pp = &p;
//     printf("value of x %d\n", **pp);
//     return 0;
// }

// // pointer to functions
// #include <stdio.h>
// #include <stdlib.h>

// void display(int x) { printf("%d\n", x); }
// int main(void)
// {
//     void (*funcPtr)(int) = display; // Function pointer
//     funcPtr(5);
//     return 0;
// }


