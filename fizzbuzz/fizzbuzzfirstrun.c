#include <stdio.h>

int main(void) {
    int n = 1;
    
    while (n <= 100){
        if (n%3 == 0){
            if (n%5 == 0){
                printf("Fizzbuzz\n");
            } else {
                printf("Fizz\n");
            }
        } else if (n%5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", n);
        }
        n++;
    }
    
    return 0;
}
