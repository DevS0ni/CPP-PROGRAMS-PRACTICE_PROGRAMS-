#include <iostream>
#include <string>

class Student {
private:
    int admno;
    std::string sname;
    float eng, math, science;
    float total;

    float ctotal() {
        return eng + math + science;
    }

public:
    void Takedata() {
        std::cout << "Enter Admission Number: ";
        std::cin >> admno;
        std::cin.ignore(); // Clear the input buffer
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, sname);
        std::cout << "Enter Marks in English: ";
        std::cin >> eng;
        std::cout << "Enter Marks in Math: ";
        std::cin >> math;
        std::cout << "Enter Marks in Science: ";
        std::cin >> science;

        total = ctotal();
    }

    void Showdata() {
        std::cout << "Admission Number: " << admno << std::endl;
        std::cout << "Student Name: " << sname << std::endl;
        std::cout << "Marks in English: " << eng << std::endl;
        std::cout << "Marks in Math: " << math << std::endl;
        std::cout << "Marks in Science: " << science << std::endl;
        std::cout << "Total Marks: " << total << std::endl;
    }
};

class Batsman {
private:
    int bcode;
    std::string bname;
    int innings, notout, runs;
    float Batavg;

    float calcavg() {
        return static_cast<float>(runs) / (innings - notout);
    }

public:
    void readdata() {
        std::cout << "Enter Batsman Code: ";
        std::cin >> bcode;
        std::cin.ignore();
        std::cout << "Enter Batsman Name: ";
        std::getline(std::cin, bname);
        std::cout << "Enter Runs Scored: ";
        std::cin >> runs;
        std::cout << "Enter Innings Played: ";
        std::cin >> innings;
        std::cout << "Enter Not Outs: ";
        std::cin >> notout;

        Batavg = calcavg();
    }

    void displaydata() {
        std::cout << "Batsman Code: " << bcode << std::endl;
        std::cout << "Batsman Name: " << bname << std::endl;
        std::cout << "Runs Scored: " << runs << std::endl;
        std::cout << "Innings Played: " << innings << std::endl;
        std::cout << "Not Outs: " << notout << std::endl;
        std::cout << "Batting Average: " << Batavg << std::endl;
    }
};

class TEST {
private:
    int TestCode;
    std::string Description;
    int NoCandidate;
    int CenterReqd;

    int CALCNTR() {
        return (NoCandidate / 100 + 1);
    }

public:
    void SCHEDULE() {
        std::cout << "Enter Test Code: ";
        std::cin >> TestCode;
        std::cin.ignore();
        std::cout << "Enter Description: ";
        std::getline(std::cin, Description);
        std::cout << "Enter Number of Candidates: ";
        std::cin >> NoCandidate;

        CenterReqd = CALCNTR();
    }

    void DISPTEST() {
        std::cout << "Test Code: " << TestCode << std::endl;
        std::cout << "Description: " << Description << std::endl;
        std::cout << "Number of Candidates: " << NoCandidate << std::endl;
        std::cout << "Centers Required: " << CenterReqd << std::endl;
    }
};

class Flight {
private:
    int FlightNumber;
    std::string Destination;
    float Distance;
    float Fuel;

    void CALFUEL() {
        if (Distance <= 1000) {
            Fuel = 500;
        } else if (Distance <= 2000) {
            Fuel = 1100;
        } else {
            Fuel = 2200;
        }
    }

public:
    void FEEDINFO() {
        std::cout << "Enter Flight Number: ";
        std::cin >> FlightNumber;
        std::cin.ignore();
        std::cout << "Enter Destination: ";
        std::getline(std::cin, Destination);
        std::cout << "Enter Distance: ";
        std::cin >> Distance;

        CALFUEL();
    }

    void SHOWINFO() {
        std::cout << "Flight Number: " << FlightNumber << std::endl;
        std::cout << "Destination: " << Destination << std::endl;
        std::cout << "Distance: " << Distance << " km" << std::endl;
        std::cout << "Fuel Required: " << Fuel << " liters" << std::endl;
    }
};

class BOOK {
private:
    int BOOK_NO;
    std::string BOOKTITLE;
    float PRICE;

    float TOTAL_COST(int N) {
        return N * PRICE;
    }

public:
    void INPUT() {
        std::cout << "Enter Book Number: ";
        std::cin >> BOOK_NO;
        std::cin.ignore();
        std::cout << "Enter Book Title: ";
        std::getline(std::cin, BOOKTITLE);
        std::cout << "Enter Price per Copy: ";
        std::cin >> PRICE;
    }

    void PURCHASE() {
        int N;
        std::cout << "Enter the number of copies to be purchased: ";
        std::cin >> N;
        std::cout << "Total Cost: $" << TOTAL_COST(N) << std::endl;
    }
};

class REPORT {
private:
    int adno;
    std::string name;
    float marks[5];
    float average;

    void GETAVG() {
        float sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += marks[i];
        }
        average = sum / 5;
    }

public:
    void READINFO() {
        std::cout << "Enter Admission Number: ";
        std::cin >> adno;
        std::cin.ignore();
        std::cout << "Enter Student Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Marks for 5 Subjects:" << std::endl;
        for (int i = 0; i < 5; ++i) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }

        GETAVG();
    }

    void DISPLAYINFO() {
        std::cout << "Admission Number: " << adno << std::endl;
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Marks in 5 Subjects: ";
        for (int i = 0; i < 5; ++i) {
            std::cout << marks[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Average Marks: " << average << std::endl;
    }
};

int main() {
    // Example usage of Student class
    Student student1;
    student1.Takedata();
    student1.Showdata();

    // Example usage of Batsman class
    Batsman batsman1;
    batsman1.readdata();
    batsman1.displaydata();

    // Example usage of TEST class
    TEST test1;
    test1.SCHEDULE();
    test1.DISPTEST();

    // Example usage of Flight class
    Flight flight1;
    flight1.FEEDINFO();
    flight1.SHOWINFO();

    // Example usage of BOOK class
    BOOK book1;
    book1.INPUT();
    book1.PURCHASE();

    // Example usage of REPORT class
    REPORT report1;
    report1.READINFO();
    report1.DISPLAYINFO();

    return 0;
}
