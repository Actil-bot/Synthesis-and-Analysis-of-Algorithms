

#include "list.h"

List::List(void) : head_(NULL) {}

List::~List(void) {

    while (!empty()) {

        Node* aux = head_;
        head_ = head_ -> get_next();
        delete aux;
    }
}

bool List::empty(void) const {

    return (head_ == NULL);
}

void List::insert_head(Node* node) {

    node -> set_next(head_);
    head_ = node;
    numNodes_++;
}

void List::extract_end() {

    Node* aux = head_;
    if (empty()) {
        std::cout << "\nThe list is empty\n" << std::endl;
    }
    else {

        if (aux -> get_next() == NULL) {
            aux -> set_next(NULL);
            head_=NULL;
            delete aux;
        }
        
        else {
            while ((aux -> get_next())->get_next() != NULL) {
                aux -> set_next(aux -> get_next());
            }
            free(aux->get_next());
            aux -> set_next(NULL);
        }
    }
        numNodes_--; 
}

void List::sortByPrice() {

    double aux;
    if (head_ == NULL) {
        std::cout << "\nThe list is empty\n" << std::endl;
    }
    else {
        for (Node* i = head_; i -> get_next() != NULL; i = i -> get_next()) {
            for (Node* j = i -> get_next(); j != NULL; j = j -> get_next() ) {
                if (i -> getPrice() > j -> getPrice()) {
                    aux = i -> getPrice();
                    i -> setPrice(j -> getPrice());
                    j -> setPrice(aux);
                }
            }
        }
    }
}


void List::write(void) const {

    Node* aux = head_;

    if (aux == NULL) {
        std::cout << "\nThe list is empty\n" << std::endl;
        std::cout << "\nNumber of elements is: 0" << std::endl;
    }
    else {
        std::cout << "-------- Number elements is: " << numNodes_ << "--------" << std::endl;
        while (aux != NULL) {
            aux -> write();
            aux = aux -> get_next();
        }
    }
}

Node* List::createPlane () {

    std::string DepartureA, DestinationA, Date, NomAirline;
    double Price;
    int Stops, Duration;

    std::cout << "\n\nInsert the name of the Departure Airport: ";
    std::cin >> DepartureA;
    std::cout << "\nInsert the name of the Destination Airport: ";
    std::cin >> DestinationA;
    std::cout << "\nInsert the date: ";
    std::cin >> Date;
    std::cout << "\nInsert the duration: ";
    std::cin >> Duration;
    std::cout << "\nInsert the numbers of stops: ";
    std::cin >> Stops;
    std::cout << "\nInsert the name of the Airline: ";
    std::cin >>  NomAirline;
    std::cout << "\nInsert the price: ";
    std::cin >> Price;

    Node* aux = new Node(DepartureA, DestinationA, Date, Duration, Stops, NomAirline, Price);
    return aux;
}
