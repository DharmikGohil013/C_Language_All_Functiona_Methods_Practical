#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to add an entry to the file
void addEntry() {
    ofstream file("entries.txt", ios::app);
    if (!file) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }
    string date, product;
    double money;

    cout << "Enter date (YYYY-MM-DD): ";
    cin >> date;
    cout << "Enter product name: ";
    cin >> product;
    cout << "Enter money: ";
    cin >> money;

    file << date << " " << product << " " << money << endl;
    cout << "Entry added successfully!" << endl;
    file.close();
}

// Function to display all entries from the file
void showAllEntries() {
    ifstream file("entries.txt");
    if (!file) {
        cerr << "No entries found!" << endl;
        return;
    }
    string date, product;
    double money;

    cout << "Date\t\tProduct\t\tMoney" << endl;
    while (file >> date >> product >> money) {
        cout << date << "\t" << product << "\t\t" << money << endl;
    }
    file.close();
}

int main() {
    char choice;

    do {
        cout << "1. Show all entries and add today's entry" << endl;
        cout << "2. Add a new entry" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                showAllEntries();
                addEntry();
                break;
            case '2':
                addEntry();
                break;
            case '3':
                cout << "Exiting program..." << endl;
                exit(0);
            default:
                cout << "Invalid choice! Please enter again." << endl;
        }
    } while (choice != '3');

    return 0;
}
