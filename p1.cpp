#include<iostream>

class Demo {

    public :
        Demo(){
            std::cout << "In constructor" << std::endl;
        }
        
        ~Demo(){
            std::cout << "In destructor" << std::endl;
        }
};
int main() {

    //Demo()
    ~Demo();
    return 0;

}