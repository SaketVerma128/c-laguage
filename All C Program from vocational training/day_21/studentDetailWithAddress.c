#include <stdio.h>
#include <string.h>

struct Address
{
    char state[20];
    char city[20];
    int pincode;
};

struct student
{
    int id;
    char name[20];
    char grade;
    struct Address studentaddress;
};

void print_student(struct student s)
{
    printf("The id of student is %d\n", s.id);
    printf("The name of student is %s\n", s.name);
    printf("The grade of student is %c\n", s.grade);
    printf("The state of student is %s\n", s.studentaddress.state);
    printf("The city of student is %s\n", s.studentaddress.city);
    printf("The pincode of student is %d\n", s.studentaddress.pincode);
}

int main()
{
    struct student s1;

    s1.id = 00001;
    strcpy(s1.name, "Saket Verma");
    s1.grade = 'A';
    strcpy(s1.studentaddress.state, "Chhattisgarh");
    strcpy(s1.studentaddress.city, "Rajnandgaon");
    s1.studentaddress.pincode = 491441;
    print_student(s1);
    return 0;
}