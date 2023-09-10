// Make a menu program which main for using setup and calling function
// while void will be used for choice and printing information

#include <iostream>
#include <iomanip>

void showMenu();
void showFees();

int main()
{
    int choice, month;
    double payment;
    
    const double Adult = 30.0;
    const double Senior = 20.0;
    const double Child = 10.0;

    using namespace std;
    cout<<fixed<<showpoint<<setprecision(2);
    showMenu();
    std::cin >> choice;
    

   switch(choice)
   {
     case 1:
     std::cout<<"Please enter month you want to use our program: ";
     std::cin >> month;
     payment = (Adult * month);
     std::cout<<"Your payment will be: " << payment;

     break;

     case 2:
     std::cout<<"Please enter month you want to use our program: ";
     std::cin >> month;
     payment = (Adult * month);
     std::cout<<"Your payment will be: " << payment;

     break;

     case 3:
     std::cout<<"Please enter month you want to use our program: ";
     std::cin >> month;
     payment = (Adult * month);
     std::cout<<"Your payment will be: " << payment;

     break;

     case 4:
     std::cout<<"Thanks for using our program";
     break;
   }
} 

void showMenu()
{
    std::cout << '\t' << '\t' <<"WELCOME TO OUR HEALTH CLUB MEMBERSHIP MENU"<<'\n';
    std::cout << "--------------------------------------------" << '\n';

    std::cout << "Please choose 1 if you want to use the Adult program" << '\n';
    std::cout << "Please choose 2 if you want to use the Senior program" << '\n';
    std::cout << "Please choose 3 if you want to use the Child program" << '\n';
    std::cout << "Please choose 4 if you want to exit the program" << '\n';
}

void showFees()
{

}