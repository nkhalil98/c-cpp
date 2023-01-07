#include <iostream>
#include <string>

using namespace std;

class Person{

    public: //access specifier
    
        // beginning of constructor
        Person (string name) {
            setName(name);
        }
        // end of constructor

        void setName (string x) {
            name = x;
        }

        string getName () {
            return name;
        }

        void speak() {
            cout << "Hey!" << endl;
        }

    private:
        string name;
};

int main()
{
    Person nabil("Nabil");
    nabil.speak();
    cout << "My name is " << nabil.getName() << endl;
    return 0;
}