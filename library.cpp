#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<string> books;
    int choice;

    while (true) {

        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string name;
            cout << "Enter Book Name: ";
            getline(cin, name);

            books.push_back(name);
            cout << "Book added successfully!\n";
        }
        else if (choice == 2) {
            cout << "\nBooks in Library:\n";

            if (books.empty()) {
                cout << "No books available\n";
            } else {
                for (int i = 0; i < books.size(); i++) {
                    cout << i + 1 << ". " << books[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            cout << "Exiting program...\n";
            break;
        }
        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}