#include <iostream>

using namespace std;

class Shape {
    protected:
        int width;
        int height;
    Shape(int a = 0, int b = 0){
        this->width = a;
        this->height = b;
    }
    public:
    virtual int area(){
        cout << " Parent Class Area " << endl;
        return 0;
    }
};

class Triangle : public Shape {
    public:
    Triangle(int a = 0, int b = 0) : Shape(a, b){
        
    }
    
    int area(){
        cout << "Triangle class area: " << endl;
        return (width * height) / 2;
    }
};

class Rectangle : public Shape {
    public:
    Rectangle(int a = 0, int b = 0) : Shape(a, b){
        
    }
    
    int area(){
        cout << "Rectangle class area: " << endl;
        return (width * height);
    }
};

int main()
{
    Shape *shape = new Rectangle(10, 7);
    cout << shape->area() << endl;
    shape = new Triangle(10, 5);
    cout << shape->area() << endl;
}