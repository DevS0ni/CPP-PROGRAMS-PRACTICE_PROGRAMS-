#include <iostream>

class Hardware {
private:
    char choice;
    double price;

public:
    void showPrice() {
        std::cout << "Choose hardware (F for Floppy, C for CD, P for Pen drive): ";
        std::cin >> choice;

        switch (choice) {
            case 'F':
                price = 15.0;
                break;
            case 'C':
                price = 20.0;
                break;
            case 'P':
                price = 1250.0;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
                return;
        }

        std::cout << "Price of the chosen hardware: $" << price << std::endl;
    }
};

int main() {
    Hardware hardware;
    hardware.showPrice();

    return 0;
}
