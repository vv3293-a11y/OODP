#include<iostream>
using namespace std;
//Base class representing a vehicle's movement capabilities
class Movement{
    public:
        void move(){
            cout<<"Vehicle is moving"<<endl;
        }
};
//Base class representing a vehicle's fuel capabilities
class Fuel{
    public:
        void refillFuel(){
            cout<<"Refilling fuel"<<endl;
        }
};
//Derived class inheriting from both Movement and Fuel
class Car : public Movement, public Fuel{
    public:
        void honk(){
            cout<<"Car is honking"<<endl;
        }
};
int main(){
    Car myCar;
    myCar.move();        // Inherited from Movement
    myCar.refillFuel();  // Inherited from Fuel
    myCar.honk();        // Defined in Car
    return 0;
}