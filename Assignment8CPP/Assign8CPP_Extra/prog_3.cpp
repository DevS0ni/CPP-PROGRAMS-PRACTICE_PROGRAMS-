#include <iostream>
#include <cmath>

class NumberOperations {
public:
    void checkPositiveNegative(int num) {
        if (num > 0) {
            std::cout << num << " is a positive number." << std::endl;
        } else if (num < 0) {
            std::cout << num << " is a negative number." << std::endl;
        } else {
            std::cout << num << " is neither positive nor negative." << std::endl;
        }
    }

    void checkOddEven(int num) {
        if (num % 2 == 0) {
            std::cout << num << " is an even number." << std::endl;
        } else {
            std::cout << num << " is an odd number." << std::endl;
        }
    }

    void checkPrime(int num) {
        if (num < 2) {
            std::cout << num << " is not a prime number." << std::endl;
            return;
        }

        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << num << " is a prime number." << std::endl;
        } else {
            std::cout << num << " is not a prime number." << std::endl;
        }
    }

    void checkPalindrome(int num) {
        int originalNum = num;
        int reversedNum = 0;

        while (num > 0) {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }

        if (originalNum == reversedNum) {
            std::cout << originalNum << " is a palindrome number." << std::endl;
        } else {
            std::cout << originalNum << " is not a palindrome number." << std::endl;
        }
    }

    void checkArmstrong(int num) {
        int originalNum = num;
        int numDigits = 0;
        int sum = 0;

        while (num > 0) {
            numDigits++;
            num /= 10;
        }

        num = originalNum;
        while (num > 0) {
            int digit = num % 10;
            sum += pow(digit, numDigits);
            num /= 10;
        }

        if (originalNum == sum) {
            std::cout << originalNum << " is an Armstrong number." << std::endl;
        } else {
            std::cout << originalNum << " is not an Armstrong number." << std::endl;
        }
    }

    void checkFibonacci(int num) {
        int a = 0, b = 1, c;

        while (a <= num) {
            if (a == num) {
                std::cout << num << " is a member of the Fibonacci series." << std::endl;
                return;
            }
            c = a + b;
            a = b;
            b = c;
        }

        std::cout << num << " is not a member of the Fibonacci series." << std::endl;
    }
};

int main() {
    NumberOperations numberOps;
    int choice, num;

    do {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Check for positive or negative number" << std::endl;
        std::cout << "2. Check for odd or even number" << std::endl;
        std::cout << "3. Check for primary number" << std::endl;
        std::cout << "4. Check for Palindrome number" << std::endl;
        std::cout << "5. Check for Armstrong number" << std::endl;
        std::cout << "6. Check for number whether a member of Fibonacci series" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter a number: ";
                std::cin >> num;
                numberOps.checkPositiveNegative(num);
                break;
            case 2:
                std::cout << "Enter a number: ";
                std::cin >> num;
                numberOps.checkOddEven(num);
                break;
            case 3:
                std::cout << "Enter a number: ";
                std::cin >> num;
                numberOps.checkPrime(num);
                break;
            case 4:
                std::cout << "Enter a number: ";
                std::cin >> num;
                numberOps.checkPalindrome(num);
                break;
            case 5:
                std::cout << "Enter a number: ";
                std::cin >> num;
                numberOps.checkArmstrong(num);
                break;
            case 6:
                std::cout << "Enter a number: ";
                std::cin >> num;
                numberOps.checkFibonacci(num);
                break;
            case 7:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 7);

    return 0;
}

