#include "Magazine.h"
#include <iostream>

// Constructor
Magazine::Magazine(int id, const std::string& title, int issueNumber) : Document(id, title), issueNumber(issueNumber) {
    // log or debug information when an object is created
}

// Override diplayInfo method
void Magazine::displayInfo() const{
    std::cout << "Magazine ID: " << id << ", Title: " << title << ", Issue: " << issueNumber << std::endl;
}

// Override checkout method to provide specific behavior for magazines
void Magazine::checkout() const {
    std::cout << "Checking out magazine titled \"" << title << "\", Issue " << issueNumber << std::endl;
}