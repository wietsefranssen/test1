/*! Fibonacci Series c language 
 */
#include<stdio.h>
/*!
    This is the function
*/

int hoiFunction()
{
   int n, first = 0, second = 1, next, c;
/*!
    This is the main C1 function
*/
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
/*!
    This is the main C2 function
*/
   for ( c = 0 ; c < n ; c++ )
   {
/*!
    This is the main C3 function
*/
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }
 
   return 0;
}
