//in the above qques create a cuboid class which is the derived class of rectangle the cuboid class should have only 1 memeber variable i.e height 
//also write a fxn to find the vol. of a cuboid. note that bcuz of inheritance lenghth and breadth is already available to cuboid class .
//what are the changes need to be done in the rectangle class for this new task

#include <iostream>
using namespace std;
int main() {
    
return 0;
}

// //how to resolve the ambiquity that occurs in hybrid inheritance ?
// //whenever a clas inherits froom two or more than two classes it gets the behaviour of all 
// those classes ,also it gets the behavior of the parent of its parents classes duee to this
//  ,this child class may have multiple copies of the attributes and the behaviors of its grand parent class. 
// while excessing these copies cpp get confused as to which copy from which parents is being called
// this issue can be solved using any 1 of the  following methhods 
// 1) clarrifying the copy using scope resolution operator in front of the variable or the method name 

//             a
//         c       d
 //            b

//in heirachial inheritance the 2 or more cklasses which are inheritant from a single based class should inherit
// virtually this results to create a single copy in the class that inhrits from multiple classes 
/*
    class a{
        private:
        int x;
        protected:
        int y;
        public:
        int z;
    };
    class b:public a{
    // x->not accesible
    // y->protected
    // z->public
    };
    class c:protected a{
    // x->not accesible
    // y->protected
    // z->public
    };
    class d:private a{
    // x->not accesible
    // y->protected
    // z->public
    };

                   a
            /^    ^|    ^\
           b(yz)  c(yz)   d(yz)
          ^|      ^|      |^
          b1(yz)  c1(yz)  d1(nothing)


          table:
          __________________________________
_________|public  | pvt       |    protect  |
  public | pub    | pvt       |    prot     |
  pvt    |X-access|   X-access|X-access     |
  prot   |protect | pvt       | protected   |
____________________________________________

class demo{
public:
int x;
demo(){
n=2;
cout<<"constructed";
}
~demo(){
cout<<"destructor";
}
};

int main(){
demo a;
{
demo b;}
demo *c = new demo;
}

    */

