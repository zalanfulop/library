#include "Library.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
// character classification
#include <cctype>

bool isNumber(const std::string& str) {
    // Check if the entire string is a number
    // c cannot be modified in the loop
    // c is a reference to the character rather than a copy
    for (char const &c : str) {
        if (!std::isdigit(c)) return false;
    }
    return true;
}


int main(){
    // Initialize the library
    Library* library = new Library();

    // Open the input file
    std::ifstream inputFile("documents.txt");
    // Check if the file is successfully opened
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file!" << std::endl;
        return 1;
    }
    // Declare a string variable to store each line of the file
    std::string line;

    while (std::getline(inputFile, line)) {
        std::stringstream ss(line);
        std::string idStr, title, thirdVal;

        // Parse the line
        std::getline(ss, idStr, ',');
        std::getline(ss, title, ',');
        std::getline(ss, thirdVal, ',');

        //std::cout << idStr << title << thirdVal << std::endl;
        // Convert id string to integer
        int id = std::stoi(idStr);
        // Check if the third value is a number. 
        // If it is then convert it to an integer and use it for object creation
        if (isNumber(thirdVal)) {
            library->add(id, title, std::stoi(thirdVal));
        } else {
            library->add(id, title, thirdVal);
        }
    }

    
    inputFile.close();
    library->list();
    delete library;

    



    // Add sample content to the library
    /*library->add(1, "1984", "George Orwell");
    library->add(2, "National Geographic", 202);

    library->list();*/

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