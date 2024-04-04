#include<stdio.h>

struct stud{

    int g;
    int s;
    char d;
};
union cong{

    int a;
    int i;
    char n;
};
void main(){

    printf("%d", sizeof(struct stud));
    printf("\n%d", sizeof(union cong));
}