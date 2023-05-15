#include <stdio.h>
#include <stdlib.h>
struct student 
{
    char name [30];
    int regno,m1,m2,m3,tot;
    float avg;
};
int main (){
    struct student s1;
    printf(" enter student name:\n");
    gets (s1.name);
    printf ("enter reg.no\n");
    scanf("%d",&s1.regno);
printf("enter marks1,marks2,marks3\n");
scanf ("%d",&s1.m1);
scanf("%d",&s1.m2);
scanf("%d",&s1.m3);
s1.tot=s1.m1+s1.m2+s1.m3;
s1.avg=s1.tot/3;
printf(" total is%d\n",s1.tot);
printf("average is %f\n,s1.avg");

return 0;
}