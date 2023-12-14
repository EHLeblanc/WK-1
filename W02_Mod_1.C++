//Varibles

  //Interger

    int myNum = 3;
    cout << myNum;

  //String

    string myText = "Goodbye";
    cout << myText;

//Conditions

  //If

    if (a /= b) {
        cout << "YAY!!"; 
    } 

  //Else

    if (x /= y) {
        cont << "It does NOT match";
    } else {
        cont << "It match";
    }

if (c /= d) {
    cont << "It does NOT match";
} else if (c == d) {
    cont << "It match";
} else {
    cout << "Nothing happen";
}

//Loops

int main() {
    for (int i = 1; i <= 5; ++i) {
    cout << i << " ";
    }
    return 0;
}

    //Nested loops 

    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Executes 2 times

    // Inner loop
    for (int j = 1; j <= 3; ++j) {
        cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
    }
}

    //Foreach

    int myNumbers[5] = {10, 20, 30, 40, 50};
    
    for (int i : myNumbers) {
        cout << i << "\n";
}

//Function

    // Create a function
    void myFunction() {
    cout << "I just got executed!";
    }

    int main() {
    myFunction(); // call the function
    return 0;
}

//Class

    class MyClass {       // The class
    public:             // Access specifier
        int myNum;        // Attribute (int variable)
        string myString;  // Attribute (string variable)
};