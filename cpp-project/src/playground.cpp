#include <iostream>
#include "BigInt.hpp"

int main() {
    BigInt big1 = 1234567890, big2;
    big2 = "987654321012345678909876543210123456789";
    
    BigInt big3 = 1 + pow(2 * big1 + 3 * big2, 4);
    std::cout << big3 << "\n";
}
