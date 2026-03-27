#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min;
    cin >> num1 >> num2 >> num3;

    min = num1;
    if (min > num2){
        min = num2;
    }
    if (min > num3){
        min = num3;
    }
    
    // Use the following statements to print output
    cout << "The smallest number is " << min << endl;
}
