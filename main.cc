
#include <ostream>
#include <iostream>
#include <stdio.h>

#include "list.h"

int main(void) {

    int selection;
    List* list = new List();
    do {

        std::cout << "This is the menu of the final task:" << std::endl << std::endl;
        std::cout << "-------------------------------- Menu --------------------------------" << std::endl << std::endl;
        std::cout << "Select '1' to add a node in front of the list" << std::endl;
        std::cout << "Select '2' to remove the end node from de list" << std::endl;
        std::cout << "Select '3' to sort the list in increasing order by the field price" << std::endl;
        std::cout << "Select '4' to display the number of the nodes and the list" << std::endl;
        std::cout << "Select '5' to exit the program" << std::endl << std::endl;
        std::cout << "Selection number: ";
        std::cin >> selection;
        std::cout << std::endl;

        //Nodes test
        Node* aux = new Node("Barajas", "Tenerife", "10/1/2019", 3, 0, "Ryanair", 320.1);
        Node* aux1 = new Node("Granada", "Sofía", "3/1/2020", 4, 4, "Ryanair", 121);

        switch (selection) {

            case 1:
                std::cout << "----------- Option '1': Adding a node in front of the list -----------" << std::endl;
                std::cout << "Creating a new node..." << std::endl;
                list -> insert_head(list -> createPlane());
                break;
            case 2:
                std::cout << "----------- Option '2': Removing a node from the end of the list -----------" << std::endl;
                list-> extract_end(); 
                break;
            case 3:
                std::cout << "----------- Option '3': Sorting the list -----------" << std::endl;
                list -> sortByPrice();
                break;
            case 4:
                std::cout << "----------- Option '4': Display the number of nodes and the list -----------" << std::endl;
                list -> write();
                break;
            default: std::cout << "----------- Exiting the program -----------" << std::endl;
                break;

        }

    } while (selection != 5);

    return 0;
}