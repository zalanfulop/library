#ifndef BOOK_H
#define BOOK_H

#include "Document.h"

// Derived class: Book
class Book : public Document {
private:
    std::string author;

public:
    // Constructor
    Book(int id, const std::string& title, const std::string& author);
    
    // Override the displayInfo method
    void displayInfo() const override;

    // Override the checkout method for polymorphism
    void checkout() const override;
};

#endif