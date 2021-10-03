#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void printrev(string str, int idx){
    if(idx==0){
        cout<<str.at(idx);
        return;
    }
    cout<<str.at(idx);
    printrev(str,idx-1);
}
int main(){
    string str;
    cin>>str;
    printrev(str,str.length()-1);
}
