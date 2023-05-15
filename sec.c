#include <stdio.h>
#include <conio.h>
struct student{
  int rollno;
  char name [10];
} ;
int main(){
  int i;
  struct student st[3];
  printf("enter recods of 5 students");
  for(i=0;i<3;i++){
    printf("\n enter rollno:");
    scanf("%d",&st[i].rollno);
    printf("\nenter name:");
    scanf("%s",&st[i].name);
  }
  printf("\nstudent information list:");
  for(i=0;i<3;i++){
    printf("\nrollno:%d, Name:%s",st[i].rollno,st[i].name);
  }
  getch();
  return 0;
}