// nested try catch block

#include <iostream>

int main() {

    int x = 10;

    try{

        try {
            throw x;
        }
        catch(int x) {
            std :: cout << "throwing exception in catch block" << std :: endl;
            throw;
        }
    }
    catch (int x) {
        std :: cout << "exception handled in outer catch block" << std :: endl;
    }
}