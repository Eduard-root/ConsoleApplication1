#include <iostream>

using namespace std;


int main()
{
    setlocale(0, "");
    std::cout << "Hello World!\n";
    cout << "Privet vsem\n";

    string ptr;
    ptr = "privet";
    cout << ptr << endl;
    cout << "Размер " << ptr.size() << endl;
}
