#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main(){
    map<string, string> mp;
    string temp1;
    string temp2;
    int cursor = 0;
    while(cursor != 4){
        cout<<"1. 단어추가 2. 단어검색 3.단어삭제 4.종료"<<endl<<"=> ";
        cin>>cursor;
        if(cursor == 1){
            cout<<"단어입력: ";
            cin.get();
            getline(cin,temp1);
            cout<<"뜻 입력: ";
            getline(cin,temp2);
            mp[temp1] = temp2;
        }
        else if(cursor == 2){
            cout<<"검색할 단어: ";
            cin.get();
            getline(cin, temp1);
            if(!mp[temp1].empty()){
                cout<<"뜻: "<<mp[temp1]<<endl;
            }
            else{
                cout<<"검색할 단어가 사전에 없습니다. "<<endl;
            }
        }
        else if(cursor == 3){
            cout<<"삭제할 단어: ";
            cin.get();
            getline(cin, temp1);
            if(!mp[temp1].empty()){
                mp.erase(temp1);
            }
            else{
                cout<<"삭제할 단어가 사전에 없습니다. "<<endl;
            }
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
