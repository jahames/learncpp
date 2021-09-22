#include <iostream>
#include <cmath>

int main() {
    // Operator in calculation
    char op{'+'};

    // The two numbers used in the calculation
    double x{0}, y{0}, ans{0}; 

    // Title
    std::cout << "==== The sickest calculator ever ====\n";

    // Main calculator loop
    while (true) {
        // Take console input
        std::cout << "Please enter {number} followed by {+, -, *, /, % or ^}, followed by a {number}: \n";
        std::cin >> x >> op >> y;

        // Perform mathematical operation
        switch (op) {
            case '+':
                ans = x + y;
                break;
            case '-':
                ans = x - y;
                break;
            case '*':
                ans = x * y;
                break;
            case '/':
                ans = x / y;
                break;
            case '%':
                ans = std::fmod(x, y);
                break;
            case '^':
                ans = std::pow(x, y);
                break;
        }

        // Output answer
        std::cout << x << " " << op << " " << y << " = " << ans << "\n";
    }
    return 0;
}