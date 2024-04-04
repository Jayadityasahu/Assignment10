#include<stdio.h>

union EmpDetails{

    float employeehourlywage;
    double fixedsalary;
};

struct Employee{

    int employeeID;
    char name[865];
    union EmpDetails w;
};



void main(){

    
    union EmpDetails w;
    struct Employee g;

    printf("Enter employeeID:");
    scanf("%d", &g.employeeID);
    printf("\nEnter name:");
    scanf("%s", &g.name);
    printf("\nEnter employee details:");
    scanf("%f %lf", &g.w.employeehourlywage, &g.w.fixedsalary);
    printf("\nEmployee ID :%d",g.employeeID );
    printf("\nName :%s",g.name);
    printf("\nEmployee: %f %lf", g.w.employeehourlywage, g.w.fixedsalary);

    }