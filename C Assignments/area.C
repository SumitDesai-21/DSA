// AREA OF RECTANGLE, SQUARE , CIRCLE  USING FUNCTIONS.
#include<stdio.h>

// defination of a function
 int areasquare(float a)
 {    
     return a*a;
 }
 float areacircle(float r)
 {
     return 3.142*r*r;
     
 }
 float arearectangle(float a, float b)
 { 
     return a*b;
 }

   int main()
{   char ch;
   float area;
   printf("ENTER THE VALUES ACCORDING TO THE DENOTIONS BELOW:\n");
   printf("RECTANGLE- r\n");
   printf("CIRCLE    -c\n");
   printf("SQUARE    -s\n");
   scanf("%c", &ch);
   if(ch=='r')
   { float a,b;
     printf("ENTER THE DIMENSIONS:\n");
     scanf (" %f%f", &a,&b );
     area = arearectangle(a,b);
     printf("THE AREA IS:%f\n", area);
   }
    
    else if(ch =='c')
    {   float r = 1;
        printf("ENTER THE VALUE OF RADIUS:\n");
        scanf(" %f", &r);
        area = areacircle(r);
        printf("THE AREA  IS:%f\n",area);
    }
       else if(ch =='s')
       {
           float a;
           printf("ENTER THE VALUE OF SIDE OF SQUARE:\n");
           scanf(" %f", &a);
           area = areasquare(a);
           printf("the area of the square is:%f\n",area);
       }
    else
    {
        printf("INVALID INPUT\n");
    }
    return 0;
}