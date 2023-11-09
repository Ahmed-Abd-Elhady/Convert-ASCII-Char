#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int user_choose;
    cout << "------------------------------------------------\n";
    cout << "1- ---------Convert ASCII VALUE TO CHAR---------\n";
    cout << "------------------------------------------------\n";
    cout << "2- ---------Convert CHAR VALUE TO ASCII---------\n";
    cout << "------------------------------------------------\n";

    cin >> user_choose;
    if (user_choose == 1)
    {
        int user_input;
        cout << "Write the ascii value do you want to Char : " << endl;
        cin >> user_input;
        cout << "Your isci number is : " << user_input << " and the chr is :  " << char(user_input) << endl;
    }
    else if (user_choose == 2)
    {
        char user_inputs;
        cout << "Write the value do you want to ascii : " << endl;
        cin >> user_inputs;
        cout << "Your chr number is : " << user_inputs << " and the isci is :  " << int(user_inputs) << endl;
    }
    else
    {
        cout << "Error";
    }

    return 0;
}

// Needed Output
//"Hello Elzero Web School I Love Programming Too Much Specially C++"
