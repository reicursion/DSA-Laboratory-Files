#include <iostream>
#include <string>

using namespace std;

// Abstract
class Person {
protected:
    string name;
    int age;
public:
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age = age;
    }
};


//Concrete class
class Doctor : public Person {
public:
    void setName(string name){
        this->name = name + " Phd.";
    }
};

int main(){
  Person *p = new Person();
  p->setName("Alice");
  p->setAge(18);
  
  cout << p->getName() << " :: " << p->getAge() << endl;
  
  Doctor *d = new Doctor();
  d->setName("Bob");
  d->setAge(42);
  
  cout << d->getName() << " :: " << d->getAge() << endl;
  
  Person *p2 = d;
  
  cout << p2->getName() << " :: " << p2->getAge() << endl;
  
  
};