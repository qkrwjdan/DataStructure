#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book_info{
    int year;
    char *title;
};
typedef struct book_info books;

int main(){
    books *book;
    int size,i;
    char temp[101];

    printf("book number >>"); scanf("%d",&size);
    book = (books*)malloc(sizeof(books)*size);
    for(i=0;i<size;i++){
        printf("book title >>");
        fflush(stdin);
        gets(temp);

        book[i].title = (char*)malloc(sizeof(char) * (strlen(temp)+1));
        strcpy(book[i].title,temp);

        printf("year >>"); scanf("%d",&(book[i].year));
    }
    for(i=0;i<size;i++){
        printf("%s\t>>\t%d\n",book[i].title,book[i].year);
    }

    for(i=0;i<size;i++){
        free(book[i].title);
    }
    free(book);
}