// In this program, I will determine how to find the square and cube values for chosen input.

#include <iostream>
using namespace std;
int Square(int);    // Declare an integer for square function
int Cube(int);      // Declare an integer for cube function

int main() {

    std::cout << "The Square of 3 is: " << Square(3) << " \n";
    std::cout << "The Cube of 3 is: " << Cube(3) << " \n";
}

int Square (int n)  // value returning function the square of 64
{
    return (n * n);
}
int Cube (int n)    // value returning function the cube of 64
{
    return (n * n * n);
}