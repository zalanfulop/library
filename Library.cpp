#include "Library.h"
#include <iostream>

// Initialize static member
Library* Library::instance = nullptr;

//Constructor
Library::Library() : created(false){
    created = true;
}

//Destructor
Library::~Library() {
    // Clean up dynamically allocated memory
    for (Document* doc : content){
        delete doc;
    }
}

// Method to initialize a Library object
Library* Library::getInstance(){
    if (instance == nullptr){
        instance = new Library();
    } else {
        std::cerr << "Library object already created once." << std::endl;
    }
    return instance;
}

// Method to delete a Library object
void Library::releaseInstance() {
    if (instance != nullptr) {
        delete instance;
        instance == nullptr;
    }
}


// Method to list all documents of the library
void Library::list(){
    for(Document* doc : content){
        doc->displayInfo();
        //doc->getId();
        //doc->getTitle();
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
/*Document* Library::searchByTitle(const std::string& title) const {
    for(Document* doc : content){
        if(doc->getTitle() == title){
            return doc;
        }
    }
    // Warning: the function might reach end without returning a value
    // To always return something
    return nullptr;
}*/

// Search by title: 
// Input: character or a string, Output: A document with a title containing the input
// Example: The book titled 1984 by George Orwell is present in the library. The user searchs for '98', the method returns the forementioned document.
void Library::searchByTitle(const std::string& part) const {
    for (Document* doc : content) {
        if (doc->getTitle().find(part) != std::string::npos) {
            // npos is effectively an indicator for 'not found'
            doc->displayInfo();
        }
    }
}