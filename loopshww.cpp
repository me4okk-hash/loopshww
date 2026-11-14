#include <iostream>

int main() {
    // int a1;
    // std::cout << "Enter a (a <= 500): ";
    // std::cin >> a1;
    // long long sum1 = 0;
    // for (int i = a1; i <= 500; i++) {
    //     sum1 += i;
    // }
    // std::cout << "Sum: " << sum1 << "\n";

    // int x, y;
    // std::cout << "Enter x and y: ";
    // std::cin >> x >> y;
    // double power = 1;
    // int absY = (y < 0) ? -y : y;
    // for (int i = 0; i < absY; i++) {
    //     power *= x;
    // }
    // if (y < 0) {
    //     power = 1.0 / power;
    // }
    // std::cout << "Result: " << power << "\n";

    // int sum3 = 0;
    // for (int i = 1; i <= 1000; i++) {
    //     sum3 += i;
    // }
    // double avg3 = (double)sum3 / 1000;
    // std::cout << "Average: " << avg3 << "\n";

    // int a4;
    // std::cout << "Enter a (1 <= a <= 20): ";
    // std::cin >> a4;
    // long long prod4 = 1;
    // for (int i = a4; i <= 20; i++) {
    //     prod4 *= i;
    // }
    // std::cout << "Product: " << prod4 << "\n";

    // int k;
    // std::cout << "Enter k: ";
    // std::cin >> k;
    // for (int i = 1; i <= 10; i++) {
    //     std::cout << k << " * " << i << " = " << k * i << "\n";
    // }

    // int A;
    // std::cout << "Enter number A: ";
    // std::cin >> A;
    // int absA = (A < 0) ? -A : A;
    // std::cout << "Numbers B: ";
    // for (int B = 1; B * B <= absA; B++) {
    //     if (A % (B * B) == 0 && A % (B * B * B) != 0) {
    //         std::cout << B << " ";
    //         if (B != 1) {
    //             std::cout << -B << " ";
    //         }
    //     }
    // }
    // std::cout << "\n";

    // int num7;
    // std::cout << "Enter an integer: ";
    // std::cin >> num7;
    // int absNum7 = (num7 < 0) ? -num7 : num7;
    // std::cout << "Divisors: ";
    // for (int i = 1; i <= absNum7; i++) {
    //     if (num7 % i == 0) {
    //         std::cout << i << " ";
    //     }
    // }
    // std::cout << "\n";

    // int n1, n2;
    // std::cout << "Enter two integers: ";
    // std::cin >> n1 >> n2;
    // int absN1 = (n1 < 0) ? -n1 : n1;
    // int absN2 = (n2 < 0) ? -n2 : n2;
    // int minN = (absN1 < absN2) ? absN1 : absN2;
    // std::cout << "Common divisors: ";
    // for (int i = 1; i <= minN; i++) {
    //     if (n1 % i == 0 && n2 % i == 0) {
    //         std::cout << i << " ";
    //     }
    // }
    // std::cout << "\n";

    char ch;
    int choice;

    std::cout << "Enter a fill character: ";
    std::cin >> ch;

    std::cout << "Choose a shape:\n";
    std::cout << "1 - Square\n";
    std::cout << "2 - Rectangle\n";
    std::cout << "3 - Triangle\n";
    std::cout << "Your choice: ";
    std::cin >> choice;

    if (choice == 1) {
        int side;
        std::cout << "Enter the side of the square: ";
        std::cin >> side;
        for (int i = 0; i < side; i++) {
            for (int j = 0; j < side; j++) {
                std::cout << ch << " ";
            }
            std::cout << "\n";
        }
    }
    else if (choice == 2) {
        int width, height;
        std::cout << "Enter width and height of the rectangle: ";
        std::cin >> width >> height;
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                std::cout << ch << " ";
            }
            std::cout << "\n";
        }
    }
    else if (choice == 3) {
        int height;
        std::cout << "Enter the height of the triangle: ";
        std::cin >> height;
        for (int i = 1; i <= height; i++) {
            for (int j = 0; j < height - i; j++) {
                std::cout << " ";
            }
            for (int j = 0; j < 2 * i - 1; j++) {
                std::cout << ch;
            }
            std::cout << "\n";
        }
    }
    else {
        std::cout << "Invalid shape choice!\n";
    }
}
