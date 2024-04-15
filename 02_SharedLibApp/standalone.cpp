#include <iostream>
#include "SharedCode.h"

using namespace std;

int main() {
    cout << "From standalone app..." << endl;
    helloFromLib();
    return 0;
}
