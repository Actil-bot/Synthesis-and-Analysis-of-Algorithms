
#include "node.h"

Node::Node(void): next_(NULL) {}

Node::Node(const std::string& DeparAir, const std::string& DestAir, const std::string& date, const int& duration, const int& stops, const std::string AirlineName, const double& price):
        
        next_(NULL) {
            DepartureAirport_= DeparAir,
            DestinationAirport_=  DestAir,
            date_ = date,
            duration_ = duration,
            stops_ = stops,
            AirlineName_ = AirlineName,
            price_ = price;

    }


Node::~Node(void) {}

void Node::set_next(Node* next) {
    
    next_ = next;
}

Node* Node::get_next(void) const {
    
    return next_;
}
void Node::write(void) const {
    
    std::cout << "------------------------------------------------" << std::endl;
    std::cout << "Printing the dates of the Plane reservation...\n" << std::endl;
    std::cout << "Departura Airport: " << DepartureAirport_ << std::endl;
    std::cout << "Destination Airport: " << DestinationAirport_ << std::endl;
    std::cout << "Name of airline: " << AirlineName_ << std::endl;
    std::cout << "Date: " << date_ << std::endl;
    std::cout << "Duration: " << duration_ << std::endl;
    std::cout << "Number of stops: " << stops_ << std::endl;
    std::cout << "Total price: " << price_ << std::endl << std::endl;

}

double Node::getPrice() {
    return price_;
}

void Node::setPrice(const double& price) {

    price_=price;
}

