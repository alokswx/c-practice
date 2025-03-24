#include <stdio.h>

int main() {
    // create a link betn int, int *, int ** (all essentially pointing to the same thing which is '10')
    int num1 = 10;
    int *num2 = &num1;
    int **num3 = &num2;
    
    // first, print out the addresses. These really don't mean nothing,
    // except for the fact that *num2 && **num3 are almost near to each other
    printf("Value: %d and Address: %p\n", num1, &num1);

    printf("Value: %d and Address: %p\n", *num2, &num2);
    
    printf("Value: %d and Address: %p\n\n", **num3, &num3);

    // Now try changing the original thing by dereferencing once (*num2) and dereferencing twice (*num3) & so on..
    *num2 = 20;
    printf("Now, num1 is %d and Address: %p\n", num1, &num1);
    printf("Also, num2 is %d and Address: %p\n", *num2, &num2);

    **num3 = 30;
    printf("Now, num1 is %d and Address: %p\n", num1, &num1);
    printf("Also, num3 is %d and Address: %p\n", **num3, &num3);

    return 0;
}
