#include <iostream>
#include "phone/phone.hpp"

// Constructor
Phone::Phone(const std::string& owner, const std::string& brand, const std::string& model)
    : owner(owner), brand(brand), model(model) {
        std::cout << "Phone constructor called!\n";
    }

// Destructor
Phone::~Phone() {
    std::cout << "Phone destructor called!\n";
}

// Copy constructor
Phone::Phone(const Phone& other)
    : owner(other.owner), brand(other.brand), model(other.model), calls(other.calls) {
        std::cout << "Phone copy constructor called!\n";
    }

// Move constructor

Phone::Phone(Phone&& other) noexcept
    : owner(std::move(other.owner)), brand(std::move(other.brand)), model(std::move(other.model)), calls(std::move(other.calls)) {
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
}