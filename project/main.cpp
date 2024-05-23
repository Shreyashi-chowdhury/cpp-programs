#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
#include"helper.h"
using namespace std;

void split(string s){
    
}

 void read(){
    ifstream read;
    string s;
    string s1="";
    read.open("data.txt");
    while(read.eof()==0){
        getline(read,s);
        s1=s1+s+",";
    }
    read.close();
    
    vector<string>v;
    string s2="";
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=','){
            s2=s2+s1[i];
        }else{
            v.push_back(s2);
            s2="";
        }
    }
    // vector<string>::iterator i;
    // for(i=v.begin();i!=v.end();i++){
    //     cout<<(*i);
     vector<string>name;
     vector<string>amount;
     string s3="";
        for(int i=0;i<v.size();i++){
            string a=v[i];
            a=a+":";
            int c=1;
            for(int i=0;i<a.size();i++){
                if(a[i]!=':'){
                    s3=s3+a[i];
                }else{
                    if(c==1){
                        name.push_back(s3);
                        s3="";
                        c=0;
                    }else{
                        amount.push_back(s3);
                        s3="";
                    }
                }
            }
        }
        
        for(int i=0;i<name.size();i++){
            cout<<name[i]<<" ==== "<<amount[i]<<"\n";
        }

        string n;

    }



int main(){
    // read();
    // int a;
    // cin>>a;
    // string x=itos(a);
    // cout<<x;
    string a;
    cin>>a;
    int x=strtoi(a);
    cout<<x;
}
    
 