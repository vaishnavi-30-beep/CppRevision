#include <iostream>

/*
    Base class
*/
class MyString{

    protected :
        /*
            Member variables of Mystring class -
                1] str = for storing length of string 
                2] length = for storing length of string
                3] capacity = for expanding capacity of string
        */
        char* str = NULL;
        int length;
        int capacity ;

    public :

        /*
            Default constructor -> for assigning default values of 
                            member functions
                            str = NULL, length = 0, capacity = 0
        */
        MyString(){
           
        }
        /*
            Parameterized constructor-> It will get called when 
                            user creates object by passing string
                            parameter.

        */
        MyString(char *ptr){
           
        }
        /*
            Copy Constructor -> It will get called while copying
                        one object to newly created object.
        */
        MyString(const MyString &ref){

        }

        /*
            Overloading << operator -> to print string
        */
        friend std::ostream& operator<<(std::ostream &out, MyString &ref){
            return out;
        }

        /*
            Overloading = operator -> to assign string
        */
        MyString& operator=(const char *ptr){
            return *this;
        }

        /*
            getter method to use string for derived class
        */
        char* getStr() const{
            if(str == NULL)
                return "String is empty";
            return str;
        }

        /*
            setter method to set string 
        */
        void setStr(char *str){
            this->str = str;
        }

        /*
            m_push_back -> This function will append character
                        in the last index of string.
        */
        virtual void m_push_back(char chr) = 0;

        /*
            m_pop_back -> This function will delete last character
                    from the string.
        */
        virtual char* m_pop_back() = 0;

        /*
            my_swap -> It will swap the passed string with string of 
                    object on which it is called.

        */
        virtual void my_swap(MyString &ref2) = 0;

        /*
            mystrlen -> To find length of string
        */
        virtual int mystrlen() = 0;

        /*
            mystrchr -> to find first index of passed character.
        */
        virtual int mystrchr(char ch) = 0;


};

