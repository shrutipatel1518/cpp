
// abstraction define

/*abstraction is the mechanism of oop using which the complex implementation and the data is hidden
 & only the required behavior is exposed . for ex. in a television the change of volume , brightness ,contrast
  etc is done either using a remote or the button panel on the t.v. In cpp abstraction is implemented using following 2 methods 
1) data encapsulation :- using excess modifier  like pvt & protected enable us to hide the imp data & some behaviour of a class. Public modifier help us to show only the erquired behavior.
2) abstract classes :- we can make a class as abstract so that their r some implemem=ntation complete and some r left to be implemented later.


//abstraction using abstract class 

assume that their is a class known as basic calculator   it can only perform add & subst due to some reason mul /& divion could not be 
implemented but their is aa future scope of their implementation

*/
// #include <iostream>
// using namespace std;

// class basic_calc{
//     public:
//     virtual double add(double a, double b){
//         return a+b;
//     }
//     virtual double sub(double a, double b){
//         return a-b;
//     }
//     virtual double mul(double a, double b){
//         return 0;
//     }
//     virtual double div(double a, double b){
//         return 0;
//     }
// };
// int main() {
//     basic_calc *b;

// return 0;
// }

/* 
to make an abstraction class their should be 1 pure virtual fxn in it
we can't create an obj of an abstraction class, but we can create pointer to an obj class

an abstract class is in a way hidden bcuz it cant be instantiated we can oly use the feature of an abstract class if we inherit it using another class

*/

#include <iostream>
using namespace std;

class basic_calc{
    public:
    virtual double add(double a, double b){
        return a+b;
    }
    virtual double sub(double a, double b){
        return a-b;
    }
    virtual double mul(double a, double b){
        return 0;
    }
    virtual double div(double a, double b){
        return 0;
    }
};

class calc{
    public:
    virtual double multiply (double a, double b){
        return a * b;
    }
};
int main() {
    calc b;
    basic_calc *ptr = new calc;
    cout<<ptr-> add(5,7);
    cout<<ptr-> div(6.02,3.14);
return 0;
}

/*
a child class that inherit a child class but doesn't implement all  the pure virtual fxn of the abstract class will also be considered as abstract

what is interface
the class that has al the fxn of pure & virtual & their r no implemented fxn this type of class is known as interface class 

the use of interface can be thought of like an universal remote control. a  universal remote can control any appliance it is pointed towards the remote doest know whether it is controlling a tv or an AC
if the basic calc class has all the 4 fxn i.e add, mul,sub,div as pure virtual fxn it cAN BE called as an interface shouldnt have any data member 
question : - d/b  abstract and interface class
*/