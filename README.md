# 💻 C++ EXPERIMENTS

A curated collection of C++ programs for practice and learning, designed with simplicity and clarity in mind.

---

## 👨‍🎓 Student Information

- **Name:** Updesh Arora  
- **PRN:** 24070123124  
- **Branch:** ENTC  
- **Class:** B-3

---

# EXP_11_OVERLOADING.cpp
# Aim: To study and implement Constructor Overloading
# Software used:
Visual Studio
# Theory:

In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

+ Overloaded constructors essentially have the same name (exact name of the class) and different by number and type of arguments.
A constructor is called depending upon the number and type of arguments passed.

+ While creating the object, arguments must be passed to let compiler know, which constructor needs to be called. 

n C++, Operator overloading is a compile-time polymorphism. It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.

In this article, we will further discuss about operator overloading in C++ with examples and see which operators we can or cannot overload in C++.

<ins>C++ Operator Overloading</ins>:
Operator Overloading in C++ is a feature that allows you to redefine the way operators work for user-defined types (like classes). It enables you to give special meaning to an operator (e.g., +, -, *, etc.) when it is used with objects of a class

<ins>Benefits of Constructor Overloading</ins>:

Constructor Overloading provides various benefits, making it an essential feature for creating flexible and efficient classes.

1. Flexibility in Object Initialization
It gives you multiple ways of initializing an object or Multiple Initialization Options.

2. Cleaner and Readable Code with enhanced Code Maintainability
By providing different ways of initializing an object, it reduces the need for multiple setter methods or complex initialization logic, avoids redundancy, and provides simpler object creation, which ultimately gives cleaner and more readable code and easier to modify.

3. Encapsulation of Initialization Logic
It also encapsulates the initialization logic within the constructor, which means the initialization logic is managed inside the constructor rather than being spread across various methods or outside the class.

4. Simplifies Object Cloning (Copy Constructors)
Constructor overloading allows to defined copy constructor to handle both shallow and deep copying objects, this makes sure that the object is easily copied.
# Implementation:
To demonstrate Constructor Overloading in C++ the following cases has been used,
+ Constructor overloading using volume and area calculator
+ Object overloading
+ Operator Overloading
# Conclusion:
The above codes demonstated the use of COnstructor Overloading in C++.
