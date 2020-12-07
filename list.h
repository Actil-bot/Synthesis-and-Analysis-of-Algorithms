/* 1. Define a single linked list, each node of which has the following
structure:
- Departure airport
- Destination airport
- Date
- Duration of the flight (in hours)
- Number of stops
- Airline name
- Price
- Link to the next node
2. The program must perform the following operations:
- Add node in the front of the list
- Remove the end node from the list
- Sort the list in increasing order (using the field “Price”)
- Display the number of the nodes and the list */
#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "node.h"

class List {

    private:

        Node* head_;
        int numNodes_ = 0;

    public:

        List(void);
        ~List(void); 
        bool empty(void) const;
        void insert_head(Node* node);
        void extract_end();
        void sortByPrice();
        Node* createPlane ();
        void write(void) const;
};