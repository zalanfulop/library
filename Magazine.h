#ifndef MAGAZINE_H
#define MAGAAZINE_H
#include "Document.h"

// Derived class from Document
class Magazine : public Document{
private:
    int issueNumber;
public:
    // Constructor
    Magazine(int id, std::string& title, int issueNumber);

    // Override the displayInfo method
    void displayInfo() const override;

    // Override the checkout method for polymorphism
    void checkout() const override;

};

#endif