#include <iostream>
using namespace std;

class rectangle {
    int length;
    int breadth;

    //contructor
    public:
    rectangle(int l , int b){
        length = l;
        breadth = b;
    }
    //method to calculate area.
    int area(){
        return length*breadth;
    }
    //method to calculate perimeter.
    int perimeter(){
       return 2*(length+breadth);     
    }
// protected:
//     int length ,breadth;
    
    //
    // rectangle(int l , int b){
    //     this->length = l;
    //     this->breadth = b;
    // }

    //void display(){
    //   cout<<"area:" <<area()<<"rectangle"<<
    //}


};

int main() {
    //given a class rectangle with attribute and width , write methods to cal. area and parameters of thee rectangle.
    //also demostrate the use of these methods in a sample program.

    rectangle rec(10,20);
    cout<<"area:" << rec.area()<<endl;
    cout<<"perimeter:" << rec.perimeter()<<endl;

return 0;
}