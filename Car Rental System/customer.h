#include <iostream>
#include <string>
class Ccustomer{
protected:
    int Cus_ID;
    char Cus_name[50],Cus_Email[10],Email_password[10];
public:
    void setCus_ID(int c_ID);
    void setCus_name(char *C_name);
    void setCus_Email(char *C_Email);
    void setEmail_password(char *E_password);
    int getCus_ID();
    char *getCus_name();
    char *getCus_Email();
    char *getEmail_password();
    void Add_Customer_Info();
    void Get_Customer_Info();

};
