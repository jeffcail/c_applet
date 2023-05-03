#include <stdio.h>
#include <math.h>

int issuhu(int k);
int main(void) {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = n; i > 3; i--) {
        if (issuhu(i)) {
            if (issuhu(i-2)) {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}

int issuhu(int k) {
    for (int i = 2; i < sqrt(k)+1; i++) {
        if(k%i==0)
            return 0;
    }
    return 1;
}