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
    // Static member to hold the single instance
    static Library* instance;
    // Singleton pattern: private cons and dest
    Library();
    ~Library();
    // Variable to keep track if Library was already created
    bool created;
public:
    // Methods to create and delete Library object
    static Library* getInstance();
    static void releaseInstance();
    
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