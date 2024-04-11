#include<iostream> //constructor [parameterized]
using namespace std;
class a{
    int ag;
    public:
    a(int age){
        ag=age;
    }
    void display(){
        cout<<ag;
    }
};
int main(){
    a obj(10);
    obj.display();
    return 0;
}