#include<stdio.h>
#include<string.h>
struct std_record {
    char name [25];
    char class [5];
    char roll_no[25];
int std_record;
};
int main (){

struct stud_records student1;
struct stud_records student2;
strcpy (student1.name,"sonu");
strcpy (student1.class,"fifth");
strcpy (student1.rool_no,"1");

strcpy (student2.name,"bonu");
strcpy (student2.class,"fifth");
strcpy (student2.rool_no,"2");

printf ("student1name:%s/n",student1.name);
printf("student1class:%s/n",student1.class);
printf ("student1roll_no:%d/n",student1.roll_no);

rintf ("student2name:%s/n",student2.name);
printf("student12class:%s/n",student2.class);
printf ("student2roll_no:%d/n",student2.roll_no);

return 0;
}