#include <stdio.h>
 
int main(void) {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop, largest;
 
   largest = array[0];
   
   for(loop = 1; loop < 10; loop++) {
      if( largest < array[loop] ) 
         largest = array[loop];
   }
   
   printf("最大元素为 %d", largest);   
   
   return 0;
}
