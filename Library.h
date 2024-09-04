#ifndef LIBRARY_H
#define LIBRARY_H
#include "Document.h"
#include "Book.h"
#include "Magazine.h"
#include <vector>
// should have a Document container to store all available books and magazines

class Library{
private:
    std::vector<Document*> content;
public:
    // Constructor
    Library();
    // Destructor
    ~Library();
    
    // List all content
    void list();

    // Method to add a Book to the library
    void add(int id, const std::string& title, const std::string& author);

    // Method to add a Magazine to the library
    void add(int id, const std::string& title, int issueNumber);

    // Search by title method
    void searchByTitle(const std::string& part) const;
};

#endif