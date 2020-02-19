#include <stdio.h>
#include <stdlib.h>

struct bookInfo{
    int year;
    char title[50];
};

typedef struct bookInfo book; 

int main(){
    book *bookptr;
    bookptr = (book*)malloc(sizeof(book)*10);

    int whileBreaker = 0;
    int i = 0;
    while(1){

        printf("input book title");
        fgets(bookptr[i].title,sizeof(bookptr[i].title),stdin);
        fflush(stdin);
        printf("input book year");
        scanf("%d",&bookptr[i].year);
        fflush(stdin);
        printf("it is end? go >> 1/ out >> 0");
        scanf("%d",&whileBreaker);
        fflush(stdin);
        i++;
        if(whileBreaker == 0)
            break;
    }

    for(int j=0;j<i;j++){
        printf("%d >>> %s\n",bookptr[j].year,bookptr[j].title);
    }
    free(bookptr);
    return 0;
    // char str[10][10];
    // for(int i =0;i<10;i++){
    //     fgets(str[i],sizeof(str[i]),stdin);
    // }
    // for(int i =0;i<10;i++){
    //     printf("%s\n",str[i]);
    // }

}