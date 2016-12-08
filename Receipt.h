#ifndef EXAM_H
#define EXAM_H

#include <iostream>
#include <string>

class Receipt {

private:
    int Number;
    std::string Date;
    double Sum;

public:
    Receipt(int Number, std::string Date, double Sum);
    Receipt();

    int getNumber() const;
    void setNumber(int Number);

    double getSum() const;
    void setSum(double Sum);

    void setDate(std::string);
    std::string getDate();

    bool isValid();

    friend std::ostream &operator<<(std::ostream &os, const Receipt &receipt);

    ~Receipt();

};

#endif