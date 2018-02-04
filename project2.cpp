#include <iostream>
#include "tickets.h"
using namespace std;


int main(){
    tickets ticketsObject(1319);
    ticketsObject.setGroupAndHouseTickets();
    ticketsObject.getAvailableIndividualTickets();
    ticketsObject.calculatePercentages();
    ticketsObject.displayPercentages();


    return 0;
}

// im updating this file as an example