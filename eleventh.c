#include <stdio.h>
#include <string.h>
struct employee{
    int age ;
    char name [50];
    char department[20];
    float salary;
};
union person {
    int ag;
    char name [50];
    char deparment [20];
    float salar;
};
int main (){
    struct employee emp1;
    union person person1;

    printf(" the size of employee structure =%d\n",sizeof(emp1));
    printf("the size of person union=%d\n", sizeof(person1));
    return 0;
}