/**
 * Reviewing namespaces and how they work
**/
#include <iostream>
using namespace std; 

namespace namespace1 {
    int age = 25;
}

namespace namespace2 {
    int age = 30;
}

int main(){
    // namespaces are for us to differentiate variables with the same names
    // W/out them, we get a conflict as below:
    // int age = 25;
    // int age = 30;
    // --> error: redefinition of 'age'

    // To work with this issue, we define two namespaces 1 and 2 as above
    cout << namespace1::age << endl;
    cout << namespace2::age << endl;

    // A namespace may contain a lot of things

    // namespace std is the "standard" namespace, which contains things lke
    // string, cout, endl, etc. "using" can automatically asign std:: to 
    // those things within the standard namespace. So, we can use cout like "std::cout" 
    // w/out actually having "using namespace std;". Or, we can have using std::cout
    // instead of using namespace std at the top.

    // using the standard namespace is sometimes considered a bad practice because 
    // it includes a whole bunch of things even if you would not use nearly a half of them
    // But, it is more physical efficient

    return 0;
}