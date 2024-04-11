#include<iostream> //constructor using object
using namespace std;
class a{
    int ag;
    int sum;
    public:
    a(int age){
        ag=age;
    }
    void display(a ob1,a ob2){
        sum=ob1.ag+ob2.ag;
        cout<<sum;
    }
};
int main(){
    a ob1(10);
    a ob2(12);
    ob2.display(ob1,ob2);

    return 0;

}    