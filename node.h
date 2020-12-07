
#include <iostream>

class Node {

    private:
        std::string DepartureAirport_;
        std::string DestinationAirport_;
        std::string date_;
        int duration_;
        int stops_;
        std::string AirlineName_;
        double price_;

        Node* next_;
    public:
        Node(void);
        Node(const std::string& DeparAir, const std::string& DestAir, const std::string& date, const int& duration, const int& stops, const std::string AirlineName, const double& price);
        ~Node(void);
        void set_next(Node* next);
        double getPrice();
        void setPrice(const double& price);
        Node* get_next(void) const;
        void write(void) const;

};