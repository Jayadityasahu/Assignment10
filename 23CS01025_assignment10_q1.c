#include<stdio.h>

union Data
{
    int x;
    float y;
    char b;
};
void main(){

    union Data u;
    u.x = 78;
    u.y = 436.000;
    u.b = 's';
    printf("%d", u.x);
    printf("\n%f", u.y);
    printf("\n%c", u.b);
}