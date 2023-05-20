#include <iostream>
#include <string>

using namespace std;

class PersonAbstract {
protected:
    string name;    
public:
    void setName(string name);
    string getName();
};


class PersonConcrete : public PersonAbstract {
public:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
    
};

int main(){
    PersonConcrete p;
    p.setName("Alice");
    
    
    cout << p.getName() << endl;
    
    // PersonAbstract *p2 = new PersonConcrete();
    // p2->setName("Bob");
    
    // cout << p2->getName() << endl;
    
}