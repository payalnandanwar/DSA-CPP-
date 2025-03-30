#include<iostream>
using namespace std;

class Count {
    private:
        int value;
    public:
        Count() { value = 0; }
        
       
        void operator++() {
            value++;
        }

     
        void display() {
            cout << "Count: " << value << endl;
        }
};

int main() {
    Count c;
    ++c;        
    c.display(); 
    return 0;
}