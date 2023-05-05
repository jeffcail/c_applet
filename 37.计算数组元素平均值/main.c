#include <stdio.h>
 
int main(void) {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;
   float avg;
 
   sum = avg = 0;
   
   for(loop = 0; loop < 10; loop++) {
      sum = sum + array[loop];
   }
   
   avg = (float)sum / loop;
   
   printf("平均值为 %.2f", avg);   
   
   return 0;
}
