#include <stdio.h>
#include <string.h>
struct student {
    char name[10];
    int rollno;
};
int main(){
    int i;
    struct student st[5];
    printf (" enter ecord of 5 students ");
    for (i=0;i<5;i++){
        printf (" \nEnter rollno:");
         scanf ("%d",&st[i].rollno);
         printf ("\n enter name:");
         scanf("%s",&st[i].name);
    }
    printf ("\nstudent information list:");
    for(i=0;i<5;i++){
        printf("\nrollno:%d,name:%s",st[i].rollno,st[i].name);
    
    }
    return 0;
}