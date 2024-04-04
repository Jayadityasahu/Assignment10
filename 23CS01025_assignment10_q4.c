#include<stdio.h>

union plant{

    int c[100];
    float j[100];
    char g[100];
};

void main(){
int i,n;
union plant d;
printf("Enter n:");
scanf("%d", &n);
    printf("Enter no of potato in garden:");
    for(i=0;i<n;i++){
scanf("%d", &d.c[i]);
    }
    printf("\nEnter marks of student:");
    for(i=0;i<n;i++){
        scanf("%f", &d.j[i]);
    }
    printf("\nEnter the letters of your car:");
    for(i=0;i<n;i++){
        scanf("%c", &d.g[i]);
    }
    printf("\nThe no of potato in garden :");
    for(i=0;i<n;i++){
printf("\n%d", d.c[i]);
    }
    printf("\nThe marks :");
    for(i=0;i<n;i++){
        printf("\n%f", d.j[i]);
    }
    printf("\nThe letters of car:");
    for(i=0;i<n;i++){
        printf("\n%c", d.g[i]);
    }
}