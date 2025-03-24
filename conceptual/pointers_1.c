#include <stdio.h>

int main() {
    // create a link betn int, int *, int ** (all essentially pointing to the same thing which is '10')
    int num1 = 10;
    int *num2 = &num1;
    int **num3 = &num2;
    
    // first, print out the addresses. These really don't mean nothing,
    // except for the fact that *num2 && **num3 are almost near to each other
    printf("Value: %d\n", num1);
    printf("%p\n", (void *)num1);

    printf("Value: %d\n", *num2);
    printf("%p\n", (void *)num2);
    
    printf("Value: %d\n", **num3);
    printf("%p\n", (void *)num3);

    printf("Now, the interchange happens!!\n");

    // Now try changing the original thing by dereferencing once (*num2) and dereferencing twice (*num3) & so on..
    *num2 = 20;
    printf("%d\n", num1);
    printf("%d\n", *num2);
    if (num1 == (*num2)){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    **num3 = 30;
    printf("%d\n", num1);
    printf("%d\n", **num3);
    if (num1 == (**num3)){
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
