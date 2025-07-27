# 🧮 Calculator Project

I have started learning C++ and this is my first project, documenting my learning journey through multiple iterations.

## 🎯 Project Evolution

### Version 1: Basic Calculator
- Simple arithmetic operations (add, subtract, multiply, divide)
- Basic input/output handling
- First steps into C++ programming

### Version 2: Improved Implementation
- Enhanced error handling
- Better code organization
- More robust input validation

### Version 3: Current Implementation
- Added modulus operation
- Improved menu system
- Input validation system
- Error handling for division by zero
- Groundwork for continuous calculation feature

## ✨ Features
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

## 🔧 Version 3 Known Issues & Future Improvements

| ✅ Task                                  | Description                                            |
| --------------------------------------- | ------------------------------------------------------ |
| ❗ Fix division output logic             | Line 61: Fix precision setting and output flow         |
| ❗ Cast or restrict floats in modulus    | Line 69: Modulus currently accepts floats but needs integers |
| ❗ Normalize operator input              | Line 38: Expand to accept `*`, `X`, etc.              |
| ❗ Implement continuation loop           | Uncomment and fix lines 105-109 for program restart   |
| ❗ Apply consistent precision formatting | Add std::setprecision() across all operations         |
| ⚠️ Optional: Clean up UI                | Format output with consistent spacing/dashes          |
| ⚠️ Optional: Remove unused headers/code | Streamline includes and remove commented code         |
| ⚠️ Optional: Add input range validation | Prevent numeric overflow in calculations              |

## 🚀 How to Run

### Compile the Program
```bash
g++ -o calculator calculator.cpp   # For version 1
g++ -o calculator-v2 Calculator-v2.cpp  # For version 2
g++ -o calculator-v3 Calculator-v3.cpp  # For version 3
```

### Run the executable
```bash
./calculator     # Version 1
./calculator-v2  # Version 2
./calculator-v3  # Version 3
```

## 📁 File Structure
- calculator.cpp (Version 1)
- Calculator-v2.cpp (Version 2)
- Calculator-v3.cpp (Version 3)
- README.md
- Learning.md (Additional learning documentation)