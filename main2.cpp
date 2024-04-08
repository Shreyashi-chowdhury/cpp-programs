#include <iostream>
using namespace std;
class animal{
    public: 
    int leg;
    void speak(){
        if(leg==2){
            cout<<"speaking";
        }else{
            cout<<"cannot speak";
        }
    }
        void walk(){
            if(leg<2){
                cout<<"cannot walk";
            }else{
                cout<<"can walk";
            }
        }
        void breath_water(){
            if(leg<2){
                cout<<"can breath";

            }else{
                cout<<"cannot breath";
            }
        }
    };
    int main(){
        animal sr;
        sr.leg=2;
        sr.speak();
        sr.walk();
        sr.breath_water();
        cout<<"\n";
        animal fish;
        fish.leg=0;
        fish.speak();
        fish.walk();
        fish.breath_water();
        return 0;
    } 




