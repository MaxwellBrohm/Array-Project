// Name: Maxwell Brohm
// Program Name: Array Project
// Date: 1/21/25
// Extra: All Tasks are in their own function in order to make code more organized and easier to read through

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>  // For rounding functionality

using namespace std;

// Task 1: Array of 10 Random Integers
void task1() {
    cout << "Task 1: Array of 10 Random Integers" << endl;
    vector<int> array(10);

    // Seed the random number generator
    srand(time(0));

    // Create an array of 10 random integers between 1 and 10
    for (int i = 0; i < 10; ++i) {
        array[i] = rand() % 10 + 1;  // Random number between 1 and 10
    }

    // Print the array
    cout << "Array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    // Print the array backwards
    cout << "Array backwards: ";
    for (int i = 9; i >= 0; --i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Count and print the number of even numbers in the array
    int even_count = 0;
    for (int num : array) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    cout << "Number of even numbers: " << even_count << endl;
    cout << endl;
}

// Task 2: Ice Cream Store Sales
void task2() {
    cout << "Task 2: Ice Cream Store Sales" << endl;
    vector<float> sales(5);

    // Get sales for Monday to Friday
    for (int i = 0; i < 5; ++i) {
        cout << "Enter sales for day " << i + 1 << " (Monday=1, ..., Friday=5): ";
        cin >> sales[i];
        if (sales[i] < 0) {
            cout << "Sales cannot be negative. Please enter a valid value." << endl;
            --i;  // To re-enter the sales value for this day
        }
    }

    string continue_choice;
    do {
        int day;
        cout << "Enter the day of the week (1 for Monday, 2 for Tuesday, ..., 5 for Friday): ";
        cin >> day;

        if (day >= 1 && day <= 5) {
            cout << "Total sales for day " << day << ": " << sales[day - 1] << endl;
        } else {
            cout << "Invalid day entered." << endl;
        }

        cout << "Do you wish to continue? (Yes/No): ";
        cin >> continue_choice;
    } while (continue_choice == "Yes" || continue_choice == "yes");

    cout << endl;
}

// Task 3: Array of Ages
void task3() {
    cout << "Task 3: Array of Ages" << endl;
    vector<int> ages(20);

    // Get ages of 20 people
    for (int i = 0; i < 20; ++i) {
        cout << "Enter age #" << i + 1 << ": ";
        cin >> ages[i];
        if (ages[i] < 0) {
            cout << "Age cannot be negative. Please enter a valid value." << endl;
            --i;  // To re-enter the age for this person
        }
    }

    // Count and print the number of ages greater than 15
    int age_count = 0;
    for (int age : ages) {
        if (age > 15) {
            age_count++;
        }
    }
    cout << "Number of people older than 15: " << age_count << endl;
    cout << endl;
}

// Task 4: Calculate Average Grade
void task4() {
    cout << "Task 4: Calculate Average Grade" << endl;
    vector<float> finalGrade = {85.8, 93.7, 76, 88.5, 100, 91.3};

    // Calculate the average of the grades
    float sum = 0;
    for (float grade : finalGrade) {
        sum += grade;
    }
    float average = sum / finalGrade.size();

    // Round to the nearest tenth
    average = round(average * 10) / 10;

    cout << "The average grade is: " << average << endl;
    cout << endl;
}

// Main function to run all tasks
int main() {
    task1();
    task2();
    task3();
    task4();

    return 0;
}
