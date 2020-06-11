#include <iostream>

using namespace std;

namespace riverside{
  void ok() {
    cout << "Another example of namespaces, this time with saying using namespace!";
  }
}

int main() {
  riverside::ok();
}
