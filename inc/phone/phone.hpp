#ifndef PHONE_HPP
#define PHONE_HPP

#include <string>
#include <vector>

class Phone {
public:
    Phone(const std::string& owner, const std::string& brand, const std::string& model, const std::string& serialNumber);
    ~Phone();

    // Copy constructor
    Phone(const Phone& other);

    // Move constructor
    Phone(Phone&& other) noexcept;

    // Getters
    std::string getBrand() const;
    std::string getModel() const;
    std::string getOwner() const;
    std::vector<std::string> getCalls() const;

    // Setters
    void setBrand(const std::string& brand);
    void setModel(const std::string& model);

    void call(const Phone& phone);

    void displayCallHistory() const;

private:
    std::string owner;
    std::string brand;
    std::string model;
    std::string* serialNumber;
    double price;
    std::vector<std::string> calls;
};

#endif // PHONE_HPP