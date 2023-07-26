
// syntax error occurs when the compiler doesn't understand the code and it violates the rules of programming langauge syntax, it's like
// someone suddenly starts to speak in another langauge or violates the grammer and structure of the language
// syntax errors occur during the compilation proccess 

#include <iostream>
int mian(){
   // syntax error: writing mian instead if main
    return 0;
}

// --------------------------------------------------------------------------------------------------------------------------------------

// Compiler errors occur when the code is syntactically correct but does not conform to the language semantics
// or when there are issues during the compilation process, compiler errors also occur during the compilation process

#include <iostream>
int main(){
   int x;
   sum = x + y;

   // notice that this code is correct syntactically, but sum and y variables is not defined or declared will cause 
   // a compiler error 
}

// --------------------------------------------------------------------------------------------------------------------------------------


// Runtime errors occur when the code is successfully compiled but encounters an issue while the program is running.
#include <iostream>

int main() {
    int x = 10;
    int y = 0;
    int result = x / y; // Division by zero
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// here the code has no syntax or compiler erros, so there is no error during the compilation process
// here when we divide an integer by 0 the problems occurs This results in a runtime error known as "division by zero" or "floating-point exception,"

// syntax errors = violate the rules of programming langauge syntax (errors are caught by the compiler during the compliation process)
// compiler erros = semantic erros, errors beyond syntax  (errors are caught by the compiler during the compliation process)
// runtime erros = no syntax erros, no compiler errors, erros occur during the runtime (runtime error)


