using namespace std;
#include <iostream>
#include <string>

int intValidation(string inputMessage)
{
    bool loopControl = true;
    string rawValue;
    while (loopControl)
    {
        cout << inputMessage << endl;
        cin >> rawValue;
        try
        {
            int convertedValue = stoi(rawValue);
            loopControl = false;
            return convertedValue;
        }
        catch (const std::exception&)
        {
            cout << "Value " << rawValue << " couldn't be converted to Int, Try again" << endl;
        }
    }
}

int main()
{
    bool loopControl = true;
    while (loopControl)
    {
        int age = intValidation("Enter your age (this only works for ages 18 - 40): \n");
        if (age < 18 || age > 40)
        {
            cout << "Sorry this only works for ages between 18 and 40, enter a different age" << endl;
        }
        else
        {
            bool secondLoopControl = true;
            while (secondLoopControl)
            {
                int timeMachineInput = intValidation("Choose how far you want to go into the future. 1. 10 Years, 2. 20 Years, 3. 30 Years, 4. 40 Years, 5. 50 Years: \n");
                if (timeMachineInput == 1)
                {
                    secondLoopControl = false;
                    int newAge = age + 10;
                    cout << "Your age in 10 years is " << newAge << endl;
                    loopControl = false;
                }
                else if (timeMachineInput == 2)
                {
                    secondLoopControl = false;
                    int newAge = age + 20;
                    cout << "Your age in 20 years is " << newAge << endl;
                    loopControl = false;
                }
                else if (timeMachineInput == 3)
                {
                    secondLoopControl = false;
                    int newAge = age + 30;
                    cout << "Your age in 30 years is " << newAge << endl;
                    loopControl = false;
                }
                else if (timeMachineInput == 4)
                {
                    secondLoopControl = false;
                    int newAge = age + 40;
                    cout << "Your age in 40 years is " << newAge << endl;
                    loopControl = false;
                }
                else if (timeMachineInput == 5)
                {
                    secondLoopControl = false;
                    int newAge = age + 50;
                    cout << "Your age in 50 years is " << newAge << endl;
                    loopControl = false;
                }
                else
                {
                    cout << "You need to enter a number between 1 and 5, Try Again" << endl;
                }
            }
            
        }
    }
    

}

