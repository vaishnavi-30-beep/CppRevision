#include <iostream>
using namespace std;

class Ambani
{

public:
    virtual void JIO()
    {

        cout << "Jio" << endl;
    }
    virtual void Reliance()
    {

        cout << "Reliance" << endl;
    }
};
class Anant : public Ambani
{
public:
    virtual void JIO()
    {

        cout << "JioMart" << endl;
    }
};
class Akash : public Ambani
{

public:
    virtual void Reliance()
    {
        cout << "Reliance Digital" << endl;
    }
};
int main()
{

    Ambani *obj1 = new Anant();
    obj1->JIO();

    Ambani *obj2 = new Akash();
    obj2->Reliance();

    // ********Before adding virtual*********************
    // size of class is equal to sum of size of all variables
    // if it don't have any variable it will give 1 byte.

    //********After adding virtual***********
    // size of classes having no variables : 8 bytes
    cout << sizeof(Ambani) << endl;
    cout << sizeof(Anant) << endl;

    cout << sizeof(Akash) << endl;

    return 0;
}