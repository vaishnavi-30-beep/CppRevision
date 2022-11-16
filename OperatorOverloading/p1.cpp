#include <iostream>

class ControlPlane {

    private :
        int noOfEmp;
    public :
        ControlPlane(int noOfEmp){
            this->noOfEmp = noOfEmp;
        }

        void disp() {

        std::cout << "Total Employees : " << noOfEmp << std::endl;
        }
        // for pre increment
        friend void operator++(ControlPlane &ref);
      
        // for post increment
        friend void operator++(ControlPlane &ref, int);
};
void operator++(ControlPlane &ref){
            
        ref.noOfEmp = ref.noOfEmp + 1;
}
void operator++(ControlPlane &ref, int){
            
        ref.noOfEmp = ref.noOfEmp + 1;
}
int main(){

    ControlPlane obj(11);

    obj.disp();

    std::cout<<++obj << std::endl;
    //obj.disp();

    std :: cout<< obj++ << std :: endl;
    //obj.disp();
    return 0;
}