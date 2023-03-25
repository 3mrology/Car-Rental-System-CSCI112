#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include "vehicle.h"
#include "customer.h"
using namespace std;
CVechile::CVechile() {
    Car_Number = 0;
    car_type = "\0";
    car_price = NULL;
    rented = 0;
    return_time = "\0";
    rentled_name = "\0";
}
CVechile::~CVechile() {

}

void CVechile::setNum(int num){
    CVechile::Car_Number=num;
}
int CVechile::getNum(){
    cout << CVechile::Car_Number<<"\n";
}
void CVechile::setCName(string xname) {
    CVechile::car_type=xname;
}
string CVechile::getCName(){
    cout << CVechile::car_type<<"\n";
}
void CVechile::setPrice(float price=0) {
    CVechile::car_price = price;
}
float CVechile::getPrice() {
    cout << CVechile::car_price<<"\n";
}
void CVechile::Rent(bool x=0, string time="00.00.00") {
    CVechile::rented = x;
    CVechile::return_time = time;
    cout << "\t" << CVechile::return_time;
}

void CVechile::setName(string name) {
    CVechile::rentled_name = name;
}
string CVechile::getName() {
    return CVechile::rentled_name;
}
void CVechile::Add_Car_details(){
    cout << "Please enter car number\t";
    cin >> CVechile::Car_Number;
    cout << "Please enter rentald name\t";
    cin >> CVechile::car_type;
    cout << "Please enter car price\t";
    cin >> CVechile::car_price;
//    cout << "Please enter car rentald name\t";
//    cin >> CVechile::rentled_name;
};

void CVechile::Get_Car_details() {
    cout<<"Name:\n";
    CVechile::getCName();
    CVechile::getName();
    cout<<"Car number:\n";
    CVechile::getNum();
    cout<<"Car price:\n";
    CVechile::getPrice();
}
void CBus::setPass(int num) {
    CBus::number_passengers_of_bus = num;
}

int CBus::getPass() {
    cout << number_passengers_of_bus << "\n";
}

void CBus::setDName(string name) {
    CBus::name_of_driver = name;
}

string CBus::getDName() {
    cout << CBus::name_of_driver << "\n";
}
void Ccustomer::setCus_ID(int C_ID){
    Cus_ID=C_ID;
}
void Ccustomer::setCus_name(char *C_name){
    strcpy(Cus_name,C_name);
}
void Ccustomer::setCus_Email(char *C_Email){
    strcpy(Cus_Email,C_Email);
}
void Ccustomer::setEmail_password(char *E_password){
    strcpy(Email_password,E_password);
}
int Ccustomer::getCus_ID(){
    return Cus_ID;
}
char *Ccustomer::getCus_name(){
    return Cus_name;
}
char *Ccustomer::getCus_Email(){
    return Cus_Email;
}
char *Ccustomer::getEmail_password(){
    return Email_password;
}
void Ccustomer::Add_Customer_Info(){
   cout << "Please enter customer id\t";
    cin >> Cus_ID;
    cout << "Please enter customer name:\t";
    cin >> Cus_name;
    cout << "Please enter customer email:\t";
    cin >> Cus_Email;
    cout << "Please enter customer password:\t";
    cin >> Email_password;
}
int startup(){
   string word ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t  Car Rental System Login";
   cout << "\n\n\n\n\n\n\n\t\t\t\t\t\tPassword: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      word.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(word == "pass"){
      cout << "\n\n\n\n\t\t\t\t\tWelcome\n\n";
      system("PAUSE");
      system("CLS");

   }else{
      cout << "\n\n\n\n\t\t\t\t\tPlease Try Again!!\n";
      system("PAUSE");
      system("CLS");
      startup();
   }
}
void Ccustomer::Get_Customer_Info(){
cout <<"customer ID:\t"<<getCus_ID()<<endl;
cout <<"customer name:\t"<<getCus_name()<<endl;
cout <<"customer email:\t"<<getCus_Email()<<endl;
cout <<"customer password:"<<getEmail_password()<<endl;
}
 void Minu ()
 {


   int num=1;
 for(int i=0 ;i<9;++i)
 {
 	cout<<"\t\t\t";
    cout<<"Enter " <<num<<"\t- To Select  "<<car.mark[i]<<endl;
    num++ ;
 }

 }
 void info (int select)
  {
   	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.mark[select-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[select-1]<<endl;
     cout<<"\t\t\tColor : "<<car.color[select-1]<<endl;
     cout<<"\t\t\tMaximum Speed : "<<car.maxs_peed[select-1]<<endl;
     cout<<"\t\t\tPrice : "<<car.price[select-1]<<"K"<<endl;


  }
   void check (int j )
  {
      if(lessee.payment_acc[j]  >= car.price[j])
           cout<<"\n\n\n\t\t\tProcess has been done successfully!! " <<endl;
           else
              cout<<"\n\n\n\t\t\tNot Available " <<endl;

  }

int main() {
    //Amr Shaarawy - Youssef Elnaggar - Shady Salem - Philopater Boles - Omar Hazzaa
  system("Color 0A");
    startup();

    string option ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\tCAR RENTAL SYSTEM \n";
     cout<<"\t\t\t Choose: "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(option!="exit")
     {
         Minu();
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int car_wanted ;
     cin>>car_wanted ;
     info(car_wanted);
     cout<<"\n\n\n\t\t\tAre You Sure? (yes /no /exit ) : ";
     cin>>option ;
     if(option=="yes") {
system("CLS");
     }
     else if (option=="no"){
         break;
     }
        int n_cars;

    cout << "Please enter number of cars\n";
    cin >> n_cars;
    CVechile cars[n_cars];
    Ccustomer cust[n_cars];
    for(int i = 0;i<n_cars;i++){
        cars[i].Add_Car_details();
        cars[i].Get_Car_details();
    }
    for(int i = 0;i<n_cars;i++){
        cust[i].Add_Customer_Info();
        cust[i].Get_Customer_Info();
    }
}}

