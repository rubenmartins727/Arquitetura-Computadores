#include <stdio.h>

char arrmax(char a[], char num_elements)
{
   char i, max;
   max = a[0];
   for (i = 1; i < num_elements; i++)
   {
      if (a[i] > max)
      {
         max = a[i];
      }
   }

   return (max);
}

char arrmin(char a[], char num_elements)
{
   char i, min;
   min = a[0];
   for (i = 1; i < num_elements; i++)
   {
      if (a[i] < min)
      {
         min = a[i];
      }
   }

   return (min);
}

char arravg(char a[], char num_elements)
{
   char i; 
	int avg;
   avg = a[0];
   for (i = 1; i < num_elements; i++)
   {
      avg = avg + a[i];
   }
   avg = avg / (int)num_elements;

   return (char)avg;
}



void fillMatrix(char *p, char*l, int n){
      for(int i = 0; i < n; i++){
               *p=*l;
               l++;
               p++;
         }     
}
