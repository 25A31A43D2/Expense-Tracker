Expense Tracker (C++)

A simple command-line expense tracker built using C++.
This project allows users to add expenses, save them to a file, and view all recorded expenses with the total amount.

Features
Add new expenses
Store expenses in a text file
Load saved expenses automatically
Display all expenses
Calculate total spending
Technologies Used
C++
File Handling
Object-Oriented Programming
STL Vector
Project Structure
expense-tracker/
│
├── main.cpp
├── expenses.txt
└── README.md
How to Run
Compile
g++ main.cpp -o expense_tracker
Run
./expense_tracker

On Windows:

expense_tracker.exe
Example
1. Add Expense
2. Show Expenses
3. Exit
Enter choice: 1

Enter expense title: Food
Enter amount: 250
Expense added successfully
File Storage

Expenses are stored in:

expenses.txt

Example:

Food 250
Travel 500
Shopping 1200
Future Improvements
Delete expenses
Edit expenses
Add expense categories
Monthly reports
Date and time support
Budget tracking
