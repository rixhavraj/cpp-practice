#include <iostream>
using namespace std;

class TVRemote{
    public:
    virtual void turnOn()=0;
    virtual void turnOff() = 0;

    virtual ~TVRemote(){}
};

class SonyRemote:public TVRemote{
    public:
    void turnOn() override{
        cout<<"Sony Tv..\n";
        cout<<"sont 2\n";
        cout<<"sony 3\n";
    }

    void turnOff() override{
        cout<<"sony \n";
        cout<<"sony2\n";
    }
};

int main(){
    TVRemote * myRemote = new SonyRemote();
    myRemote->turnOn();
    delete myRemote;
    return 0;
}