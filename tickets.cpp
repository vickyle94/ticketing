#include <iostream>
#include "tickets.h"
using namespace std;

//define class 'tickets' functions here
tickets::tickets(int cap){
    capacity = cap;
}

void tickets::setGroupAndHouseTickets(){
    cout << "Enter number of group tickets" << endl;
    cin >> groupTix;
    cout << "Enter number of house tickets" << endl;
    cin >> houseTix;
    individualAvailableTickets = capacity - groupTix - houseTix;
}

int tickets::getAvailableIndividualTickets(){
    return individualAvailableTickets;
}

void tickets::calculatePercentages() {
    percentGroup = (double)groupTix/capacity * 100;
    percentHouse = (double)houseTix/capacity * 100;
    percentIndividual = (double)individualAvailableTickets/capacity * 100;
}

void tickets::displayPercentages(){
    cout << "Percentage of group tickets sold: " << percentGroup << endl;
    cout << "Percentage of house tickets sold: " << percentHouse << endl;
    cout << "Percentage of individual tickets sold: " << percentIndividual << endl;

}


