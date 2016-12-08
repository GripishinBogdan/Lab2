#include <iostream>
#include "Receipt.h"

void show(Receipt obj) {
    std::cout << "Sum:\t" << obj.getSum() << std::endl;
    std::cout << "Number:\t" << obj.getNumber() << std::endl;
    std::cout << "Date:\t" << obj.getDate() << std::endl;
}

int main() {

    Receipt a(5, "1984-04-01", 124.5);

    show(a);

    Receipt b(a);
    show(b);

    Receipt *k = new Receipt();

    k->setSum(235.5);
    k->setNumber(4);
    k->setDate("2016-08-23");

    show(*k);

    return 0;
}