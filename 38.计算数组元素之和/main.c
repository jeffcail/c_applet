#include <stdio.h>
 
int main(void) {
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int sum, loop;
 
   sum = 0;
   
   for(loop = 9; loop >= 0; loop--) {
      sum = sum + array[loop];      
   }
 
   printf("元素和为：%d", sum);   
 
   return 0;

}
