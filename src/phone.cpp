#include <iostream>
#include "phone/phone.hpp"

// Constructor
Phone::Phone(const std::string& owner, const std::string& brand, const std::string& model, const std::string& serialNr)
    : owner(owner), brand(brand), model(model) {
        serialNumber = new std::string(serialNr);
        std::cout << owner << "'s phone constructor called!\n";
    }

// Destructor
Phone::~Phone() {
    std::cout << owner << "'s phone destructor called!\n";
    delete serialNumber;
}

// Copy constructor
Phone::Phone(const Phone& phone)
    : owner(phone.owner), brand(phone.brand), model(phone.model), calls(phone.calls) {
        serialNumber = new std::string(*phone.serialNumber); // Deep copy
        std::cout << "Phone copy constructor called!\n";
    }

// Move constructor

Phone::Phone(Phone&& phone) noexcept
    : owner(std::move(phone.owner)), brand(std::move(phone.brand)), model(std::move(phone.model)), serialNumber(phone.serialNumber), calls(std::move(phone.calls)) {
        phone.serialNumber = nullptr;
        std::cout << "Phone move constructor called!\n";
}

// Getters
std::string Phone::getOwner() const {
    return owner;
}

std::string Phone::getBrand() const {
    return brand;
}

std::string Phone::getModel() const {
    return model;
}

std::string Phone::getSerialNumber() const {
    return *serialNumber;
}

std::vector<std::string> Phone::getCalls() const {
    return calls;
}

// Setters
void Phone::setBrand(const std::string& brand) {
    this->brand = brand;
}

void Phone::setModel(const std::string& model) {
    this->model = model;
}


// Method to add a call to the call history
void Phone::call(const Phone& phone) {
    std::cout << owner << " is calling " << phone.owner << "\n";
    calls.push_back(phone.owner );
}

// Method to display the number of calls and the call history
void Phone::displayCallHistory() const {
    std::cout << "Call history for " << owner << ":\n";
    std::cout << "Number of calls: " << calls.size() << "\n";
    for (const auto& call : calls) {
        std::cout << call << "\n";
    }
    std::cout << "\n";
}