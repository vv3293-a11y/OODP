#include <iostream>
using namespace std;

class Book
{
protected:
    int book_id;
    string book_name;

public:
    void getBook()
    {
        cout << "Enter Book ID: ";
        cin >> book_id;
        cout << "Enter Book Name: ";
        cin >> book_name;
    }
};

class Library : public Book
{
private:
    string author;
    string issue_status;

public:
    void getLibrary()
    {
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Issue Status (Issued/Available): ";
        cin >> issue_status;
    }

    void display()
    {
        cout << "\nBook ID: " << book_id;
        cout << "\nBook Name: " << book_name;
        cout << "\nAuthor: " << author;
        cout << "\nIssue Status: " << issue_status;
    }
};

int main()
{
    Library l;
    l.getBook();
    l.getLibrary();
    l.display();
}