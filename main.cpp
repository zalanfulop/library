#include "Library.h"
#include <iostream>
#include <vector>

int main(){
    // create a library object
    // read books and magazines from a text file. Line by line, decide if the data corresponds to a book or a magazine

    // Initialize the library
    Library* library = new Library();
    // Add sample content to the library
    library->add(1, "1984", "George Orwell");
    library->add(2, "National Geographic", 202);

    library->list();

    //for(Document* doc : )

    // Create a collection of documents (using pointers to base class)
    //std::vector<Document*> library;

    // Add books and magazines to the library
    //library.push_back(new Book(1, "1984", "George Orwell"));
    //library.push_back(new Magazine(2, "National Geographic", 202));

    // Demonstrate polymorphism
    /*for (const auto& doc : library){
        doc->displayInfo(); // Calls the overridden method depending on the actual object type
        doc->checkout(); // Calls the overridden checkout method
    }

    for (auto& doc : library){
        delete doc;
    }*/

    return 0;

}