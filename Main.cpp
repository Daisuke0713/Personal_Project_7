#include <iostream>
#include "header.h"

int main() {

    // header files can give you the pre-definitions of aruavles, functions, and etc
    // among different cpp files

    // Now, we have the declaration of the function ten above main (needs to be defined
    // prior to be used) and the actual implementation of it after the main()
    std::cout << ten(20) << std::endl;
    
    // If we want to use this function in another file, we can use "header file"
    // of this cpp file which can represent the functions included in this cpp file
    // and allow us to use them else where without actually re-defining them
    return 0;
}