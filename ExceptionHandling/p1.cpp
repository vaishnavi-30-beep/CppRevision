#include <iostream>

int main() {

    int x = -10;
    try {
        std :: cout << "before exception" << std :: endl;
        if (x < 0)
            throw x;
    }
    catch (int exception){
        std :: cout << "Exception handled" << std :: endl;
    }
    std :: cout << "After exception" << std :: endl;
}