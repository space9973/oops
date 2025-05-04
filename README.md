# OOP Concepts in C++

This repository contains comprehensive examples and implementations of Object-Oriented Programming (OOP) concepts in C++. Each concept is demonstrated with practical examples and clear explanations.

## Table of Contents
- [Encapsulation](#encapsulation)
- [Inheritance](#inheritance)
- [Polymorphism](#polymorphism)
- [Abstraction](#abstraction)
- [Getting Started](#getting-started)
- [Repository Structure](#repository-structure)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Encapsulation
Encapsulation is the bundling of data and methods that operate on that data within a single unit (class). It helps in data hiding and protecting the internal state of an object.

### Key Features
- Private data members for data hiding
- Public methods (getters/setters) to access and modify data
- Information hiding through access specifiers
- Controlled access to class members

### Example Code
```cpp
class Car {
private:
    int model;
    int id = 1234;

public:
    string brand;
    int year;
    
    // Getter method
    int getModel() {
        return model;
    }
    
    // Setter method with validation
    void setModel(int model, int id) {
        if (this->id == id) {
            this->model = model;
        } else {
            cout << "Wrong id" << endl;
        }
    }
};
```

Example files:
- `encapulation/` directory contains detailed examples of encapsulation implementation

## Inheritance
Inheritance allows a class to inherit properties and methods from another class, promoting code reusability and establishing relationships between classes.

### Types of Inheritance
1. **Single Inheritance**
   ```cpp
   class Vehicle {
       // Base class
   };
   
   class Car : public Vehicle {
       // Derived class
   };
   ```

2. **Multiple Inheritance**
   ```cpp
   class Vehicle {
       // First base class
   };
   
   class Engine {
       // Second base class
   };
   
   class Car : public Vehicle, public Engine {
       // Derived from multiple classes
   };
   ```

3. **Multilevel Inheritance**
   ```cpp
   class Vehicle {
       // Base class
   };
   
   class Car : public Vehicle {
       // Intermediate class
   };
   
   class SportsCar : public Car {
       // Derived from intermediate class
   };
   ```

4. **Hierarchical Inheritance**
   ```cpp
   class Vehicle {
       // Base class
   };
   
   class Car : public Vehicle {
       // First derived class
   };
   
   class Truck : public Vehicle {
       // Second derived class
   };
   ```

Example files:
- `inheretence/` directory contains working examples of all inheritance types

## Polymorphism
Polymorphism allows objects to be treated as instances of their parent class rather than their actual class, enabling one interface for multiple implementations.

### Types of Polymorphism

1. **Compile-time Polymorphism**
   - Function Overloading
   ```cpp
   class Calculator {
   public:
       int add(int a, int b) {
           return a + b;
       }
       
       double add(double a, double b) {
           return a + b;
       }
   };
   ```

   - Operator Overloading
   ```cpp
   class Complex {
   public:
       Complex operator+(Complex const& obj) {
           Complex res;
           res.real = real + obj.real;
           res.imag = imag + obj.imag;
           return res;
       }
   };
   ```

2. **Runtime Polymorphism**
   - Virtual Functions
   ```cpp
   class Shape {
   public:
       virtual void draw() {
           cout << "Drawing a shape" << endl;
       }
   };
   
   class Circle : public Shape {
   public:
       void draw() override {
           cout << "Drawing a circle" << endl;
       }
   };
   ```

Example files:
- `polymorpism/` directory contains detailed examples of both types of polymorphism

## Abstraction
Abstraction is the process of hiding implementation details while showing only the essential features to the user.

### Key Features
- Abstract classes with pure virtual functions
- Interface implementation
- Hiding complex implementation details
- Providing a simple interface

### Example Code
```cpp
class AbstractCar {
public:
    virtual void startEngine() = 0;  // Pure virtual function
    virtual void stopEngine() = 0;   // Pure virtual function
};

class SportsCar : public AbstractCar {
public:
    void startEngine() override {
        cout << "Sports car engine started" << endl;
    }
    
    void stopEngine() override {
        cout << "Sports car engine stopped" << endl;
    }
};
```

Example files:
- `Abstraction/` directory contains practical examples of abstraction implementation

## Getting Started

### Prerequisites
- C++ compiler (g++, clang++, or MSVC)
- Basic understanding of C++ programming
- C++11 or later standard support

### Compilation
To compile the examples, use:
```bash
# For main examples
g++ main.cpp -o output -std=c++11

# For specific concept examples
g++ encapulation/example.cpp -o encapulation_example -std=c++11
g++ inheretence/example.cpp -o inheritance_example -std=c++11
g++ polymorpism/example.cpp -o polymorphism_example -std=c++11
g++ Abstraction/example.cpp -o abstraction_example -std=c++11
```

## Repository Structure
```
oops/
├── Abstraction/      # Abstraction examples and implementations
│   ├── example.cpp
│   └── README.md
├── encapulation/     # Encapsulation examples and implementations
│   ├── example.cpp
│   └── README.md
├── inheretence/      # Inheritance examples and implementations
│   ├── example.cpp
│   └── README.md
├── polymorpism/      # Polymorphism examples and implementations
│   ├── example.cpp
│   └── README.md
├── main.cpp          # Main implementation file with basic examples
├── main2.cpp         # Additional implementation file
└── README.md         # This documentation file
```

## Contributing
We welcome contributions to improve this repository! Here's how you can contribute:

1. Fork the repository
2. Create a new branch (`git checkout -b feature/improvement`)
3. Make your changes
4. Commit your changes (`git commit -m 'Add some feature'`)
5. Push to the branch (`git push origin feature/improvement`)
6. Open a Pull Request

Please ensure your code:
- Follows C++ best practices
- Includes proper documentation
- Has appropriate test cases
- Maintains consistent coding style

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact
For any questions, suggestions, or issues:
- Open an issue in the repository
- Email: [Your Email]
- GitHub: [Your GitHub Profile]

Feel free to reach out with any questions or suggestions for improvement! 