#include <cstdlib>
typedef struct STRUCT{
    char *List[4];
} Inform;

struct forPrint{
    char menu[4][20] = {"이름","전화번호","구분","주소"};
};


void Input(Inform* temp, char* str, int N, int IndexOfInform);
void Disp(Inform* temp, char *index, int N);
void Change(Inform* temp, char *index, int N);
void Delete(Inform* temp, char *index, int N);
void ShowAll(Inform* temp, int N);
