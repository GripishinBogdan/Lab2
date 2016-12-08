#include "Receipt.h"
#include <regex>

Receipt::Receipt(int Number, std::string Date, double Sum) : Number(Number), Date(Date), Sum(Sum) {
    std::cout << "\nThis is a parameterized constructor" << std::endl;
}

Receipt::Receipt() {
    std::cout << "\nThis is the normal constructor" << std::endl;
}

int Receipt::getNumber() const {
    return Number;
}
void Receipt::setNumber(int Number) {
    Receipt::Number = Number;
}

double Receipt::getSum() const {
    return Sum;
}
void Receipt::setSum(double Sum) {
    Receipt::Sum = Sum;
}

void Receipt::setDate(std::string date) {
    Date = date;
}
std::string Receipt::getDate() {
    if(!isValid()){
        return "Enter the correct date";
    } else {
        return Date;
    }
}

bool Receipt::isValid() {
    std::string date = Date;
    std::regex dt("[0-9]{4}-(0[1-9]|1[012])-(0[1-9]|1[0-9]|2[0-9]|3[01])");
    if(std::regex_match(date, dt)) {
        return true;
    } else {
        return false;
    }
}

Receipt::~Receipt() {
    std::cout << "\nThis destructor" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Receipt &receipt) {
    os << "Number: " << receipt.Number << " Date: " << receipt.Date << " Sum: " << receipt.Sum;
    return os;
}