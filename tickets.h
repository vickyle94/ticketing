#ifndef TICKETS_H
#define TICKETS_H


//define header class
//class called tickets to calculate available tickets
//MAX capacity= 1319 seats
//class should include 5 functions
    //total number of tickets for individual sales
    //percentage of individual sales
    //percentage of group ticket sales
    //percentage of reserved all different holders
        //create function to take in number and another to do calcalation
class tickets
{

    public:
        tickets(int);
        void setGroupAndHouseTickets();
        int getAvailableIndividualTickets();
        void calculatePercentages();
        void displayPercentages();

    private:
    int groupTix;
    int houseTix;
    int capacity;
    int individualAvailableTickets;
    float percentGroup;
    float percentHouse;
    float percentIndividual;



};

#endif //tickets_h