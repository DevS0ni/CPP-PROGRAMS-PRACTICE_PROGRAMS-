#include <iostream>
#include <string>

class Cricket {
private:
    std::string playerName;
    std::string teamName;
    float battingAverage;

public:
    void readInfo() {
        std::cout << "Enter Player Name: ";
        std::getline(std::cin, playerName);
        std::cout << "Enter Team Name: ";
        std::getline(std::cin, teamName);
        std::cout << "Enter Batting Average: ";
        std::cin >> battingAverage;
    }

    void displayInfo() const {
        std::cout << "Player Name: " << playerName << std::endl;
        std::cout << "Team Name: " << teamName << std::endl;
        std::cout << "Batting Average: " << battingAverage << std::endl;
    }
};

int main() {
    Cricket players[3];

    for (int i = 0; i < 3; ++i) {
        std::cout << "\nEnter details for Player " << i + 1 << ":" << std::endl;
        players[i].readInfo();
    }

    std::cout << "\nTeam-wise Player List:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        players[i].displayInfo();
        std::cout << "--------------" << std::endl;
    }

    return 0;
}
