#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    char name[20];
    int reg;
    float cgpa;
};

int main() {

    int n;
    printf("Enter the no. of students: ");
    scanf("%d", &n);
    getchar();

    struct student *ptr = (struct student*) malloc(n * sizeof(struct student));

    for(int i = 0; i < n; i++) {
        printf("Enter details of student %d\n", i + 1);
        printf("Enter Name: ");
        fgets(ptr[i].name, 20, stdin);
        

        printf("Enter RedgNo: ");
        scanf("%d", &ptr[i].reg);
        getchar();

        printf("Enter Cgpa: ");
        scanf("%f", &ptr[i].cgpa);
        getchar();
       
    }

    for(int i = 0; i < n; i++) {
        printf("\nStudent Details %d\n", i + 1);
        printf("Name: %s", ptr[i].name);
        printf("RedgNo: %d\n", ptr[i].reg);
        printf("Cgpa: %.2f\n", ptr[i].cgpa);
    }

    return 0;
}