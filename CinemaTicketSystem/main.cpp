#include <iostream>

#include "TicketSystem.h"


using namespace std;



int main()
{

    TicketSystem system;


    int choice;



    do
    {

        cout<<"\n========== CINEMA SYSTEM ==========\n";

        cout<<"1. Show seats\n";

        cout<<"2. Book ticket\n";

        cout<<"3. Cancel ticket\n";

        cout<<"4. Search customer\n";

        cout<<"5. Show booked tickets\n";

        cout<<"6. Statistic\n";

        cout<<"0. Exit\n";
        cout << "===================================\n";

        cout<<"Choice: ";

        cin>>choice;



        switch(choice)
        {

            case 1:
                system.showSeats();
                break;


            case 2:
                system.bookTicket();
                break;


            case 3:
                system.cancelTicket();
                break;


            case 4:
                system.search();
                break;


            case 5:
                system.showTickets();
                break;


            case 6:
                system.statistic();
                break;


            case 0:
                cout<<"Goodbye\n";
                break;


            default:
                cout<<"Invalid choice\n";

        }


    }while(choice!=0);



    return 0;
}
