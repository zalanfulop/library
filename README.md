This project models a library. The goal of this project is to practice C++ programming and OOP principles.

Header: Declarations of classes, functions and variables - specifies the interface.
Source: Implementation of classes and functions declared in the header file. It defines how declared members work.

Getters: int getId() const; specifies that this method does not modify any members of the class. This ensures that this method can be called on const objects.
(placing const before int would mean that the return value is a const)

virtual ~ClassName(); - destructor is virtual to ensure that the correct one is called in derived classes.

When I include the header in the source file, it also includes the headers included in the header. 

If the function waits for a reference variable and I provide a variable, C++ automatically converts it to a reference.

#include - preprocessor directive

Access specifiers in inheritance: the level of accessibility of class members will be maximum as defined.

In the constructor, : is used to initialize the class members before the body of the constructor is executed.

The problem was: no constructor is defined in the derived class, as given input.no instance of overloaded function "Magazine::Magazine" matches the specified typeC/C++


