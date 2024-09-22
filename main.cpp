// Name: Mojiboye Emmanuel Oluwole
// Matric Number: 21/52ha090
// Department: Computer Science
// Course code: CSC212



// Importing the necessary libraries
#include <iostream>
// importing a library from C to enable me in using the tolower() method
#include <cmath>
#include <cctype>

using namespace std;

int main()
{

        cout << "Welcome to the Quadratic Solver Application" << endl;
        cout << " " << endl;
        // Declaring the needed variables for application
        float a = 0, b = 0, c = 0;
        float discrimnant = 0, root1 = 0, root2 = 0;

        //Asking users to enter the values for a, b, c
        cout << "Enter the value for a, b, c: " << endl;
        cin >> a;

        cin >> b;

        cin >> c;

        // Determining the Discrimnant


        cout << "Now Lets solve";
        cout << " " << endl;
        cout << " " << endl;
        discrimnant = b * b - 4* a * c;

        // Finding the values
        if(discrimnant > 0)
        {
            root1 = (-b + sqrt(discrimnant)) / (2 * a);
            root2 = (-b - sqrt(discrimnant)) / (2 * a);
            cout << "Roots are real and distinct root"<< endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        }
        else if(discrimnant == 0)
        {
            root1 = -b / (2 * a);
            cout << "Roots are real and equal root"<< endl;
            cout << "Root 1 = Root 2 = " << root1 << endl;
        }
        else
        {
            float realAspect = -b / (2 * a);
            float imaginaryAspect = sqrt(-discrimnant) / (2 * a);
            cout << "Roots are complex"<< endl;
            cout << "Root 1 = "<< realAspect << "  + " << imaginaryAspect << "i" << endl;
            cout << "Root 2 = "<< realAspect << "  - " << imaginaryAspect << "i" << endl;
        }

        cout << " " << endl;
        cout << " " << endl;

        // Asking whether users would like to run application again

        string userAnswer;
        cout << " " << endl;
        cout << " Would you like to go again? " << endl;
        cin >> userAnswer;

        // Determining whether user would like to continue with the application.
        if(tolower(userAnswer[0])== 'y')
        {
            cout << " " << endl;
            cout << "Let's go again";
            cout << " " << endl;
            cout << " " << endl;
            main();
        }
        else if(tolower(userAnswer[0])== 'n')
        {

            cout << " " << endl;
            cout << "Application Terminated, Goodbye My Dear User";
        }

       else
        {
            // When user enters an unexpected value, to avoid the program from breaking, it will just run the main() function again torestart application
            cout << " " << endl;
            cout << " Oops! I didn't get that, please try again " << endl;

            cout << " " << endl;
            cout << " " << endl;
            main();
        }



    return 0;
}
