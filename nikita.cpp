#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    scanf("%d\n",&T);
    while(T--){
        string buffer;
        getline(cin , buffer);
        stringstream hat(buffer);
        string str , nxt;
        hat>>str;
        while(hat >> nxt){
            cout<<char(toupper(str[0]))<<". ";
            str = nxt;
        }
        for(int j = 0 ; j < str.size() ; j++)
            str[j] = tolower(str[j]);
        str[0] = toupper(str[0]);
        cout<<str<<endl;
    }
}
