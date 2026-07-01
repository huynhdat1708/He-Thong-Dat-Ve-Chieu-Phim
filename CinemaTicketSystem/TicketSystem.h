#ifndef TICKET_SYSTEM_H
#define TICKET_SYSTEM_H


#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#include "Seat.h"
#include "Customer.h"


using namespace std;


struct Transaction {

    string customerID;
    string seatID;
    string action;

};


class TicketSystem {


private:


    Seat seats[5][5];


    Customer* root;


    priority_queue
    <
        WaitingCustomer,
        vector<WaitingCustomer>
    >
    waitingList;



    stack<Transaction> history;



    void insertCustomer(
        Customer*& node,
        Customer* customer
    );



    Customer* searchCustomer(
        Customer* node,
        string id
    );



    void displayCustomer(
        Customer* customer
    );



    string getSeatName(
        int r,
        int c
    );



public:


    TicketSystem();



    void showSeats();



    void bookTicket();



    void cancelTicket();



    void search();



    void showTickets();



    void statistic();



};


#endif
