//Name: Ji A. Monsales 1CSG Fundamentals of Programming Final Requirments
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


//The function of Hello World
void helloWorld () {
    //it shows the hello world output
    std::cout<<"Hello World!"<<std::endl;
    std::cout<<std::endl;
}

//The function for Personal Information
void personalInfo () {
    //declaring the variables
    std::string fName, lName, Address;
    int age;

    //getting user data input
    std::cout<<"First name: ";
    std::cin>>fName;
    std::cout<<"Last name: ";
    std::cin>>lName;
    std::cout<<"Current address: ";
    std::cin>>Address;
    std::cout<<"Age: ";
    std::cin>>age;

    //printing user data input
    std::cout<<"My name is " << fName + " " + lName <<" and I'm " <<age <<" and I live on " <<Address <<std::endl;
    std::cout<<std::endl;
}

//The function of Calculator
void calculator() {
    //declaring variables
    int fNum, sNum, sum;
    char choice;

    // Getting user data input
    std::cout << "First number: ";
    std::cin >> fNum;
    std::cout << "Second number: ";
    std::cin >> sNum;

    // Choosing operators using switch case statement
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> choice;

    switch(choice) {
        case '+': // Addition
            sum = fNum + sNum;
            std::cout << "The result is: " << sum << std::endl;
            break;
        case '-': // Subtraction
            sum = fNum - sNum;
            std::cout << "The result is: " << sum << std::endl;
            break;
        case '*': // Multiplication
            sum = fNum * sNum;
            std::cout << "The result is: " << sum << std::endl;
            break;
        case '/': // Division
            // Condition for the second number input is equal to zero result is undefined
            if(sNum != 0) {
                sum = fNum / sNum;
                std::cout << "The result is: " << sum << std::endl;
            } else {
                std::cout << "Undefined..." << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            break;
    }
    std::cout<<std::endl;
}

//The function for even or odd numbers checker
void evenOddChecker () {
    //declaration of variables
    int num;

    //getting user input
    std::cout<<"Number: ";
    std::cin>>num;

    //condition for if a number is even or odd
    if(num % 2 == 0) {
        std::cout<<num <<" is even." <<std::endl;
    }else {
        std::cout<<num <<" is Odd." <<std::endl;
    }
    std::cout<<std::endl;
}

//The function of Print Numbers Horizontally
void numHorizon () {
    //static data variables declaration
    int number = 20;

    //using for loop to print the numbers horizontally from 1 - 20
    for(int i = 1; i <= number; i++) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
}

//The function for Multiplication Table
void multiplicationTable () {
    //declaration of static variables
    int row = 10;
    int col = 10;

    //using for loop to complete the table
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            std::cout<<i <<" * " << j << " = " << i * j <<"\t";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}


//The function of Positive Integers
void positiveInteger () {
    //declaration of static variables
    int sum = 0;

    // Calculate the sum of integers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    // Output the result
    std::cout << "The sum of integers from 1 to 10 is: " << sum << std::endl;
    std::cout<<std::endl;
}

//The function of Calculator of the length of the array
void calLength () {
    //declaration of an array and its index using 1D array
    int arr[]  = {1,2,3,4,5,6,7,8,9};
    //calculating the length of an array
    int size = sizeof(arr) / sizeof(arr[0]);
    //printing the output
    std::cout<<"The length of an array: " <<size <<std::endl;
    std::cout<<std::endl;
}

//The function of 1D array that prints all elements;
void elements () {
    //declaration of an array and its index using 1D array
    int arr[]  = {1,2,3,4,5,6,7,8,9};
    //calculating the length of an array
    int size = sizeof(arr) / sizeof(arr[0]);
    //print all elements
    for(int i = 0; i < size; i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
}


//The function of Search in a 1D String Array
void Search () {
    //declaration of an array and its index using 1D string array
    std::string arr[5]  = {"Imok","Dante","Chopapi","Dakee","Justin"};
    //getting user input
    std::string search;
    std::cout<<"Search: ";
    std::cin>>search;
    //condition to find the inputed data from string array
    bool found = false;
    for(int i = 0; i < 5; i++){
        if(arr[i] == search){
            std::cout<<search << " is found at " << i <<std::endl;
            found = true;
            break;
        }
    }
    //condition of false if the following condition was not meet
    if(!found){
        std::cout<<search <<" is not found."<<std::endl;
    }
    std::cout<<std::endl;
}

//The function of Print String Elements in a 2D Array
void stringElement () {
    //declaring 2D array index
    std::string name[2][3] = {{"Imok", "Danti", "Roblox"},{"Dakee", "Justin", "Panto"}};

    //printing all index in 2D string array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            std::cout<<name[i][j] <<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

//The function of Find the Maximum Value in a 2D Array
void maximumValue () {
    //declaring static 2D array
    int arr[2][5] = {{1,2,3,4,19},{5,6,7,8,9}};
    int maximum = arr[0][0];

    //finding the maximum value of 2D array
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] > maximum) {
                maximum = arr[i][j];
            }
        }
    }

    //output of the maximum value
    std::cout<<"The maximum value is: " << maximum <<std::endl;
    std::cout<<std::endl;
}

