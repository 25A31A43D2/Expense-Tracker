#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

class Expense {
public:
    string title;
    float amount;

    Expense(string t, float a) {
        title = t;
        amount = a;
    }
};

vector<Expense> expenses;

void addExpense() {
    string title;
    float amount;

    cout << "Enter expense title: ";
    cin >> title;

    cout << "Enter amount: ";
    cin >> amount;

    expenses.push_back(Expense(title, amount));

    ofstream file("expenses.txt", ios::app);
    file << title << " " << amount << endl;
    file.close();

    cout << "Expense added successfully\n";
}

void loadExpenses() {
    ifstream file("expenses.txt");

    string title;
    float amount;

    while (file >> title >> amount) {
        expenses.push_back(Expense(title, amount));
    }

    file.close();
}

void showExpenses() {
    float total = 0;

    cout << "\nExpenses:\n";
    cout << left << setw(20) << "Title" << setw(10) << "Amount" << endl;

    for (auto &e : expenses) {
        cout << left << setw(20) << e.title << setw(10) << e.amount << endl;
        total += e.amount;
    }

    cout << "\nTotal Expense: " << total << endl;
}

int main() {
    loadExpenses();

    int choice;

    while (true) {
        cout << "\n1. Add Expense\n";
        cout << "2. Show Expenses\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                addExpense();
                break;

            case 2:
                showExpenses();
                break;

            case 3:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}