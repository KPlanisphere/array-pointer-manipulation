# Array and Pointer Manipulation in C


## Description
This project contains a series of C programs that demonstrate various techniques in array and pointer manipulation. These programs are designed to help understand how pointers interact with arrays and how different operations can be performed using them. Each file showcases unique aspects of pointer arithmetic, array indexing, and function usage in C.

### Key Features
- **Pointer Arithmetic**: Examples of pointer incrementing, dereferencing, and arithmetic operations.
- **Array Manipulation**: Demonstrations of array indexing and accessing elements out of bounds.
- **Function Implementation**: Functions that perform operations on arrays and pointers, showcasing parameter passing and return values.

### Files
1. **A1P0.c**
    - Demonstrates the use of functions with different parameter counts and pointer arithmetic.
    - **Key Code Snippet**:
        ```c
        float mitad(int num){
            return (num / 2.5);
        }

        int main(){
            float x;
            printf("El valor de x antes de enviarse %3.4f\n", x);
            x = mitad();
            printf("El valor de x sin parametros %3.4f \n", x);
            x = mitad(2, 5);
            printf("El valor de x con dos parametros %3,4f \n", x);
            x = mitad(7);
            printf("El valor de x con un parametro %3.4f \n", x);
            x = mitad(x);
            printf("El valor de x con el mismo parametro %3.4f \n", x);
        }
        ```
        This code demonstrates a function `mitad` that divides an integer by 2.5 and several calls to this function with different parameters.

2. **A2P0.c**
    - Illustrates array indexing, including out-of-bounds access, and shows unconventional array access methods.
    - **Key Code Snippet**:
        ```c
        int main(){
            int i;
            int a[5];
            for(i = 0; i < 5; i++)
                scanf("%d", &a[i]);
            printf("Se imprime arreglo pasandose de parametros\n");
            for(i = 0; i < 7; i++)
                printf("a[%d] = %d\n", i, a[i]);

            a[3] = 8;
            printf("%d\n", a[3]);
            a[-2] = 6;
            printf("%d\n", a[-2]);
        }
        ```
        This code demonstrates reading values into an array, printing array values (including out-of-bounds access), and modifying array values using both positive and negative indices.

3. **A3P0.c**
    - Focuses on pointer arrays and dereferencing pointers to access array elements.
    - **Key Code Snippet**:
        ```c
        #include <stdio.h>
        
        int main(void){
            static char *b[] = {"menos", "mas", "grande"};
            static char **d[] = {b, b+1, b+2};
            char *p;

            printf("%s\n", *(b + 1));
            printf("1.- %c\n", *(b[0] + 2));
            printf("2.- %c\n", *(*b + 2));
            printf("3.- %c\n", **(b + 2));

            printf("%s\n", *(b + 1));
        }
        ```
        This code demonstrates initializing an array of strings, a pointer array pointing to these strings, and accessing elements using various pointer dereferencing techniques.

4. **A4P0.c**
    - Highlights pointer manipulation with arrays, including pointer increments and accessing array elements through pointers.
    - **Key Code Snippet**:
        ```c
        int main(){
            int a[10], *pa, x;
            a[0] = 11; a[1] = 22; a[2] = 33; a[3] = 44;

            pa = a;
            x = *pa;
            pa++;
            x = *pa;
            x = *pa + 1;
            x = *(pa + 1);
            x = *++pa;
            x = ++*pa;

            printf("El valor de x = %d\n", x);
            printf("El valor de pa[2] = %d\n", pa[2]);
            printf("El valor de *pa = %d\n", *pa);
            printf("El valor de pa[2] = %d\n", pa[2]);
        }
        ```
        This code demonstrates initializing a pointer to an array, incrementing the pointer, and accessing array elements through pointer arithmetic.

## How to Use
1. **Compilation**: Each C file can be compiled using a C compiler such as `gcc`.
    ```bash
    gcc A1P0.c -o A1P0
    ```
2. **Execution**: Run the compiled programs to see the output of the array and pointer operations.
    ```bash
    ./A1P0
    ```
