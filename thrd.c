#include <stdio.h>
#include <string.h>

struct books {
    char title [50];
    char author [50] ;
    char subject [100];
    int book_id;
};

int main(){

    struct books book1 ;
    struct books book2 ;
    
    strcpy ( book1.title, "c +");
    strcpy (book1.author, "neha soni");
    strcpy(book1.subject,"pps");
    book1.book_id=6495407;

    strcpy ( book2.title,"telecom");
    strcpy(book2.author,"sonu sood");
    strcpy(book2.subject,"pps pro");
    book2.book_id=6495700;
    
    printf("book 1 title : %s/n",book1.title);
    printf("book 1 author:%s/n",book1.author);
    printf("book 1 subject:%s/n",book1.subject);
      printf(" book 1 book_id:%d/n",book1.book_id );

      printf("book 2 title : %s/n",book2.title);
    printf("book 2 author:%s/n",book2.author);
    printf("book 2 subject:%s/n",book2.subject);
    printf("book 2 book_id:%d/n",book2.book_id);

    return 0;
}