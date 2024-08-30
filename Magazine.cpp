#include "Magazine.h"
#include <iostream>

// Constructor
Magazine::Magazine(int id, std::string& title, int issueNumber) : Document(id, title), issueNumber(issueNumber) {}

// Override diplayInfo method
void Magazine::displayInfo() const{
    std::cout << "Magazine ID: " << id << ", Title: " << title << ", Issue: " << issueNumber << std::endl;
}

// Override checkout method to provide specific behavior for magazines
void Magazine::checkout() const {
    std::cout << "Checking out magazine titled \"" << title << "\", Issue " << issueNumber << std::endl;
}