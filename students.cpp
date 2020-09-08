// Allows you to enter a list of students and sorts them by marks from highest to lowest.


#include <stdio.h>
using namespace std;

struct student
{
    int rollno;
    char name[80];
    int marks;
};

void accept(student list[], int s);
void display(student list[], int s);
void bsortDesc(student list[], int s);

int main(){

    student arr[20];
    int n;

    printf("Number of records you want to enter? : ");
    scanf("%d", &n);

    accept(arr, n);
    printf("\nBefore sorting");
    
    display(arr, n);
    bsortDesc(arr, n);
    printf("\nAfter sorting");
    display(arr, n);
}

void accept(student list[80], int s) {
    
    int i;
    
    for (i = 0; i < s; i++) {

        printf("\n\nEnter data for Record #%d", i + 1);

        printf("\nEnter rollno : ");
        scanf("%d", &list[i].rollno);

        printf("\nEnter name : ");
        scanf("%s", list[i].name);

        printf("\nEnter marks : ");
        scanf("%d", &list[i].marks);
    }
}

void display(student list[80], int s) {
    
    int i;

    printf("\n\nRollno\tName\tMarks\n");
    for (i = 0; i < s; i++) {
        printf("\n%d\t%s\t%d\n", list[i].rollno, list[i].name, list[i].marks);
    }
}

void bsortDesc(student list[80], int s) {

    int i, j;
    student temp;
    

    for (i = 0; i < s - 1; i++) {
        
        for (j = 0; j < (s - 1 - i); j++) {
            
            if (list[j].marks < list[j + 1].marks) {
                
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    
}

