#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
#include"helper.h"

using namespace std;

void deposit(vector<string>&name,vector<string>&amount){
    
    string nam;
    int amt;
    cin>>nam;
    cin>>amt;
   
    int pos=-1;
    for(int i=0;i<name.size();i++){
        if(nam==name[i]){
            pos=i;
        }
    }
      string newamt;
     if(pos==-1){
        cout<<"no name present";
     }else{

         newamt = itos(strtoi(amount[pos])+amt);
     }
    amount[pos]=newamt;                          
    string S="";
    for(int i=0;i<name.size()-1;i++){
        S=S+name[i]+":"+amount[i]+"\n";
    }
    cout<<S;
    ofstream write;
    write.open("data.txt");
    write<<S;
    write.close(); 
}

void withdraw(vector<string>&name,vector<string>&amount){
        string nam;
    int amt;
    cin>>nam;
    cin>>amt;
   
    int pos=-1;
    for(int i=0;i<name.size();i++){
        if(nam==name[i]){
            pos=i;
        }
    }
      string newamt;
     if(pos==-1){
        cout<<"no name present";
     }else{
        if(amt<strtoi(amount[pos])){
            newamt = itos(strtoi(amount[pos])-amt);
        }else{
            cout<<"Insufficient Balance!";
        }
         
     }
    amount[pos]=newamt;                          
    string S="";
    for(int i=0;i<name.size()-1;i++){
        S=S+name[i]+":"+amount[i]+"\n";
    }
    cout<<S;
    ofstream write;
    write.open("data.txt");
    write<<S;
    write.close();
}

int main(){
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
    //deposit(name,amount);
    withdraw(name,amount);
  
  
}
