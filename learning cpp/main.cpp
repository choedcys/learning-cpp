#include <iostream>
#include <vector>

void show(int temp[][6], int N){
    for(int col = 0 ; col < N ; col++){
        for(int row = 0 ; row < 6 ; row++){
            std::cout<<temp[col][row]<<" ";
        }
        std::cout<<std::endl;
    }
}
void show(int temp[][3], int N){
    for(int col = 0 ; col < N ; col++){
        for(int row = 0 ; row < 3 ; row++){
            std::cout<<temp[col][row]<<" ";
        }
        std::cout<<std::endl;
    }
}

int rare(int (*temp)[6], int N, int (*rarearr)[3]){
    int num = 0;
    for(int col = 0 ; col < N ; col++){
        for(int row = 0 ; row < 6 ; row++){
            if(temp[col][row] != 0)
                num++;
        }
    }
    num = 0;
    for(int col = 0 ; col < N ; col++){
        for(int row = 0 ; row < 6 ; row++){
            if(temp[col][row] != 0){
                rarearr[num][0] = col;
                rarearr[num][1] = row;
                rarearr[num][2] = temp[col][row];
                num++;
            }
        }
    }
    return num;
}
int Integrated(int (*A)[3], int (*B)[3], int(*Rare)[3], int numA, int numB){
    int IndexOfA = 0, IndexOfB = 0, IndexOfRare = 0, DetOfSum = 0;
    while(IndexOfA != numA && IndexOfB != numB){
        for(int i = 0 ; i < 3 ; i++){
            if(DetOfSum == 2){
                for(int j = 0 ; j < 2 ; j++){
                    Rare[IndexOfRare][j] = B[IndexOfB][j];
                }
                Rare[IndexOfRare][2] = A[IndexOfA][2]+B[IndexOfB][2];
                IndexOfRare++;
                IndexOfA++;
                IndexOfB++;
                DetOfSum = 0;
                break;
            }
            if(A[IndexOfA][i] < B[IndexOfB][i]){
                for(int j = 0 ; j < 3 ; j++){
                    Rare[IndexOfRare][j] = A[IndexOfA][j];
                }
                IndexOfRare++;
                IndexOfA++;
                break;
            }
            else if(A[IndexOfA][i] > B[IndexOfB][i]){
                for(int j = 0 ; j < 3 ; j++){
                    Rare[IndexOfRare][j] = B[IndexOfB][j];
                }
                IndexOfRare++;
                IndexOfB++;
                break;
            }
            else
                DetOfSum++;
        }
        DetOfSum = 0;
    }
    return IndexOfRare;
}
void Convert(int (*Ans)[6], int(*Target)[3], int numRare){
    for(int row = 0 ; row < numRare ; row++){
        for(int col = 0 ; col < 3 ; col++){
            int x, y;
            if(col == 0){
                x = Target[row][col];
            }
            else if(col == 1){
                y = Target[row][col];
            }
            else
                Ans[x][y] = Target[row][col];
        }
    }
}

int main(){
    int A[6][6] = {{0,0,0,7,0,0}, {9,0,0,0,0,8}, {0,0,0,0,0,0}, {6,5,0,0,0,0}, {0,0,0,0,0,1}, {0,0,2,0,0,0}};
    int B[6][6] = {{3,0,0,1,2,0}, {0,8,0,0,5,2}, {2,1,1,0,3,4}, {5,0,0,9,0,0}, {2,1,1,0,0,5}, {6,0,4,0,0,0}};
    int rareA[100][3];
    int rareB[100][3];
    int Rare[200][3];
    int AnswerMatrix[6][6] = {0};
    show(A,6);
    std::cout<<std::endl;
    show(B,6);
    std::cout<<std::endl;

    int numA = rare(A,6, rareA);
    int numB = rare(B,6, rareB);

    std::cout<<"0제거 A"<<std::endl;
    show(rareA,numA);
    std::cout<<"0제거 B"<<std::endl;
    show(rareB,numB);
    int numRare = Integrated(rareA, rareB, Rare, numA, numB);
    std::cout<<"AB통합"<<std::endl;
    show(Rare,numRare);
    Convert(AnswerMatrix, Rare, numRare);
    std::cout<<"답안"<<std::endl;
    show(AnswerMatrix,6);
}





