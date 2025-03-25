#include <stdio.h>

// The command line args used to run your program are also passed to main.
// argc being the number of args - your program's name counts as 1
// argv is an array of char arrays - containing the args themselves
// argv[0] = name of your prog; argv[1] = first CLI arg, argv[2] = second CLI arg, etc.
int main (int argc, char **argv){
  
  // Note that, when not declaring the size, the size of the array is the number
  // of elements in the initializer. With "{0}", my_array is now of size one: [0].
  // To evaluate the size of the array at run-time, divide its byte size by the byte
  // size of its element type:
  size_t my_array_size = sizeof(my_array) / sizeof(my_array[0]);
  // WARNING!! You shud evaluate the size _before_ you begin passing the array
  // to functions because arrays get _downgraded_ to raw ptrs when they are passed
  // to functions (so the statement above will produce the wrong result inside the fx)

  // Arrays are mutable / changeable: it's just memory at the end of the day!
  my_array[1] = 2;
  printf("%d\n", my_array[1]);

  // In C99++, variable length arrays can be declared as well. 
  // The size of such an array need not be a compile time constant:
  printf("Enter the array size: ");    
  int array_size;
  scanf("%d", &array_size);
  int var_length_array[array_size];
  printf("sizeof array = %zu\n", sizeof var_length_array);
  // Example 
  // > Enter the array size: 10
  // > sizeof array = 40

  // Multi-dimensional arrays
  // type array_name[rows][columns]
  int multi_array[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 0}};
  // access elements:
  int array_int = multi_array[0][2]; // => 3
  // In the above example, 0 means the 1st row and not the 0th row

  // You need to cast at least one int to float to get a floating pt result
  (float) i1 / i2;    // => 0.5
  i1 / (double) i2;   // => 0.5
  f1 / f2;            // => 0.5 +/- epsilon
  
  // Floating pt numbers are defined by IEEE 754, thus cannot store perfectly
  // exact values. For instance, the foll. does not produce expected results
  // because 0.1 might actually be 0.999999999999 inside the computer, and 0.3
  // might be stored as 0.300000000001
  (0.1 + 0.1 + 0.1) != 0.3;       // => 1 (true)
  // and it is NOT associative due to reasons mentioned above.
  1 + (1e123 - 1e123) != (1 + 1e123) - 1e123;     // => 1 (true)
  // this notation is scientific notations for numbers: 1e123 = 1*10^123

  // It is imp to note that almost all systems have used IEEE 754 to 
  // represent floating pts. Even python, used for scientific computing, 
  // eventually calls C which uses IEEE 754. It is mentioned this way not to
  // indicate that this is a poor implementation, but instead as a warning
  // that when doing floating pt comparisons, a little bit of error (epsilon)
  // needs to be considered.

  // C ain't Pyton -- comparisons do NOT chain.
  // Warning: The line below will compile, but it means '(0 < a) < 2'.
  // This expression is always true, because (0 < a) could be either 1 or 0.
  // In this case it's 1, because (0 < 1).
  int between_0_and_2 = 0 < a < 2;
  // Instead use:
  int between_0_and_2 = 0 < a && a < 2;

  // For determining the max value of a 'char', a 'signed char' and an 'unsigned char',
  // respectively, use the CHAR_MAX, SCHAR_MAX and UCHAR_MAX macros from <limits.h>











  


}
