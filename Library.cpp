#include "Library.h"
#include <iostream>

//Constructor
Library::Library() {}

//Destructor
Library::~Library() {
    // Clean up dynamically allocated memory
    for (Document* doc : content){
        delete doc;
    }
}

// Method to list all documents of the library
void Library::list(){
    for(Document* doc : content){
        doc->displayInfo();
        doc->getId();
        doc->getTitle();
    }
}

// Method to add a Book to the library
void Library::add(int id, const std::string& title, const std::string& author){
    Book* newBook = new Book(id, title, author);
    content.push_back(newBook);
}

// Method to add a Magazine to the library
void Library::add(int id, const std::string& title, int issueNumber){
    Magazine* newMagazine = new Magazine(id, title, issueNumber);
    content.push_back(newMagazine);
}

// Example method to search by title
// Const at the end of definition means that the method does not modify the state of the Library object
Document* Library::searchByTitle(const std::string& title) const {
    for(Document* doc : content){
        if(doc->getTitle() == title){
            return doc;
        }
    }
    // Warning: the function might reach end without returning a value
    // To always return something
    return nullptr;
}