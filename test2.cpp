#include <iostream>
#include <iomanip>
using namespace std;

void showMenu();
void showFees(double, int);

int main()
{
    //! This will be unchangable value using for program
    int choice;
    int month;
    double payment;
    
    const double Adult = 40.0;
    const double Senior = 30.0;
    const double Child = 20.0;

    
    cout<<fixed<<showpoint<<setprecision(2);

    do 
    {
        showMenu(); //display the menu
        std::cin >> choice;
        
        //! This will be validate the choice and make a loop if need for using again
        while(choice < 1 || choice > 4) 
        {
           std::cout << "Please choose the option 1,2,3, or 4: ";
           std::cin >> choice;
        }   

           if(choice != 4)
           {

            std::cout<<"For how many months?: ";
            std::cin>>month;

            //! Case of choice when the choice is valid
              switch (choice)
              {
                case 1:
                showFees(Adult, month);
                break;
                
                case 2:
                showFees(Senior, month);
                break;

                case 3:
                showFees(Child, month);
                break;
           
              }

           }
        

    } while(choice != 4);

    return 0;

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

void showFees(double rate, int month)
{
   std::cout << "Your payment will be: " << (rate * month) << std::endl ;
}   