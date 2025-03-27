#include <iostream>
using namespace std;

class sum{
    private:
    int a, b, c;

 public:
 void values(int x, int y, int z){
 a =  x;
 b = y;
 c  = z;
 }

 int  calculatesum(){
    return a + b +c;
 }
};

int main(){
    sum obj;

    obj.values(30, 40, 20);
    int result= obj.calculatesum();
    cout<<"sum of the values is "<< result<< endl;

    return 0;
}