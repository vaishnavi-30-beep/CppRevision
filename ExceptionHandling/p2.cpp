// implicit conversion of thrown exception do not occur.
// if char exception is thrown it will not type cast in int
// catch(...) block must be written at the end after all catch blocks
// otherwise it will give error

#include <iostream>

int main() {

    char x = 'A';
    try {
        std :: cout << "before exception" << std :: endl;
        if (x == 'A')
            throw x;
    }
    catch (int exception){
        std :: cout << "Int Exception handled" << std :: endl;
    }
    catch (...){
        std :: cout << "Default exception handled" << std :: endl;
    }
    std :: cout << "After exception" << std :: endl;
}