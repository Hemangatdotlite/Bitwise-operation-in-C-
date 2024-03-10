#include <iostream>
using namespace std;

class and {
    private:
      int val1;
      int val2;
      int fval;
    public:
      and(int a, int b) {
        val1 = a;
        val2 = b;
        fval = val1 & val2;
      }
      void display(){
        cout << "This is the Bitwise AND of 5 and 10: " << fval << endl;

      }
};

class or {
    private:
      int val1;
      int val2;
      int fval;
    public:
      or(int a, int b) {
        val1 = a;
        val2 = b;
        fval = val1 | val2;
      }
      void display(){
        cout << "This is the Bitwise OR of 5 and 10: " << fval << endl;

      }
};

class xor {
    private:
      int val1;
      int val2;
      int fval;
    public:
      xor(int a, int b) {
        val1 = a;
        val2 = b;
        fval = val1 ^ val2;
      }
      void display(){
        cout << "This is the Bitwise XOR of 5 and 10: " << fval << endl;

      }
};

int main() {
     and v1(5,10); { 
       v1.display();
     }
     or v2(5,10); {  
       v2.display();
     }
     xor v3(5,10); { 
       v3.display();
     }
}