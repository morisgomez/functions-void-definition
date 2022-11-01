#include <iostream>
using namespace std;

//good practice to put entire definition of function above main to avoid using prototypes (looks like it can get messy).
void sumInputs(int numOne, int numTwo, int numThree, int numFour)
{
    cout << "your sum is " << (numOne + numTwo + numThree + numFour);
}

int main ()
{
    cout << "Enter 4 integers and their sum will show: ";
    int inputOne, inputTwo, inputThree, inputFour;
    cin >> inputOne >> inputTwo >> inputThree >> inputFour;
    sumInputs(inputOne, inputTwo, inputThree, inputFour);
    //the parameters of the function are assigned the inputs of user. EX: numOne is assigned inputOne which is an int.
    return 0;
}
