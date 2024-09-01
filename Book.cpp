#include "Book.h"
#include <iostream>

// Constructor
Book::Book(int id, const std::string& title, const std::string& author) : Document(id, title), author(author) {}


// Getter
std::string Book::getAuthor() const { return author; }

// Override displayInfo method
void Book::displayInfo() const {
    std::cout << "Book ID: " << id << ", Title: " << title << ", Author: " << author << std::endl;
}

// Override checkout method to provide specific behavior for books
void Book::checkout() const {
    std::cout << "Checking out the book titled \"" << title << "\" by " << author << std::endl;
}