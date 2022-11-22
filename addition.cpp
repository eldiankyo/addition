#include <iostream>

int Add (int x, int y)
{
    return (x + y);
}

int main()
{
    std::cout << "A két szám összege: " << Add(3, 4) << "\n";
    return 0;
}