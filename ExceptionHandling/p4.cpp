//) A derived class exception should be caught before a base class exception
// it will give warning, but in java it will give error if parent's exception is handled 1st
// here base class will handle the exception
// Unlike Java, in C++, all exceptions are unchecked, i.e., the compiler doesn’t check whether 
// an exception is caught or not
#include<iostream>
class A{

};
class B : public A {

};

int main() {

    B obj;
    try {
        throw obj;
    }
    catch(A obj){
        std::cout << "Base class handling exception" << std::endl; 
    }
    catch(B obj) {
        std::cout << "Derived class handling exception" << std::endl; 
        
    }
}