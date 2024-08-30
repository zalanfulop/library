#include "Book.h"
#include "Magazine.h"
#include <iostream>
#include <vector>

int main(){
    // Create a collection of documents (using pointers to base class)
    std::vector<Document*> library;

    // Add books and magazines to the library
    library.push_back(new Book(1, "1984", "George Orwell"));
    library.push_back(new Magazine(2, "National Geographic", 202));

    // Demonstrate polymorphism
    for (const auto& doc : library){
        doc->displayInfo(); // Calls the overridden method depending on the actual object type
        doc->checkout(); // Calls the overridden checkout method
    }

    for (auto& doc : library){
        delete doc;
    }

    return 0;

}