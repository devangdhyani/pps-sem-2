#include <stdio.h>
#include<string.h>
struct student {
    char name [60];
    int roll_no;
    float marks;
} sData ;
int main (){
    printf (" enter the student record: \n");
    printf(" enter name :");
    fgets (sData.name,sizeof(sData.name),stdin);
    printf("enter roll number:");
    scanf("%d", & sData. roll_no);
    printf("enter marks:");
    scanf("%f",& sData.marks );
    printf(" the data you have entered is:\n");
    printf("student name:");
    printf ("%s",sData .name );
    printf("student roll number: %d\n",sData.roll_no);
    printf("student marks : %1f\n",sData.marks);
    return 0;
}