# 🧮 Calculator Project

I have started learning C++ and this is my first project, documenting my learning journey through multiple iterations.

## 🎯 Project Evolution

### Version 1.1.0
- Simple arithmetic operations (add, subtract, multiply, divide)
- Basic input/output handling
- First steps into C++ programming

### Version 1.2.0: Current Version
- Added modulus operation
- Improved menu system
- Input validation system
- Error handling for division by zero
- Groundwork for continuous calculation feature

### Version 1.2.1: Upcoming Fixes
The following improvements are planned for the next release:

| ✅ Task                                  | Description                                            |
| --------------------------------------- | ------------------------------------------------------ |
| ❗ Fix division output logic             | Ensure output only prints after valid input            |
| ❗ Cast or restrict floats in modulus    | `%` requires integers                                  |
| ❗ Normalize operator input              | Accept `*`, `X`, etc. in `operationvalidation()`       |
| ❗ Implement continuation loop           | Allow calculator to restart without restarting program |
| ❗ Apply consistent precision formatting | Use `std::setprecision()` in all ops                   |
| ⚠️ Optional: Clean up UI                | Format output with spacing, dashes, or indentation     |
| ⚠️ Optional: Remove unused headers/code | Streamline codebase                                    |
| ⚠️ Optional: Add input range validation | Prevent odd results or overflows                       |

## ✨ Current Features
- Basic arithmetic operations (+, -, *, /)
- Modulus operation (%)
- Input validation for numbers
- Operation validation
- Division by zero handling
- Formatted output display

## 🛠️ Requirements
- A C++ compiler (e.g., g++, clang++)
- Basic knowledge of how to compile and run C++ programs

## 📝 Learnings
1. **C++ Fundamentals**
   - Input/output stream manipulation (iostream, iomanip)
   - Type casting and numeric limitations
   - Function parameter passing (by value vs reference)
   - Switch statement implementation

2. **Code Organization**
   - Function modularity for different operations
   - Input validation separation
   - Menu system implementation
   - Error handling patterns

3. **Input/Output Handling**
   - Stream failure detection (cin.fail())
   - Input buffer clearing (cin.clear(), cin.ignore())
   - Precision control with setprecision
   - Format manipulation

## 🚀 How to Run

### Compile the Program
```bash
g++ -o calculator-v1.1.0 Calculator-v1.1.0.cpp  # For version 1.1.0
g++ -o calculator-v1.2.0 Calculator-v1.2.0.cpp  # For version 1.2.0
```

### Run the executable
```bash
./calculator-v1.1.0  # Version 1.1.0
./calculator-v1.2.0  # Version 1.2.0
```

## 📁 File Structure
- Calculator-v1.1.0.cpp (Initial version)
- Calculator-v1.2.0.cpp (Current version)
- README.md
- Learning.md (Additional learning documentation)