#include <iostream>
#include <string>

class Cricketer {
private:
    std::string name;
    int age;
    std::string country;
    std::string type;
    int totalMatches;
    int totalRuns;
    int totalWickets;

public:
    // Function to assign initial values
    void assignInitialValues(const std::string& n, int a, const std::string& c, const std::string& t,
                             int matches, int runs, int wickets) {
        name = n;
        age = a;
        country = c;
        type = t;
        totalMatches = matches;
        totalRuns = runs;
        totalWickets = wickets;
    }

    // Function to enter data
    void enterData() {
        std::cout << "Enter cricketer details:\n";
        std::cout << "Name: ";
        std::getline(std::cin, name);

        std::cout << "Age: ";
        std::cin >> age;
        std::cin.ignore(); // Clear the newline character left in the buffer

        std::cout << "Country: ";
        std::getline(std::cin, country);

        std::cout << "Type (Batsman/Bowler): ";
        std::getline(std::cin, type);

        std::cout << "Total Matches: ";
        std::cin >> totalMatches;

        std::cout << "Total Runs: ";
        std::cin >> totalRuns;

        std::cout << "Total Wickets: ";
        std::cin >> totalWickets;
    }

    // Function to display data
    void displayData() {
        std::cout << "\nCricketer Details:\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Age: " << age << "\n";
        std::cout << "Country: " << country << "\n";
        std::cout << "Type: " << type << "\n";
        std::cout << "Total Matches: " << totalMatches << "\n";
        std::cout << "Total Runs: " << totalRuns << "\n";
        std::cout << "Total Wickets: " << totalWickets << "\n";
    }
};

int main() {
    Cricketer cricketers[5];

    for (int i = 0; i < 5; ++i) {
        cricketers[i].assignInitialValues("", 0, "", "", 0, 0, 0);
        cricketers[i].enterData();
    }

    for (int i = 0; i < 5; ++i) {
        cricketers[i].displayData();
    }

    return 0;
}
