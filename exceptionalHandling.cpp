#include <iostream>
using namespace std;
    
/*
exception are unpredictable error that can occur either due to invalid user iinput or some inherent logical error hidden inside the code. The crashing of the code due to these errors may give unexpected outputs and complicated error statements . a good developer must handle these exception gracefully it is called exceptional handling.
c++ implements excetional handling using three keywords (try catch throw)
try is a scoped block which shoukd enclose the line of code which may generate exception 
catch is also a scoped block that accepts an argument this part is used to display meaningfull messages once an error is caught 

*/
int main() {
   try
   {
    int x;
    if (x==1)
    {
        throw -1;    
    }
    else if (x==2)
    {
        throw 'a';
    }
    else if (x==3)
    {
        throw 2.5;
    }
   }
   catch(int & e)
   {
    cout << "int error" << '\n';
   }
   catch(char & e)
   {
    cout << "char error" << '\n';
   }
   catch(double & e)
   {
    cout << "double error" << '\n';
   }
   
      catch (){
        cout<<"unknown error";
      }
return 0;
}

//when we can handle errors using if else statement why should we use try catch .