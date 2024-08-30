#include "Document.h"
#include <iostream>

// Constructor
Document::Document(int id, const std::string& title) : id(id), title(title) {}

// Virtual destructor
Document::~Document() {}

// Getters
int Document::getId() const {return id;}
std::string Document::getTitle() const {return title;}

// Polymorphic method (can be overridden in derived classes)
void Document::checkout() const {
    std::cout << "Checking out document: " << title << std::endl;
}