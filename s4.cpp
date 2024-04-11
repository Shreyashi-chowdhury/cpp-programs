#include <iostream>  
using namespace std; 

class a{
   int ag;
   int sum;
   public:
   int i;
      a(int no){
         i=no;
         cout<<"con created"<<i<<"\n"; //creating
      }
      ~a(){
         cout<<"con destroyed"<<i<<"\n"; //destroying
      }
};

int main(){
   a obj(1);
   {
      a obj1(2);
      a ob2(3);            //{}-> means this part of code in main is particular
   }
   return 0;
}




