// Make your own namespace!

#include <iostream>

using namespace std;

namespace tucker {
    void bark() {
        cout << "Tucker is cool.";
    }
}

using namespace tucker;

int main()
{
    bark();
}
