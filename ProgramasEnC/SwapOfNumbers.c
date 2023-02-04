//Write a C code to swap two numbers without using a third variable

int main(int argc, char const *argv[])
{
    int first=1, second=2;
    printf("\nBefore swapping the value of each variable is: \nFirst= %d\nSecond= %d",first, second);
    first=first+second;
    second=first-second;
    first=first-second;
    printf("\nAfter swapping the variables \nFirst= %d\nSecond= %d",first,second);

    return 0;
}
