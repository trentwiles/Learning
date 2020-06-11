// Make your own namespace!

#include <iostream>

using namespace std;

namespace tucker {
    void bark() {
        cout << "Tucker is cool. \n";
    }
}

namespace riversiderocks{
    void hello(){
        cout << "Riverside is cool!";
    }
}

using namespace tucker;
using namespace riversiderocks;


int main()
{
    bark();
    hello();
}
