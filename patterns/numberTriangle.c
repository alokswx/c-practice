#include <stdio.h>

int main (void) {
    int line_count = 1;
    int n = 0;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    
    // while keeps track of the line count
    // for prints the actual number according to the line_count 

    // Upper pyramid (increasing)
    while (line_count < n){
        for (int i = 1; i <= line_count; i++){
            printf("%d ", i);
        }
        printf("\n");
        line_count++;
    }

    // Lower pyramid (decreasing)
    while (line_count > 0){
        for (int i = 1; i <= line_count; i++){
            printf("%d ", i);
        }
        printf("\n");
        line_count--;
    }

    return 0;
}
