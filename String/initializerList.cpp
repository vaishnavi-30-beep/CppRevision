#include <iostream>

using namespace std;

class A {

    const int i;

    public : 
        A(const int x) : i(x) {
            cout << i << endl;
        }
};
int main() {

    A obj(10);

    return 0;
}