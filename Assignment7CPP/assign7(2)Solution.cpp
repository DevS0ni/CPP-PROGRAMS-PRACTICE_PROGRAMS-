#include <iostream>
#include <string>

class Student {
private:
    int id;
    std::string name;
    std::string gender;
    std::string email;
    std::string mobileNo;
    std::string address;
    std::string city;
    int pincode;
    std::string state;
    std::string country;

public:
    // Default constructor
    Student() {}

    // Parameterized constructor
    Student(int _id, const std::string& _name, const std::string& _gender, const std::string& _email,
            const std::string& _mobileNo, const std::string& _address, const std::string& _city,
            int _pincode, const std::string& _state, const std::string& _country)
        : id(_id), name(_name), gender(_gender), email(_email), mobileNo(_mobileNo),
          address(_address), city(_city), pincode(_pincode), state(_state), country(_country) {}

    // Display student information
    void displayInfo() const {
        std::cout << "Student ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Mobile Number: " << mobileNo << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "Pincode: " << pincode << std::endl;
        std::cout << "State: " << state << std::endl;
        std::cout << "Country: " << country << std::endl;
    }
};

class Employee {
private:
    int id;
    std::string code;
    std::string firstName;
    std::string middleName;
    std::string lastName;
    std::string gender;
    std::string birthdate;
    std::string address;
    std::string city;
    int pincode;
    std::string designation;
    std::string department;
    std::string joinDate;
    std::string jobTime;

public:
    // Default constructor
    Employee() {}

    // Parameterized constructor
    Employee(int _id, const std::string& _code, const std::string& _firstName,
             const std::string& _middleName, const std::string& _lastName,
             const std::string& _gender, const std::string& _birthdate,
             const std::string& _address, const std::string& _city,
             int _pincode, const std::string& _designation,
             const std::string& _department, const std::string& _joinDate,
             const std::string& _jobTime)
        : id(_id), code(_code), firstName(_firstName), middleName(_middleName),
          lastName(_lastName), gender(_gender), birthdate(_birthdate),
          address(_address), city(_city), pincode(_pincode), designation(_designation),
          department(_department), joinDate(_joinDate), jobTime(_jobTime) {}

    // Display employee information
    void displayInfo() const {
        std::cout << "Employee ID: " << id << std::endl;
        std::cout << "Employee Code: " << code << std::endl;
        std::cout << "Name: " << firstName << " " << middleName << " " << lastName << std::endl;
        std::cout << "Gender: " << gender << std::endl;
        std::cout << "Birthdate: " << birthdate << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "Pincode: " << pincode << std::endl;
        std::cout << "Designation: " << designation << std::endl;
        std::cout << "Department: " << department << std::endl;
        std::cout << "Join Date: " << joinDate << std::endl;
        std::cout << "Job Time: " << jobTime << std::endl;
    }
};

class BookShop {
private:
    int bookNo;
    std::string bookName;
    std::string authorName;
    std::string libName;
    int pageNo;
    float bookPrice;

public:
    // Default constructor
    BookShop() {}

    // Parameterized constructor
    BookShop(int _bookNo, const std::string& _bookName, const std::string& _authorName,
             const std::string& _libName, int _pageNo, float _bookPrice)
        : bookNo(_bookNo), bookName(_bookName), authorName(_authorName),
          libName(_libName), pageNo(_pageNo), bookPrice(_bookPrice) {}

    // Display book information
    void displayInfo() const {
        std::cout << "Book Number: " << bookNo << std::endl;
        std::cout << "Book Name: " << bookName << std::endl;
        std::cout << "Author Name: " << authorName << std::endl;
        std::cout << "Library Name: " << libName << std::endl;
        std::cout << "Page Number: " << pageNo << std::endl;
        std::cout << "Book Price: $" << bookPrice << std::endl;
    }
};

int main() {
    // Example usage of Student class
    Student student1(1, "John Doe", "Male", "john@example.com", "1234567890",
                     "123 Main Street", "Cityville", 12345, "California", "USA");
    student1.displayInfo();

    // Example usage of Employee class
    Employee employee1(1001, "e0001", "John", "Middle", "Doe", "Male", "01/01/1990",
                       "456 Corporate Ave", "Metropolis", 54321, "Manager", "IT",
                       "01/01/2022", "Full-time");
    employee1.displayInfo();

    // Example usage of BookShop class
    BookShop book1(101, "The Catcher in the Rye", "J.D. Salinger", "City Library", 224, 19.99);
    book1.displayInfo();

    return 0;
}
