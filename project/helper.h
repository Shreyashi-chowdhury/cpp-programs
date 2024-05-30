#include<iostream>
#include<string>
#include<sstream>
using namespace std;
string itos(int n){
    string s="";
    while(n>0){
        int r;
        r=n%10;
        char ch='0'+r;
        s=ch+s;
        n=n/10;
    }
    return s;
}

int strtoi(string d){
    int str;
    stringstream ss;
    ss<<d;
    ss>>str;
    return str;

}