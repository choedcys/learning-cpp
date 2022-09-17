#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Dict{
public:
    string eng;
    string kor;
};

int main(){
    vector<Dict> v;
    Dict T;
    string temp1;
    string temp2;
    int cursor = 0;
    vector<Dict>::iterator it;
    while(cursor != 4){
        cout<<"1. 단어추가 2. 단어검색 3.단어삭제 4.종료"<<endl<<"=> ";
        cin>>cursor;
        if(cursor == 1){
            cout<<"단어입력: ";
            cin.get();
            getline(cin,temp1);
            cout<<"뜻 입력: ";
            getline(cin,temp2);
            T.eng = temp1;
            T.kor = temp2;
            v.push_back(T);
        }
        else if(cursor == 2){
            cout<<"검색할 단어: ";
            cin.get();
            getline(cin, temp1);
            it = v.begin();
            for( ; it < v.end() ; it++){
                if(temp1 == it->eng){
                    cout<<"뜻: "<<it->kor<<endl;
                    break;
                }
            }
            if(it == v.end())
                cout<<"검색된 단어가 없음"<<endl;
        }
        else if(cursor == 3){
            cout<<"삭제할 단어: ";
            cin.get();
            getline(cin, temp1);
            it = v.begin();
            for( ; it < v.end() ; it++){
                if(temp1 == it->eng){
                    v.erase(it);
                    break;
                }
            }
            if(it == v.end())
                cout<<"검색된 단어가 없음"<<endl;
        }
        else if(cursor == 4){
            break;
        }
        else{
            cout<<"잘못된 입력! "<<endl;
        }
    }
    return 0;
}
