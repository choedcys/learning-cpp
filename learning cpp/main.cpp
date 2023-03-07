#include <iostream>
#include <vector>
//
//void show(int temp[][6], int N){
//    for(int col = 0 ; col < N ; col++){
//        for(int row = 0 ; row < 6 ; row++){
//            std::cout<<temp[col][row]<<" ";
//        }
//        std::cout<<std::endl;
//    }
//}
//
//int** rare(int temp[][6], int N){
//    int num = 0;
//    for(int col = 0 ; col < N ; col++){
//        for(int row = 0 ; row < 6 ; row++){
//            if(temp[col][row] != 0)
//                num++;
//        }
//    }
//    int** arr = (int**)malloc(sizeof(int*)*num);
//    for(int i = 0 ; i < num ; i++){
//        arr[i] = new int[3];
//    }
//    num = 0;
//    for(int col = 0 ; col < N ; col++){
//        for(int row = 0 ; row < 6 ; row++){
//            if(temp[col][row] != 0){
//                arr[num][0] = col;
//                arr[num][1] = row;
//                arr[num][2] = temp[col][row];
//                num++;
//            }
//        }
//    }
//    return arr;
//}
//
//int main(){
//    int A[6][6] = {{0,0,0,7,0,0}, {9,0,0,0,0,8}, {0,0,0,0,0,0}, {6,5,0,0,0,0}, {0,0,0,0,0,1}, {0,0,2,0,0,0}};
//    int B[6][6] = {{3,0,0,1,2,0}, {0,8,0,0,5,2}, {2,1,1,0,3,4}, {5,0,0,9,0,0}, {2,1,1,0,0,5}, {6,0,4,0,0,0}};
//    show(A,6);
//    show(B,6);
//
//    int **rareA = rare(A,6);
//    int **rareB = rare(B,6);
//    show(rareA,6);
//    show(rareB,6);
//}
void fill(int arr[][10], int div){
    int cursor = div, cnt = 0;
    for(int i = 0 ; i < div ; i++){
        if(arr[1][i] != arr[1][cursor])
            arr[1][6+(cnt++)] = arr[1][i];
        for( ; cursor < 6 ; cursor++){
            if(arr[1][i+1] < arr[1][cursor]){
                arr[1][6+cnt] = arr[1][cursor];
                cnt++;
            }
        }
    }
}
int main(){
    int div=0, cnt = 0;
    int arr[2][10];
    arr[0][0]=10;
    arr[0][1]=6;
    arr[0][2]=3;
    arr[0][3]=3;
    arr[0][4]=4;
    arr[0][5]=10;

    arr[1][0]=5;
    arr[1][1]=1;
    arr[1][2]=0;
    arr[1][3]=2;
    arr[1][4]=1;
    arr[1][5]=0;

    for(int i = 0 ; i < 9 ; i++){
        if(arr[1][i] <= arr[1][i+1]){
            div = i+1;
            break;
        }
    }
    fill(arr,div);
    for(int i = 6 ; i < 10 ; i++){
        for(int j = 0 ; j < 6 ; j++){
            if(arr[1][i] == arr[1][j]){
                cnt += arr[0][j];
            }
        }
        arr[0][i] = cnt;
        cnt = 0;
    }

    printf("다항식1: ");
    for(int i = 0 ; i < 3 ; i++){
        if(arr[1][i] != 0 && arr[1][i] !=1)
            printf("%dx^%d+",arr[0][i],arr[1][i]);
        else if(arr[1][i] == 1)
            printf("%dx+",arr[0][i]);
        else if(arr[1][i] == 0)
            printf("%d",arr[0][i]);
    }
    printf("\n");
    printf("다항식2: ");
    for(int i = 3 ; i < 6 ; i++){
        if(arr[1][i] != 0 && arr[1][i] !=1)
            printf("%dx^%d+",arr[0][i],arr[1][i]);
        else if(arr[1][i] == 1)
            printf("%dx+",arr[0][i]);
        else if(arr[1][i] == 0)
            printf("%d",arr[0][i]);
    }
    printf("\n");
    printf("다항식합: ");
    for(int i = 6 ; i < 10 ; i++){
        if(arr[1][i] != 0 && arr[1][i] !=1)
            printf("%dx^%d+",arr[0][i],arr[1][i]);
        else if(arr[1][i] == 1)
            printf("%dx+",arr[0][i]);
        else if(arr[1][i] == 0)
            printf("%d",arr[0][i]);
    }
    printf("\n");
}

//int main(){
//    int cnt, mem, up, down;
//    std::cin>>cnt;
//    for(int i = 2 ; ; i++){
//        if(cnt -(i-1) < 0){
//            mem = i;
//            break;
//        }
//        cnt -= (i-1);
//    }
//    if(mem % 2 == 1){
//        up = 1;
//        down = mem-1;
//        for(int i = 0 ; i < cnt-1 ; i++){
//            up++;
//            down--;
//        }
//        std::cout <<up<<"/"<<down<<std::endl;
//    }
//    else{
//        up = mem-1;
//        down = 1;
//        for(int i = 0 ; i < cnt-1 ; i++){
//            up--;
//            down++;
//        }
//        std::cout <<up<<"/"<<down<<std::endl;
//    }
//}

//int main(){
//    int cursorB = 0;
//    int A[] = {1,3,4,13,16,17};
//    int B[] = {6,7,14,19,21,22,26,28,30,100,110};
//    std::vector<int> AB;
//    for(int i = 0 ; i < sizeof(A)/4 ; i++){
//        if(B[cursorB] != A[i]){
//            AB.push_back(A[i]);
//        }
//        for( ; cursorB < sizeof(B)/4 ; cursorB++){
//            if(A[i+1] > B[cursorB])
//                AB.push_back(B[cursorB]);
//            else{
//                break;
//            }
//        }
//    }
//    for(int i = 0 ; i < AB.size() ; i++){
//        printf("%d ",AB[i]);
//    }
//
//    std::cout<<std::endl;
//}
