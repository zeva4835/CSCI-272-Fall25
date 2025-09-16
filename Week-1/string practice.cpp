#include <iostream>
#include <string> 
#include <vector> 
#include <cctype> //tolower() and toupper()
using namespace std;


bool caseInsensitiveCompare(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    
    for (size_t i = 0; i < str1.length(); i++) {
    if (tolower(str1[i]) != tolower(str2[i])) {
        return false;
    }
    }
    return true;
}


int main() {
/*	string firstName;
	string lastName;
	
	cout << "Enter the fisrt name: " << endl;
	cin >> firstName;
	cout << "Enter the last name: " << endl;
	cin >> lastName;
	
	string fullName = firstName + " " + lastName;
	
	cout << "The full name is: " << fullName << endl;
	
	fullName += " Jr.";
	//By useing += it adds Jr. after the name 
	cout << "With suffix (Jr.): " << fullName << endl;
	
	fullName.insert(0, "Dr. ");
	//uses the .insert() function to add Dr. at the begining 
	
	cout << "With prefix (Dr.): " << fullName << endl;
	
	
	string message = "Hello, world..."; //15 char
	int messageLength = message.length(); //uses .length() function
	int messageSize = message.size(); //uses .size() function
	
	cout << "Length: " << messageLength << endl << "Size: " << messageSize << endl;
	
	char firstChar = message[0];
	char lastChar = message[message.length()-1];
	
	cout << message << endl;
	cout << "Last Char: " << lastChar << endl << "First Char: " << firstChar << endl;
	*/
	
	string str1;
    string str2;
    
    cout << "Please enter str1: " << endl;
    cin  >> str1;
    cout << "Please enter str2: " << endl;
    cin  >> str2;
    
    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else if (str1 < str2) {
        cout << "str1 is lexicographically less than str2." << endl;
    } else {
        cout << "str1 is lexicographically greater than str2." << endl;
    }
	
	if (caseInsensitiveCompare(str1, str2)) {
        cout << "Strings are case-insensitive equal." << endl;
    } else {
        cout << "Strings are not case-insensitive equal." << endl;
    }
	
	return 0;	
}

