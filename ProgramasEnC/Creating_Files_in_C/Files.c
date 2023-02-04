//How create data and save it in a data base
#include<stdio.h>
#include<conio.h>

//Declaracion de funciones


//Estructras 
struct student
{
    char first_name[25];
    char last_name[25];
    int roll_no;
    char Class[10];
    char vill[20];
    float per;
};


int main(int argc, char const *argv[])
{
    int choice;
    while (choice=!5)
    {
        printf("\t\t\t-----STUDENT DATA BASE MANAGEMENT SYSTEM-----");
        printf("\n\n\n\t\t\t 1. Add Student Redord\n");
        printf("\t\t\t 2. Student Redords\n");
        printf("\t\t\t 3. Search Student\n");
        printf("\t\t\t 4. Delete Redord\n");
        printf("\t\t\t 5. Exit\n");
        printf("\t\t\t _________________________\n");
        scanf("%d",&choice);
    }
    return 0;
}



