#include <stdio.h>

int main()
{
 /*   int x_variable = 11; 
    int *x_pointer = &x_variable;

    printf("It's the memory address of 'x_variable'%p \n",&x_variable);
    printf("It's the memory address of 'x_pointer' %p \n",x_pointer);
    printf("It's the value inside the 'x_variable'%d \n",x_variable);
    printf("It's the value of the pointer %d \n", *x_pointer);*/

    int x = 8;
int y = 7;
x++;
printf("%d",x+= y--);

    return 0;
}
