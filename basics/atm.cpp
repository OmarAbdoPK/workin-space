#include <iostream>

class ATM
{
    public:
    void showmenu()
    {

        std::cout << "1- Balance : " << std::endl;
        std::cout << "2- Deposite : " << std::endl;
        std::cout << "3- withdraw : " << std::endl;
        std::cout << "4- Exit : " << std::endl;
    }

    void passWord()
    {
        std::cout << "Enter Password : ";
        std::cin >> passWord;
        
    }

    private:
        int password;
}

int main()
{
    // check balace, deposit, withdraw, show menu
    int option;
    double balance = 500;
    do 
    {
    
        showmenu();
        std::cout << "\t\tChoose Option : ";
        std::cin >> option;
        system("cls");

        switch (option)
        {
        case 1:
            std::cout << "Balance is " << balance << " $" << std::endl; 
            break;
        case 2:
            std::cout << "Enter Deposite : ";
            double depositeAmount;
            std::cin >>depositeAmount;
            balance += depositeAmount;
            std::cout << "Your Balance Now is " << balance << " $" << std::endl;
            break;
        case 3:
            std::cout << "Enter Withdraw Amount you want to draw : ";
            double withdrawAmount;
            std::cin >>withdrawAmount;
            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
                std::cout << "You Drawed " << withdrawAmount << " $" << std::endl;
                std::cout << "Your Balance Now is " << balance << " $" << std::endl;
            }
            else 
                std::cout << "Not Enough Money";
            break;
        case 4:
            std::cout << "Operation Done" << std::endl;
            break;
        
        default:
            std::cout << "Not Valid option";
            break;
        }
    }while(option != 4);
    return 0;
}