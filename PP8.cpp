#include <iostream>

int abs(int n) {
    return n * (-1);
}

long abs(long n) {
    return n * (-1);
}

long long abs(long long n) {
    return n * (-1);
}

float abs(float n) {
    return n * (-1);
}

double abs(double n) {
    return n * (-1);
}

long double abs(long double n) {
    return n * (-1);
}

int main() {
    std::cout << abs(-10) << std::endl;       // int
    std::cout << abs(-10LL) << std::endl;     // long long
    std::cout << abs(-10.5f) << std::endl;    // float
    std::cout << abs(-10.5) << std::endl;     // double
    std::cout << abs(-10.5L) << std::endl;    // long double
}
