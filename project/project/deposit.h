#include<iostream>
#include<fstream>
#include<string>
#include "helper.h"
using namespace std;
void deposit(int amt){
    ifstream read;
    string s;
    string s1="";
    read.open("data.txt");
    while(read.eof()==0){
        getline(read,s);
        s1=s1+s+",";
    }
    read.close();
    string new_balance;
    if(amt>0){
        new_balance+=amt;
        cout<<"Deposited :"<<amt;
        cout<<"New Balance :"<<new_balance;
    }else{
        cout<<"Invalid Deposit!";
    }
        
        

    }
