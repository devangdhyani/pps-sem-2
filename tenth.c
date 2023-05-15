#include <stdio.h>
#include<string.h>

struct student{
    int id ;
    char name [20];

};
int main (){

    struct student s1;
    s1.id=1;
    strcpy(s1.name ,"anaya");

    printf("student id %d\n,s1.id");
    printf(" student name %d\n",s1.name);

    return 0;
}