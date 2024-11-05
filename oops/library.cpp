#include <iostream>
#include <string>
using namespace std;

class Book
{
    int bookID;
    string title;
    string author;
    bool isAvailable;

public:
    Book(int id = 0, string t = "", string a = "", bool avail = true)
        : bookID(id), title(t), author(a), isAvailable(avail) {}
    void addBook(int id, string t, string a)
    {
        bookID = id;
        title = t;
        author = a;
        isAvailable = true;
    }
    bool checkAvailability() const
    {
        return isAvailable;
    }
    void displayAvailability() const
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Status: " << (isAvailable ? "Available" : "Not Available") << endl;
    }
    int getBookID() const
    {
        return bookID;
    }
};

int main()
{
    int numBooks;
    Book library[100];
    cout << "Enter the number of books to add to the library: ";
    cin >> numBooks;
    for (int i = 0; i < numBooks; i++)
    {
        int id;
        string title, author;

        cout << "Enter details for book " << (i + 1) << ": " << endl;
        cout << "Book ID: ";
        cin >> id;
        cout << "Title: ";
        cin >> title;
        cout << "Author: ";
        cin >> author;
        library[i].addBook(id, title, author);
    }

    int checkID;
    cout << "\nEnter the Book ID to check availability: ";
    cin >> checkID;

    bool found = false;
    for (int i = 0; i < numBooks; i++)
    {
        if (library[i].getBookID() == checkID)
        {
            library[i].displayAvailability();
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Book with ID " << checkID << " not found in the library." << endl;
    }
    return 0;
}