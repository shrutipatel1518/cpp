/*write a cpp program to demonstrate dynamic polymorphism and dynamic dispatch.
*/
#include <iostream>
using namespace std;

class appliance{
    public:
  //  virtual void start()//virtual likhne se neeche sbko pta chl jta h ki kya compulsory h //app iska direct ~use nhi kroge
    appliance()
    {
        cout<<"generic  appliance contructed"<<endl;
    }
    ~appliance()
    {
        cout<<"generic  appliance destructed"<<endl;
    }

};

class toaster{
    public:
    toaster()
    {
        cout<<"toaster cell contructed\n";
    }
    ~toaster()
    {
        cout<<"toaster cell destructed\n";
    }
};

class oven{
    public:
    oven()
    {
        cout<<"oven cell contructed\n";
    }
    ~oven()
    {
        cout<<"oven cell destructed\n";
    }
};

int main() {
    appliance obj;
    oven objj;
    toaster opp;

    //appliance *obj = new toaster;
    // appliance *o = new oven;
    

return 0;
}
/*
//in cpp there is a table of pointer call 'v' table this table is present in every generation of class to implement dynamic polymorphism. 
each table for each class contains the pointers to the relevant fxn which should be called during dynamic dispatch.*/