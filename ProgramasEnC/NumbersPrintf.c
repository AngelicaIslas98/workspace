// Write a C program to print a triangle of numbers

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n=5;
    for (i=1;i<=n;i++){
        for (j= 1; j <=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
}