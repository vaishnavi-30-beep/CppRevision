#include <iostream>

void fun(char *ptr){
    std::cout << ptr << std::endl;

}
int main(){

    char *ptr = "vaih";
    fun("vaish");
}