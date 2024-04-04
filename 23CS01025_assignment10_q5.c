#include<stdio.h>

enum PayType{

    HOURLY,
    SALARY,
};

union EmpDetails{

    float employeehourlywage;
    double fixedsalary;
    enum PayType d;
};

struct Employee{

    int employeeID;
    char name[865];
    union EmpDetails w;
    enum PayType m;
};

void main(){

    
    union EmpDetails w;
    struct Employee g;
    int f;
    printf("Enter employeeID:");
    scanf("%d", &g.employeeID);
    printf("\nEnter name:");
    scanf("%s", &g.name);
    printf("Enter pay type (0 for HOURLY, 1 for SALARY): ");
    
    scanf("%d", &f);
    g.w.d = (f == 0) ? HOURLY : SALARY;
    if (g.w.d == HOURLY) {
        printf("Enter hourly wage: ");
        scanf("%f", &g.w.employeehourlywage);
    } else {
        printf("Enter fixed salary: ");
        scanf("%lf", &g.w.fixedsalary);
    }
 
    printf("\nEmployee ID :%d",g.employeeID );
    printf("\nName :%s",g.name);
    printf("\nEmployee: %f %lf", g.w.employeehourlywage, g.w.fixedsalary);

    }