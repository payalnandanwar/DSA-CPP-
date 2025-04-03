#include <iostream>
using namespace std;

class Father {
public:
    void advice() { cout << "Father: Study hard!" << endl; }
};

class Mother {
public:
    void advice() { cout << "Mother: Be kind!" << endl; }
};

class Child : public Father, public Mother {
public:
    void askAdvice() {
        Father::advice();  
        Mother::advice();   
    }
};

int main() {
    Child obj;
    obj.askAdvice();  
    return 0;
}