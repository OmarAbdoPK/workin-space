#include <iostream>

// function with 2 parameters
void display(int var1, double var2) {
    std::cout << "Integer number: " << var1;
    std::cout << " and double number: " << var2 << std::endl;
}

// function with double type single parameter
void display(double var) {
    std::cout << "Double number: " << var << std::endl;
}

// function with int type single parameter
void display(int var) {
    std::cout << "Integer number: " << var << std::endl;
}

int main() {

    int a = 5;
    double b = 5.5;

    // call function with int type parameter
    display(a);

    // call function with double type parameter
    display(b);

    // call function with 2 parameters
    display(a, b);

    return 0;
}