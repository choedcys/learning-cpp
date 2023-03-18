#include "header.h"
#include <stdio.h>
#include <string.h>
#include <cstdlib>
forPrint Menu;

void Input(Inform* temp, char* str, int N, int IndexOfInform){
    temp[IndexOfInform].List[N] = (char *)malloc(sizeof(char)*strlen(str)+1);
    strcpy(temp[IndexOfInform].List[N], str);
}
void Disp(Inform* temp, char *index, int N){
    int det = 0;
    for(int i = 0 ; i < N ; i++){
        if(strcmp(temp[i].List[0], index)==0){
            for(int j = 0 ; j < 4 ; j++){
                printf("%s: %s\n",Menu.menu[j],temp[i].List[j]);
            }
            det++;
            break;
        }
    }
    if(det == 0)
        printf("이름이 없음\n");
}

void Change(Inform* temp, char *index, int N){
    int det = 0;
    for(int i = 0 ; i < N ; i++){
        if(strcmp(temp[i].List[0], index)==0){
            char *str = (char *)malloc(sizeof(char)*100);
            for(int j = 1 ; j < 4 ; j++){
                printf("%s 입력: ",Menu.menu[j]);
                scanf("%s",str);
                strcpy(temp[i].List[j], str);
            }
            det++;
            break;
        }
    }
    if(det == 0)
        printf("이름이 없음\n");
}
void Delete(Inform* temp, char *index, int N){
    int det = 0;
    for(int i = 0 ; i < N ; i++){
        if(strcmp(temp[i].List[0], index)==0){
            for(int j = i ; j < N-1 ; j++){
                temp[j] = temp[j+1];
            }
            det++;
            break;
        }
    }
    if(det == 0)
        printf("이름이 없음\n");
}
void ShowAll(Inform* temp, int N){
    printf("이름     전화번호     구분     주소\n");
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("%s  ",temp[i].List[j]);
        }
        printf("\n");
    }
    printf("\n");
}
