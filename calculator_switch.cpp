#include <iostream>

int main() {
    char operation;
    float num1, num2, result;

    std::cout << "Enter an operation (+, -, *, /) : ";
    std::cin >> operation;

    std::cout << "Enter 1st numbers : ";
    std::cin >> num1;
    std::cout << "Enter 2nd numbers : ";
    std::cin >> num2;

    switch(operation) {
        case '+':
            result = num1 + num2;
            std::cout << num1<<" + "<<num2<<" = " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1<<" - "<<num2<<" = " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1<<" * "<<num2<<" = " << result << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error = division by zero" << std::endl;
            } else {
                result = num1 / num2;
                            std::cout << num1<<" / "<<num2<<" = " << result << std::endl;
            }
            break;
        default:
            std::cout << " Invalid Operation " << std::endl;
    }
    return 0;
}