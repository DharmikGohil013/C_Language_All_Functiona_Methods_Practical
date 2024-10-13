#include <iostream>
#include <fstream>
#include <vector>
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

// Function to delete entries based on date
void deleteEntryByDate() {
    string dateToDelete;
    cout << "Enter date of entry to delete (YYYY-MM-DD): ";
    cin >> dateToDelete;

    ifstream file("entries.txt");
    if (!file) {
        cerr << "No entries found!" << endl;
        return;
    }

    vector<string> lines;
    string line;
    while (getline(file, line)) {
        if (line.substr(0, dateToDelete.size()) != dateToDelete)
            lines.push_back(line);
    }
    file.close();

    ofstream outFile("entries.txt");
    for (const auto& l : lines)
        outFile << l << endl;
    outFile.close();

    cout << "Entry with date " << dateToDelete << " deleted successfully!" << endl;
}

// Function to delete entries based on product name
void deleteEntryByProduct() {
    string productToDelete;
    cout << "Enter product name of entry to delete: ";
    cin >> productToDelete;

    ifstream file("entries.txt");
    if (!file) {
        cerr << "No entries found!" << endl;
        return;
    }

    vector<string> lines;
    string date, product;
    double money;
    while (file >> date >> product >> money) {
        if (product != productToDelete)
            lines.push_back(date + " " + product + " " + to_string(money));
    }
    file.close();

    ofstream outFile("entries.txt");
    for (const auto& l : lines)
        outFile << l << endl;
    outFile.close();

    cout << "Entry with product " << productToDelete << " deleted successfully!" << endl;
}

int main() {
    char choice;

    do {
        cout << "1. Show all entries and add today's entry" << endl;
        cout << "2. Add a new entry" << endl;
        cout << "3. Delete entry by date" << endl;
        cout << "4. Delete entry by product" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                showAllEntries();
                //addEntry();
                break;
            case '2':
                addEntry();
                break;
            case '3':
                deleteEntryByDate();
                break;
            case '4':
                deleteEntryByProduct();
                break;
            case '5':
                cout << "Exiting program..." << endl;
                exit(0);
            default:
                cout << "Invalid choice! Please enter again." << endl;
        }
    } while (choice != '5');

    return 0;
}
