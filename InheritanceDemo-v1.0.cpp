/*************************************************************************
*
*      program name:       Inheritance-Demo
*      Author:             Grant Fisher
*      date due:           04/7/14
*      remarks:            Demonstrates the concepts of inheritance
*                          by restricting and allowing access to info.
*************************************************************************/

/******************************************
*     library includes
******************************************/
#include <iostream>                // needed for I/O
#include <cstdlib>
/******************************************
*     pre-processor
******************************************/
#define PI 3.14159
using namespace std;

///////////////////////////////////////////////////////////////////////////////////
//  LIST OF CLASSES IN ORDER FROM BASE TO MOST DERIVED
///////////////////////////////////////////////////////////////////////////////////

///Class(Base) for any vehicle
///All objects will fall under this class definition
class RoadVehicle
{
    private:
      int wheels;
      int passengers;
    public:
      void set_wheels(int num) { wheels = num; }
      int  get_wheels()        { return wheels; }
      void set_pass(int num)   { passengers = num; }
      int  get_pass()          { return passengers; }
      void show();
};

///Class for trucks
///Will inherit from RoadVehicle Class
class Truck : public RoadVehicle
{
    private:
      int cargo;
    public:
      void set_cargo(int size) { cargo = size; }
      int get_cargo()          { return cargo; }
      void show();
};

///Class for Motorcycles
///Separate from trucks and Automobiles but will also inherit from RoadVehicle Class
enum Mtype {sport, cruiser, dirt};
class Motorcycle : public RoadVehicle
{
    private:
        enum Mtype moto_type;
    public:
        void set_type(Mtype t)   {moto_type = t; }
        enum Mtype get_type()   {return moto_type;}
        void show();
};

///Class for Automobiles
///Separate from Trucks and Motorcycles but will inherit from RoadVehicle
enum Ctype {car, van, wagon};
class Automobile : virtual public RoadVehicle
{
    private:
      enum Ctype car_type;
    public:
      void set_type(Ctype t) { car_type = t; }
      enum Ctype get_type()  { return car_type; }
      void show();
};

///Class for Gas Cars
///Derived from Automobile (Which is in turn, derived from RoadVehicle and nothing else)
class GasCar : virtual public Automobile
{
    private:
        int tankArea;
        int mpg;
    public:
        void set_tank(int x)    {tankArea = x;}
        void set_mpg(int x)     {mpg = x;}

        int get_tank()          {return tankArea;}
        int get_mpg()           {return mpg;}
        void show();
};

///Class for Electric Cars
///Derived from Automobile (Which is in turn, derived from RoadVehicle and nothing else)
class ElectricCar : virtual public Automobile
{
    private:
        int batteryCharge;
        int mpc;
    public:
        void set_battery(int x) {batteryCharge = x;}
        void set_mpc(int x)     {mpc = x;}

        int get_battery()       {return batteryCharge;}
        int get_mpc()           {return mpc;}
        void show();
};

///Class for Hybrids(Both electric and Gas powered)
///Derived from Electric and Gas class(Which is further derived from Automobile/RoadVehicle)
class Hybrid : public ElectricCar, public GasCar
{
    private:
    public:
        void show();
};

////////////////////////////////////////////////////////////////////////////
//      MEMBER FUNCTIONS
////////////////////////////////////////////////////////////////////////////
void RoadVehicle::show()
{
    cout << "wheels:                    " << get_wheels() << "\n";
    cout << "passengers:                " << get_pass() << "\n";
}

void Truck::show()
{
     RoadVehicle::show();
     cout << "cargo capacity (ft^2):    " << cargo << "\n";
}

void Motorcycle::show()
{
    RoadVehicle::show();
    cout << "type: ";
    switch(get_type())
     {
        case sport: cout << "                     sport\n";
                  break;
        case cruiser: cout << "                   cruiser\n";
                  break;
        case dirt: cout << "                      dirt\n";
     }
}

