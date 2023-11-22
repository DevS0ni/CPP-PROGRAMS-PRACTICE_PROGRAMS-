#include <iostream>
#include <vector>
#include <iomanip>

class Salesman {
private:
    int salesmanNo;
    int quantitySold;
    float ratePerQuantity;
    float amount;
    float commission;

public:
    // Function to read information
    void readInformation() {
        std::cout << "Enter Salesman No.: ";
        std::cin >> salesmanNo;

        std::cout << "Enter Quantity Sold (above 50): ";
        std::cin >> quantitySold;

        std::cout << "Enter Rate per Quantity: ";
        std::cin >> ratePerQuantity;

        calculateAmount();
        calculateCommission();
    }

    // Function to calculate amount
    void calculateAmount() {
        amount = quantitySold * ratePerQuantity;
    }

    // Function to calculate commission
    void calculateCommission() {
        if (amount <= 1000) {
            commission = 0.0;
        } else if (amount <= 2000) {
            commission = 0.15 * amount;
        } else if (amount <= 4000) {
            commission = 0.20 * amount;
        } else {
            commission = 0.25 * amount;
        }
    }

    // Function to display information
    void displayInformation() const {
        std::cout << std::setw(10) << salesmanNo
                  << std::setw(18) << quantitySold
                  << std::setw(10) << ratePerQuantity
                  << std::setw(10) << amount
                  << std::setw(15) << commission
                  << "\n";
    }

    // Getter function for commission
    float getCommission() const {
        return commission;
    }
};

int main() {
    int N;
    std::cout << "Enter the number of salesmen: ";
    std::cin >> N;

    std::vector<Salesman> salesmen(N);

    std::cout << "Enter details for each salesman:\n";
    for (int i = 0; i < N; ++i) {
        salesmen[i].readInformation();
    }

    std::cout << "\nABC COMPANY\n";
    std::cout << "Salesman Information\n";
    std::cout << "-------------------------------------------------------------------------------------\n";
    std::cout << std::setw(10) << "Salesman no."
              << std::setw(18) << "Quantity sold"
              << std::setw(10) << "Rate"
              << std::setw(10) << "Amount"
              << std::setw(15) << "Commission\n";
    std::cout << "-------------------------------------------------------------------------------------\n";

    float totalCommission = 0.0;

    for (int i = 0; i < N; ++i) {
        salesmen[i].displayInformation();
        totalCommission += salesmen[i].getCommission();
    }

    std::cout << "-------------------------------------------------------------------------------------\n";
    std::cout << std::setw(38) << "TOTAL"
              << std::setw(10) << "-----"
              << std::setw(15) << totalCommission
              << "\n";
    std::cout << "-------------------------------------------------------------------------------------\n";

    return 0;
}
