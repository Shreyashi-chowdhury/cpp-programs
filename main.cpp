#include <iostream>
using namespace std;
class shape{
    public:         //must right to access publicly
        int l,b,h; //data member/member variable
        void square(int len){             //member functions
            l=len;
            cout<<l*l;
        }
      
        void rectangle(int len,int bre){
            l=len;
            b=bre;
            cout<<l*b; 
            }
          
        void triangle(int hei,int bre){
            b=bre;
            h=hei;
            int a=0.5*b*h;
            cout<<a;
        }    
        
    };

    int main(){
        shape area; //class object; area>>object..calling funtion of class
        area.square(4);
        area.rectangle(2,3);
        area.triangle(4,8);
        return 0;
    }



