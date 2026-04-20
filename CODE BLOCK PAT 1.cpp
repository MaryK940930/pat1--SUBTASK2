#include <iostream>
using namespace std;

int main()
{
    //Temperature variables
    int temp1;
    int temp2;
    int temp3;

    cout << "Enter the first temperature reading: ";
    cin >> temp1;

    cout << "Enter the second temperature reading: ";
    cin >> temp2;

    int increase = temp2 - temp1;

    if (increase > 50) {
        cout << " Reduce fryer heat before taking the third reading." << endl;
    }
    else if (increase < 10) {
        cout << "Increase the fryer heat before taking the third reading." << endl;
    }

    cout << "Enter the third temperature reading: ";
    cin >> temp3;

    if (temp3 >= 150 && temp3 <= 190) {
        cout << "You may start frying the Magwinyas." << endl;// Oil is ready 
    }
    else {
        cout << "Oil is not ready for frying!" << endl;
    }

    return 0;
}
