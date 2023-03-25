#include <string>
#include <string.h>
using namespace std;
   struct Lessee {

   string Name [10];
   string Natio_ID [10] ;
   int payment_acc [ 10] ;
   };
   Lessee lessee ;

struct Cars {

    string mark [10] = {"Hyundai","BMW","Mercedes","Audi","Tesla","Skoda","Volkswagun","Toyota","Ford"};

    string model [10]= {"2016MD","2018AS","2018DS","2017LA","2018OW","2005Ps","2008PW","2010QW","2016SA"};

    string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};

    string maxs_peed [10]={"100 Km/h ","150 Km/h","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h"};

    int price [ 10 ] ={100,200,300,500,200,250,400,600,900} ;

    int date [10] = {2010,2012,2013,2017,2018,2005,2008,2010,2014};



   };
   Cars car ;
class CVechile
{
protected:             //protected data members for the Inheritance class
    int Car_Number;
    string car_type;
    float car_price;
    bool rented;
    string return_time;
    string rentled_name;


public:
    void setNum(int num);
    int getNum();
    void setCName(string xname);
    string getCName();
    void setPrice(float price);
    float getPrice();
    void Rent(bool x,string time);
    void setName(string name);
    string getName();
   void Add_Car_details();
    void Get_Car_details();
    CVechile();                       //Constructor and destructor
    ~CVechile();
};

class CBus : public CVechile {
private:
    int number_passengers_of_bus;
    string name_of_driver;
public:
    void setPass(int num);
    int getPass();
    void setDName(string name);
    string getDName();
};
