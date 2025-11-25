// given a class rectangle with a atributes length and width write a method to calculate the area aand perimeter of the rectangle also demonstrate the use of these methods in a sample program
#include <iostream>
using namespace std;
class Rectangle {
protected:
    int length;
    int width;
public:
    Rectangle(int l, int w) : length(l), width(w) {}

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
    
    
    //in the above qques create a cuboid class which is the derived class of rectangle the cuboid class should have only 1 memeber variable i.e height 
    //also write a fxn to find the vol. of a cuboid. note that bcuz of inheritance lenghth and breadth is already available to cuboid class .
    //what are the changes need to be done in the rectangle class for this new task
};

class cuboid : public Rectangle{

    int height;
public:

    //constructor 
    cuboid(int l, int b  , int h ):Rectangle(l,b),height(h) {}
    int volume(){
        return length * width * height;
    }
};
// point to be noted here is that the length and width attributes in the rectangle class have been
// changed from private to protected access specifier so that they can be accessed
// in the derived class cuboid. Other than that no changes are needed in the rectangle class for this new task.

int main() {
    Rectangle rect(10, 5);

    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    cuboid cub(10,20,10);

    cout<<"cuboid volume: " << cub.volume()<<endl;
    
    return 0;
}
//the abobve creates ambivity bcuz the child class now has 2 copies of the grand parent class bcux of which their will be 
//2 copies of data members and the methods in the child class.in cpp this will cause compilation error .