//The function of Combine 1D and 2D Array Outputs
void combine () {
    // Static data: 1D array
    int arr1D[] = {1, 2, 3, 4, 5};
    int length1D = sizeof(arr1D) / sizeof(arr1D[0]);

    // Static data: 2D array
    int arr2D[2][4] = {{6, 5, 2, 7}, {8, 10, 1, 9}};
    int rows2D = sizeof(arr2D) / sizeof(arr2D[0]);
    int cols2D = sizeof(arr2D[0]) / sizeof(arr2D[0][0]);

    // Print 1D array
    std::cout << "1D Array: " <<std::endl;
    for (int i = 0; i < length1D; i++) {
        std::cout << arr1D[i] << " ";
    }
    std::cout << std::endl;
    std::cout<<std::endl;

    // Print 2D array
    std::cout << "2D Array: " << std::endl;
    for (int i = 0; i < rows2D; i++) {
        for (int j = 0; j < cols2D; j++) {
            std::cout << arr2D[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout<<std::endl;
}

//function prototypes
void helloWorld ();
void personalInfo ();
void calculator();
void evenOddChecker ();
void numHorizon ();
void multiplicationTable ();
void positiveInteger ();
void calLength ();
void elements ();
void Search ();
void stringElement ();
void maximumValue ();
void combine ();

//The main function

int main () {
    //declaring the variables and getting the user input
    int choice;

    //using do while loop to choice with out exiting
    //using switch case to choose what the user want
    do {
        std::cout<<"========Menu========"<< "\n";
        std::cout<<"Option 1: Print Hello World \n";
        std::cout<<"Option 2: Personal Information (Input data) \n";
        std::cout<<"Option 3: Calculator (Input data) \n";
        std::cout<<"Option 4: Even and Odd Checker (Conditional) (Input data) \n";
        std::cout<<"Option 5: Print Numbers Horizontally (For Loop - Static data) \n";
        std::cout<<"Option 6: Multiplication Table (For Loop - Static data) \n";
        std::cout<<"Option 7: Sum of 1 to 10 Positive Integers (For Loop - Static data) \n";
        std::cout<<"Option 8: Calculate the Length of a 1D Array (Static data) \n";
        std::cout<<"Option 9: Print All Elements of a 1D Array (Static data) \n";
        std::cout<<"Option 10: Search in a 1D String Array (Static data) \n";
        std::cout<<"Option 11: Print String Elements in a 2D Array (Static data) \n";
        std::cout<<"Option 12: Find the Maximum Value in a 2D Array (Static data) \n";
        std::cout<<"Option 13: Combine 1D and 2D Array Outputs (Static data) \n";
        std::cout<<"Option 0: Exit \n";
        std::cout<<"Enter your choice: ";
        std::cin>>choice;
        std::cout<<"====================" <<std::endl;
        std::cout<<std::endl;
        switch(choice) {
            case 1:
                helloWorld ();
            break;
            case 2:
                personalInfo ();
            break;
            case 3:
                calculator();
            break;
            case 4:
                evenOddChecker ();
            break;
            case 5:
                numHorizon ();
            break;
            case 6:
                multiplicationTable ();
            break;
            case 7:
                positiveInteger ();
            break;
            case 8:
                calLength ();
            break;
            case 9:
                elements ();
            break;
            case 10:
                Search ();
            break;
            case 11:
                stringElement ();
            break;
            case 12:
                maximumValue ();
            break;
            case 13:
                combine ();
            break;
            case 0:
                std::cout << "Exiting program..." << std::endl;
            break;
            default:
                std::cout << "Invalid choice. Please try again."<<std::endl;
            break;
        }
    } while (choice != 0);

return 0;
}
