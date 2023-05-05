#include <stdio.h>
 
int main(void) {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int loop, smallest;
 
   smallest = array[0];
   
   for(loop = 1; loop < 10; loop++) {
      if( smallest > array[loop] ) 
         smallest = array[loop];
   }
   
   printf("最小元素为 %d", smallest);   
   
   return 0;
}
