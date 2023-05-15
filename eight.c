#include<stdio.h>
#include<string.h>
union book{
    char name[20];
    int price;

};
int main()
{
    union book book1;
    strcpy(book1.name,"c programming");
    book1.price=400;

    printf ("book1 name is %s\n",book1.name);
    printf(" book1 price is %d\n", book1.price);

    return 0;
}
