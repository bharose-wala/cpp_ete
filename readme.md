### MCQ
q29
When should you use a for loop and when should you use a while loop in C++? (Select all that apply) 
(1 Point)

A) Use a for loop when the number of iterations is known in advance, such as iterating over a fixed range or a sequence (e.g., i = 0 to n-1).

B) Use a while loop when the number of iterations is unknown, and you need to loop until a specific condition is met (e.g., reading input until EOF or waiting for a flag).

C) The for loop is only used for counting, while the while loop can only be used when you need to check a condition before each iteration.

D) Use a for loop when you need more flexibility to handle dynamic conditions that change during the loop’s execution.

E) Use a while loop when the loop should execute at least once, even if the condition is false at the start (use a do-while loop instead for this purpose).

q28
What is an object file in C/C++? (Select all that apply) 
(1 Point)

A) An object file is the result of compiling a source code file (.c or .cpp), containing machine code that is not yet linked into an executable.

B) An object file is created when a program is executed and contains the final executable code.

C) An object file typically has the .obj or .o extension, and it contains compiled code but is not fully executable until linked with other object files and libraries.

D) Object files are used to store only the header files of a program.

E) Object files are platform-independent and can be executed without further compilation.

Q27
What is the difference between scanf and cin in C++? (Select all that apply) 
(1 Point)

A) scanf is a C-style input function, while cin is a C++-style, more modern input function.

B) scanf requires format specifiers (like %d, %f, %s) to specify the type of input, while cin automatically detects the input type based on the variable type.

C) scanf is generally faster than cin, but it can be unsafe when reading strings, as it doesn't automatically handle buffer overflow.

D) cin is faster than scanf because it handles the input more efficiently.

E) cin is safer and more type-aware than scanf, especially when dealing with different input types.

Q26
Why does integer overflow at the endpoint in C++ result in a negative value? (Select all that apply) 
(1 Point)

A) C++ integers are stored using two's complement representation, where the leftmost bit indicates the sign of the number. When overflow occurs, the sign bit flips, causing the value to become negative.

B) C++ automatically expands the size of integer variables when overflow occurs, so the value doesn't wrap around.

C) When the maximum value is exceeded, the binary pattern wraps around to the lowest possible value, causing the integer to become negative.

D) C++ throws an error when an integer exceeds its maximum range, preventing overflow from occurring.

E) Integer overflow causes the binary sequence to "roll over," with the value wrapping around to the negative side of the range because of the way binary arithmetic is handled by hardware.


q18
Regarding If-Else-If, which of the following statements is correct? (Select all that apply)
(1 Point)

A) If-Else-If checks conditions sequentially, from top to bottom, and executes the block where the first true condition is found.

B) If multiple conditions are true, the block of code for the last true condition is executed.

C) If-Else-If always checks all conditions, even if the first one is true.

D) If-Else-If can be used to execute only one block of code based on multiple conditions.


q19
What is the function of the # sign in C/C++? (Select all that apply) 
(1 Point)

A) The # sign tells the preprocessor to include header files before the compilation starts.

B) The # sign defines macros and constants that can be used throughout the program.

C) The # sign is used to perform conditional compilation, allowing parts of code to be included or excluded based on certain conditions.

D) The # sign is used to call functions directly from the preprocessor.

E) The preprocessor modifies the code before sending it to the compiler.


q20
Why would you define an int instead of using float in C/C++? (Select all that apply) 
(1 Point)

A) float is more efficient than int when storing whole numbers.

B) float cannot exactly represent many whole numbers due to binary approximation.

C) int is more precise when working with whole numbers.

D) int is preferred because it uses less memory than float.

E) float is useful for representing both whole and fractional numbers, while int is used for whole numbers only.


q21
Why is printf included in <stdio.h> but cout is included in <iostream> in C++? (Select all that apply) 
(1 Point)

A) printf is from the C language and is part of the C standard library for formatted output, while cout is specific to C++ and is part of the C++ standard library for stream-based output.

B) cout is an object of the ostream class, which uses object-oriented concepts like classes and operator overloading, which are not available in C.

C) C++ includes printf for backward compatibility with C, but cout is unique to C++ and cannot be used in C.

D) printf is used for both formatted output and input, while cout is only for output.

E) cout is defined in <stdio.h> because it is a standard function in C.


q22
What is the difference between a global variable and a local variable? (Select all that apply) 
(1 Point)

A) A global variable is declared outside of any function and can be accessed by any function in the program, while a local variable is declared inside a function and can only be accessed within that function.

B) A global variable is created each time the program runs, whereas a local variable exists only during the execution of the function in which it is declared.

C) Local variables can be accessed by any function, while global variables can only be accessed within the function they are declared in.

D) Global variables are stored in the heap memory, while local variables are stored in the stack memory.

E) Local variables are visible to all parts of the program, while global variables are limited to the function in which they are declared.


q23
What are the key differences between the main() function and sub-functions in C++? (Select all that apply) 
(1 Point)

A) The main() function is the starting point of the program, while sub-functions are used to perform specific tasks and can be called from main() or other functions.

B) The main() function always returns an integer (int), while sub-functions can have different return types such as int, void, float, etc.

C) The main() function is automatically called when the program starts, while sub-functions must be explicitly called from the program.

D) Sub-functions are required for every C++ program, but the main() function is optional if no output is needed.

E) Sub-functions can be defined anywhere in the program, but the main() function must be defined at the top of the code.


q24
What are the key differences between a compiler and an interpreter? (Select all that apply) 
(1 Point)

A) A compiler translates the entire source code into machine code at once, whereas an interpreter translates the source code line by line.

B) A compiler generates an executable file that can be run independently, while an interpreter directly executes the source code without generating a separate executable.

C) Compilers are slower than interpreters because they translate the code line by line.

D) Interpreters require the source code to be translated again each time it is run, while compilers only need to compile the source code once.

E) Compilers typically offer faster execution of code since the translation happens beforehand, while interpreters are slower due to real-time translation.


q25
Why do we get a garbage value when printing a variable without assigning a value to it? (Select all that apply) 
(1 Point)

A) Uninitialized variables in C++ contain random values because memory allocated to them may have been used previously by other parts of the program.

B) Garbage values occur because the compiler automatically assigns a default value to uninitialized variables.

C) When a variable is declared but not initialized, it does not have a well-defined value, so the memory location it occupies contains leftover data from previous program executions.

D) Uninitialized variables are treated as null, so when printed, they show as garbage values.

E) The garbage value is caused by the operating system and is unrelated to how variables are handled in C++.

Q16
Which of the following statements are true about modular and non-modular code? (Select all that apply)
(1 Point)

A) Modular code improves readability and maintainability by organizing code into smaller, self-contained units.

B) Non-modular code is typically easier to understand since all logic is in a single block of code.

C) Modular code allows for better reusability of code components across different projects or parts of the program.

D) Non-modular code is generally more flexible when scaling up a program.

E) Modular code makes it easier to debug individual parts of the program since each module can be tested independently.


q17
Which of the following statements about using return 0; in main() are correct? (Select all that apply) 
(1 Point)

A) return 0; indicates successful program termination.

B) In modern C++, writing return 0; in main() is mandatory.

C) The purpose of return 0; is to send an exit status to the operating system.

D) Modern C++ compilers automatically add return 0; to main() if the programmer omits it.

E) return 0; is used to indicate that the program encountered an error.




###
multipal hai sabke correct bhrj do







