#include <iostream>
using namespace std;

class tv{
    private:
    bool isOn;
    public:
    void control(bool x){
        isOn = x;
    }
    void getstatus(){
        if(isOn ) cout<<"tv is on"<<endl;
        else cout<<"tv is off";
    }
    class remote {
        public:
        void controltv(tv&a,bool x){
        a.control(x);}
    }
};
int main() {
    tv t1;
    remote r1;
    r1.controltv(t1,true);
    t1.getstatus();
    //int value in tv class
return 0;
}

//create a fxn in remote class 