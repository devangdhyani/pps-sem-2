#include<stdio.h>
#include<string.h>
struct book{
     char name[20];
     float price ;
};
int main(){
    struct book book1;
    struct book book2;
    strcpy (book1.name,"c programming");
    book1.price =450.50;
    strcpy(book2.name,"java league");
    book2.price=550.50;

printf ("book 1 name :%s\n", book1.name);
printf("book 1 price :%f\n", book1.price);
printf("book 2 name :%s\n",book2.name);
printf ("book 2 price:%f\n",book2.price);

return 0;
}