#include <iostream>
#include "mystring.h"
#include <string.h>

class MyStringImplementation : public MyString {

    public :

        /*
            Creating empty string
        */
        MyStringImplementation(){
         
          str = NULL;
          length = 0;
          capacity = 0;
        }
        /*
            Parameterized constructor
        */
        MyStringImplementation(const char *ptr){

           
            if(str != NULL)
                delete str;
            capacity = 10;
            if(strlen(ptr) > capacity) {

                str = new char[strlen(ptr)]; 
                capacity = strlen(ptr);
            } 
            else
                str = new char[capacity];
            length = (strlen(ptr));
            memcpy(str, ptr, length);
    
        }
        /*
            Copy constructor
        */
         MyStringImplementation(const MyStringImplementation& ref){

            length = ref.length;
            str = new char[length];
            memcpy(str, ref.str, ref.length);
            
        }
        /*
            destructor
        */
        ~MyStringImplementation(){
            
            delete[] str;
        }

        /*
            operator << overloading
        */
        friend std::ostream &operator<<(std::ostream &out, MyStringImplementation &ref){
                
            out << ref.str << std::endl;
            return out;
        }
        
        void setStr(char *abc){
            str = abc;
        }
        /*
            Appending character at the end of string
        */
        void m_push_back(char chr) {

            str[length] = chr;
            length++;
        }
        /*
            Removing last character from the string
        */
        char* m_pop_back(){

            str[length-1] = '\0';
            return str;
        }
        /*
            Swapping two strings
        */
        void my_swap(MyString &str2) {

            char *temp = str;
            setStr(str2.getStr());
            str2.setStr(temp);

        }
        /*
            Printing string
        */
        void printStr(){
            std :: cout << str << std :: endl;
            
        }
        /*
            Finding length of string
        */
        int mystrlen(){
            
            return strlen(str);
            

        }
        /*
            Concating two strings
        */
        char* mystrcat(MyStringImplementation& str1){

            char *concatStr = new char[length + str1.length];
            memcpy(concatStr, str, length);
            memcpy(concatStr+length, str1.str, str1.length);
            return concatStr;
            
        }
        /*
            Copying string
        */
        void mystrcpy (MyStringImplementation& str2){
            
            memcpy(str, str2.str, str2.length);
        }
        /*
            Finding index of character given by user
        */
        int mystrchr (char ch){

            char *ptr = str;
            int i = 0;
            while(*ptr != '\0'){
                if (*ptr == ch)
                    return i;
                i++;
                ptr++;
            }
            return -1;
        }
        /*
            Overloading = operator
        */
        MyStringImplementation& operator=(MyStringImplementation &ref2){
           
            if(str != NULL)
                delete str;
            str = new char[ref2.length];
            memcpy(str, ref2.str, ref2.length);
            length = ref2.length;
            return *this;
        }
         /*
            Overloading = operator
        */
        MyStringImplementation& operator=(const char *ptr){
        
            if(str != NULL)
                delete str;
            str = new char[strlen(ptr)];
            length = strlen(ptr);
            memcpy(str, ptr, strlen(ptr));
            return *this;
            
        }
};

 int main(){

    
     MyStringImplementation *s1 = new  MyStringImplementation("vaishnavi");
	 MyStringImplementation *s2 = new MyStringImplementation(*s1); 
	 MyStringImplementation *s3 = s1; 
     MyStringImplementation s4;
     s4 = *s1;
     MyStringImplementation s5;
     s5 = "shivani";

     s1->printStr();
     s2->printStr();
     s3->printStr();
     std :: cout << s4;
     std :: cout << s5;
    return 0;
} 
// int main(){

//     /*
//         Passing string only - default capacity used
//     */
//     MyStringImplementation *obj4 = new MyStringImplementation("Vaishnavi");
//     /*
//         Passing string as well as taking capacity from user
//     */
//     MyStringImplementation *obj1 = new MyStringImplementation("Riya");
//     MyStringImplementation *obj2 = new MyStringImplementation("Neha");
//     /*
//         Calling copy constructor : Copying object
//     */
//     MyStringImplementation *obj3 = new MyStringImplementation(*obj1);
    
//     std::cout << "**************Original strings*****************" << std :: endl;
//     std :: cout << "String 1 : " << obj1->getStr() << std :: endl << " String 2 : " << obj2->getStr() << std :: endl<< " String 3 : "  << obj3->getStr() << std :: endl;
//     std :: cout << std :: endl;

//     std::cout << "**************Length Of Strings*****************" << std :: endl;
//     std::cout << "length of string1 : " << obj1->mystrlen() << std::endl;
//     std::cout << "length of string2 : " << obj2->mystrlen() << std::endl;
//     std :: cout << std :: endl;

   
//     std::cout << "**************Concating strings*****************" << std :: endl;
//     char *concatedStr = obj1->mystrcat(*obj1,*obj2);
//     std :: cout << "Concated string : " << concatedStr << std :: endl;
//     std :: cout << std :: endl;
    
//     std::cout << "**************Finding index of character*****************" << std :: endl;
//     std :: cout << "INDEX OF 'i' :" << obj1->mystrchr('i') << std :: endl;
//     std :: cout << std :: endl;

//     std::cout << "**************Adding character in the end*****************" << std :: endl;

//     obj1->m_push_back('j');
//     obj1->printStr();
//     std :: cout << std :: endl;

//     std::cout << "**************Removing character from the end*****************" << std :: endl;

//     obj1->m_pop_back();
//     obj1->printStr();
//     std :: cout << std :: endl;

//     std::cout << "**************Swaping strings*****************" << std :: endl;
//     obj1->my_swap(*obj2);
//     std :: cout << "String 1 : " << obj1->getStr() << " String 2 : " << obj2->getStr() << std :: endl;
//     std :: cout << std :: endl;

//     std::cout << "**************Copying strings*****************" << std :: endl;
//     obj1->mystrcpy(*obj1, *obj2);
//     std :: cout << "String 1 : " << obj1->getStr() << " String 2 : " << obj2->getStr() << std :: endl;
//     std :: cout << std :: endl;

//     // std :: cout <<"*******reverse*******" <<  obj1->mystrrev() << std :: endl;
 
//     return 0;
// }
