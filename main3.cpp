#include<iostream>
using namespace std;
class a{
    public:
        static int b;
        void print(){
           cout<<b;
        }
        
};
int a::b=8;
int main(){
   a ob;
   ob.print();
   return 0;
}