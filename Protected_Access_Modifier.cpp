#include <iostream>
using namespace std;

class Parent {
protected:
    int protectedVar;  

public:
    void setValue(int value) {
        protectedVar = value;
    }
};

class Child : public Parent {
public:
    void showValue() {
        cout << "Value of protectedVar: " << protectedVar << endl;
    }
};

int main() {
    Child obj;
    obj.setValue(10);  
    obj.showValue();   

  
    return 0;
}
