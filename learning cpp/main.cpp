#include<iostream>
#include<string.h>
#include "header.h"

int main(){
    Inform book[100];
    forPrint Menu;
    int count = 0;
    int *cursor, n;
    cursor = &n;
    while(1){
        printf("====메뉴====\n1. 입력\n2. 특정 인물 출력\n3. 정보변경\n4. 삭제\n5. 전체출력\n");
        scanf("%d",cursor);
        if(*cursor == 1){
            char* str = (char *)malloc(sizeof(char)*100);
            for(int i = 0 ; i < 4 ; i++){
                printf("%s: ",Menu.menu[i]);
                scanf("%s",str);
                Input(book, str, i, count);
            }
            count++;
        }
        else if(*cursor == 2){
            char* str = (char *)malloc(sizeof(char)*100);
            printf("이름입력: ");
            scanf("%s",str);
            Disp(book, str, count);
        }
        else if(*cursor == 3){
            char* str = (char *)malloc(sizeof(char)*100);
            printf("이름입력: ");
            scanf("%s",str);
            Change(book, str, count);
        }
        else if(*cursor == 4){
            char* str = (char *)malloc(sizeof(char)*100);
            printf("이름입력: ");
            scanf("%s",str);
            Delete(book, str, count--);
        }
        else if (*cursor == 5){
            ShowAll(book, count);
        }
    }
}
