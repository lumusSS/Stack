#include <iostream>

#include "stack.hpp"

using namespace std;

int main()
{

    Stack stack;

    stack.push(0.1f);
    stack.push(0.5f);
    stack.push(0.04f);
    stack.push(0.001f);

    cout << "Size: " << stack.size() << endl;
    cout << "Last element: " << stack.get() << endl;

    stack.pup();

    cout << "Size: " << stack.size() << endl;
    cout << "Last element: " << stack.get() << endl;

    stack.clear();

    cout << "Size: " << stack.size() << endl;
    cout << "Last element: " << stack.get() << endl;

    return 0;
}