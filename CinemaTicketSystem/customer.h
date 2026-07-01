#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;


struct Customer {

    string id;
    string name;
    int age;
    bool vip;
    double price;


    Customer* left;
    Customer* right;


    Customer();

    Customer(
        string id,
        string name,
        int age,
        bool vip,
        double price
    );

};


struct WaitingCustomer {

    string id;
    string name;

    int age;
    bool vip;

    int priority;


    bool operator < (const WaitingCustomer& other) const
    {
        return priority > other.priority;
    }

};


#endif
