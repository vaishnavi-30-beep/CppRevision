//  When an exception is thrown, all objects created inside the enclosing try block 
// are destroyed before the control is transferred to the catch block.
// We can throw exception from constructor also
#include<iostream>

class Demo {

    public :
        Demo() {
            std :: cout << "In constructor" << std :: endl;
        }
        ~Demo(){
            std :: cout << "In destructor" << std :: endl;
        }
};
int main() {

    try {
        Demo obj;
        throw obj;
    }
    catch (Demo &obj){
        
    }
    return 0;
}
