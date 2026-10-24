#include<stdio.h>
#include<string.h>

struct address{
    char street[100];
    char city[100];
    int zipcode;
};

struct Student{
    char name[50];
    int rollno;
    struct address address;
};
int main(){
    struct Student s1;
    printf("enter name : ");
    scanf(" %s", s1.name);
    printf("enter roll no: ");
    scanf("%d", &s1.rollno);
    printf("enter street : ");
    scanf(" %[^\n]", s1.address.street);
    printf("enter city : ");
    scanf(" %[^\n]", s1.address.city);
    printf("enter zip : ");
    scanf("%d", &s1.address.zipcode);

    printf("name : %s \nrollno: %d \naddress : %s, %s, zipcode: %d", s1.name, s1.rollno, s1.address.street, s1.address.city, s1.address.zipcode);


}