void Automobile::show()
{
     RoadVehicle::show();
     cout << "type: ";
     switch(get_type())
     {
        case van: cout << "                     van\n";
                  break;
        case car: cout << "                     car\n";
                  break;
        case wagon: cout << "                   wagon\n";
     }
}

void GasCar::show()
{
    Automobile::show();
    cout << "Gas Tank Volume:           " << get_tank() << "\n";
    cout << "Miles per Gallon           " << get_mpg() << "\n";
}

void ElectricCar::show()
{
    Automobile::show();
    cout << "Battery Charge time:       " << get_battery() << "\n";
    cout << "Miles per Battery Charge:  " << get_mpc() << "\n";
}

void Hybrid::show()
{
    cout << "****** hybrid car  ******\n";
    Automobile::show();
    cout << "Battery Charge time:       " << get_battery() << "\n";
    cout << "Miles per Battery Charge:  " << get_mpc() << "\n";
    cout << "Gas Tank Volume:           " << get_tank() << "\n";
    cout << "Miles per Gallon           " << get_mpg() << "\n";
}

/////////////////////////////////////////////////////////////////
//      PROTOTYPES FOR TEST FUNCTIONS:
/////////////////////////////////////////////////////////////////
void testRoadVehicle();
void testTruck();
void testMotorcycle();
void testAutomobile();
void testGasCar();
void testElectricCar();
void testHybrid();

/////////////////////////////////////////////////////////////////
//      MAIN:
/////////////////////////////////////////////////////////////////
int main()
{
    ///Tests each class by making an object for each class
    testRoadVehicle();
    testTruck();
    testMotorcycle();
    testAutomobile();
    testGasCar();
    testElectricCar();
    testHybrid();
    system("pause");
    return 0;
}

//////////////////////////////////////////////////////////////////
//      TEST FUNCTIONS:
//////////////////////////////////////////////////////////////////
void testRoadVehicle()
{
    cout << "\nStart test for RoadVehicle Class:\n";
    RoadVehicle testR;
    testR.set_wheels(4);
    testR.set_pass(5);
    testR.show();
    cout << "End of test for RoadVehicle Class\n";
}

void testTruck()
{
    cout << "\nStart test for Truck Class:\n";
    Truck testT;
    testT.set_cargo(10);
    testT.set_wheels(4);
    testT.set_pass(3);
    testT.show();
    cout << "End of test for Truck Class\n";
}

void testMotorcycle()
{
    cout << "\nStart test for Motorcycle Class:\n";
    Motorcycle testM;
    testM.set_type(sport);
    testM.set_wheels(2);
    testM.set_pass(2);
    testM.show();
    cout << "End of test for Motorcycle CLass\n";
}

void testAutomobile()
{
    cout << "\nStart test for Automobile Class:\n";
    Automobile testA;
    testA.set_type(wagon);
    testA.set_wheels(5);
    testA.set_pass(5);
    testA.show();
    cout << "End of test for Automobile Class\n";
}
void testGasCar()
{
    cout << "\nStart test for GasCar Class:\n";
    GasCar testG;
    testG.set_tank(14);
    testG.set_mpg(22);
    testG.set_wheels(4);
    testG.set_pass(5);
    testG.set_type(car);
    testG.show();
    cout << "End of test for GasCar Class\n";
}

void testElectricCar()
{
    cout << "\nStart test for ElectricCar Class:\n";
    ElectricCar testE;
    testE.set_wheels(4);
    testE.set_pass(5);
    testE.set_type(van);
    testE.set_battery(20);
    testE.set_mpc(80);
    testE.show();
    cout << "End of test for ElectricCar Class\n";
}


void testHybrid()
{
    cout << "\nStart test for Hybrid Class:\n";
    Hybrid testHyb;
    testHyb.set_wheels(4);
    testHyb.set_pass(5);
    testHyb.set_type(car);
    testHyb.set_battery(20);
    testHyb.set_mpc(100);
    testHyb.set_tank(7);
    testHyb.set_mpg(35);
    testHyb.show();
    cout << "End of test for Hybrid Class\n";
}
