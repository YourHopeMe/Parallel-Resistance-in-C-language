#include<stdio.h>

int main()

{

 int n;                     /*  number of resistors   */

 float er;                /*  equivalent resistance  */

 int r2;

 int i;                     /*  loop variable        */

 float temp;

 printf("enter number of resistors\n");

 scanf("%d",&n);

 printf("enter all resistances\n ");

 scanf("%f",&er);

 for(i=1;i<n;i++)

 {

     scanf("%d",&r2);

     temp=(1/er)+((1/(float)r2));        /* cast r2 to float  */

     er=(1/temp);

 }

 printf("\nequivalent resistance = %f",er);

 return 0;

}
