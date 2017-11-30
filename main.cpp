#include <iostream>

template <typename T>
void testFucntion(T t) {
    std::cout << t << std::endl;
}

template void testFucntion(int t);
template <> void testFucntion(double t);

int main() {
    int o  = 99;
    testFucntion(o);
    double q = 99.0;
    testFucntion(q);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}