#include <stdio.h>
    struct student
    {
        int roll;
        char name[20];
        float marks;
    };
  int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n]; 
    for (int i = 0; i < n; i++) {
    printf("\nEnter details for student %d\n", i + 1);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Roll No: ");
    scanf("%d", &s[i].roll);
    printf("Marks: ");
    scanf("%f", &s[i].marks);
    }

    printf("\nStudent Results\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
  }  
    
