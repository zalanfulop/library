#ifndef DOCUMENT_H //if not defined
#define DOCUMENT_H
#include <string>

// Base class: Document
class Document{
protected:
    std::string title;
    int id;

public:
    // Constructor
    Document(int id,  const std::string& title);

    // Virtual destructor for proper cleanup of derived classes
    virtual ~Document();

    // Getters
    int getId() const;
    std::string getTitle() const;

    // Virtual method to be overridden in derived classes
    virtual void displayInfo() const = 0;

    // Polymorphic method
    virtual void checkout() const;
};

#endif