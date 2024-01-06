#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
   
void mainBanner();
string getWordStartingWith(char);
char isChar();

int main() {

    system("color e1");
    system("title \"while\" validation loops in class exercise       - P. Ban");
    
    char userLetter;
    string userInput;

    mainBanner();

    cout << "What letter do you want to start with? ";
    userLetter = isChar();
    cout << "\nOK, we are looking for a letter that starts with '" << userLetter << "'\n\n";

    while (true) {
        cout << "Please enter a SINGLE WORD that starts with '" << userLetter << "' [case sensitive]: ";
        userInput = getWordStartingWith(userLetter);

        cout << "\nThank you for providing the string \""<< userInput << "\" which starts with the letter '" << userLetter << "'.\n"
             << "Now lets do it again!\n\n";

        cout << "\t*****************\n\n";

    }

    system("pause");
    return 0;

}

void mainBanner()  {   
    cout << "\n"
        << "\t\t             Validate the starting letter of a string             \n"
        << "\t\t                      while validation loop                       \n"
        << "\t\t  uses the conditional operator for the customized error message  \n"
        << "\t\t            as well looping for ever for easy testing             \n"
        << "\t\t                           by P. Ban                          \n\n\n";
}

string getWordStartingWith(char userLetter) {
    string x;

    cin >> x;

    while (x[0] != userLetter) {
        cout << "\tYour word \"" << x << "\" starts with the letter '" << x[0] << "'.\n"
            << "\tYou need to have a word that starts with '" << userLetter << "'.\n"
            << "\tPlease enter an appropriate word : ";

        cin >> x;
    }

    return x;
}

char isChar() {
    char x;

    cin >> x;

    while (!(x >= 'a' && x <= 'z') && !(x >= 'A' && x <= 'Z')) {
        if (x >= '0' && x <= '9')
            cout << "  \'" << x << "\' is NOT a letter. It is a digit." << endl << "      Try again: ";
        else
            cout << "  \'" << x << "\' is NOT a letter. It is a special character." << endl << "      Try again: ";
        
        cin >> x;
    }

    return x;
}
