#include<stdio.h>
#include<string.h>

struct marks_data{
    char subject[20];
    int mark;
};

struct Student{
    char name[50];
    int rollno;
    struct marks_data marks[3];
    int total;
    int avg;
};

int main(){
    struct Student Students[5];
    for(int i = 0; i < 5; i++){
        printf("enter name: ");
        scanf(" %[^\n]", Students[i].name);
        printf("enter roll no: ");
        scanf("%d", &Students[i].rollno);
        for(int j = 0; j < 3; j++){
            printf("enter subject (%d) name for student (%d): ", j+1, i+1);
            scanf(" %[^\n]", Students[i].marks[j].subject);
            printf("enter marks: ");
            scanf("%d", &Students[i].marks[j].mark);
        }
        Students[i].total = 0;
        for(int j = 0; j< 3; j++){
            Students[i].total += Students[i].marks[j].mark;
        }
        Students[i].avg = Students[i].total/3;
    }
    while(1){
        int select;
        printf("select student: (1,2,3,4,5)");
        scanf("%d", &select);
        if(select == 0) break;
        printf("total = %d \navg = %d\n", Students[select-1].total, Students[select-1].avg);


    }
}
