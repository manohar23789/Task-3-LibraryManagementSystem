#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Book {
	string title;
	string author;
	int year;
};
class Library {
private:
	vector<Book> books;
	
public:
	void addBook(const Book& book) {
		books.push_back(book);
		cout<<"Book added successfully!\n";
	}
	void displayBooks() {
		if (books.empty()) {
			cout<<"No books in the library.\n";
			return;
		}
		cout<<"Library Books:\n";
		cout<<"----------------------------------------\n";
		cout<<"Title\t\tAuthor\t\tYear\n";
		cout<<"----------------------------------------\n";
		
			cout<<book.title << "\t\t" << book.author << "\t\t" << book.year << "\n";
		}
		cout<<"----------------------------------------\n";
	}
	void searchBook(const string& title) {
		for (const Book& book : books) {
		     if (book.title == title) {
			    cout<<"Book found:\n";
				cout<<"Title:" << book.title << "\n";
				cout<<"Author:" << book.author << "\n";
				cout<<"Year:" << book.year << "\n";
				return;
		}
	}
	cout <<"Book not found.\n";
}
};
int main() {
	Library library;
	while (true) {
		cout<<"\nLibrary Management System\n";
		cout<<"1.Add Book\n";
		cout<<"2.Display Book\n";
		cout<<"3.Search Book\n";
		cout<<"4.Exit\n";
		cout<<"Enter your choice:";
		int choice;
		cin>>choice;
		switch (choice) {
			case 1: {
				Book newBook;
				cout<<"Enter Title:";
				cin.ignore();
				getline(cin, newBook.title);
				cout<<"Enter Author:";
				getline(cin, newBook.author);
				cout<<"Enter Year:";
				cin>>newBook.year;
				library.addBook(newBook);
				break;
			} 
			case 2:
				library.displayBooks();
				break;
			case 3: {
				string searchTitle;
				cout<<"Enter the title to search:";
				cin.ignore();
				getline(cin, searchTitle);
				library.searchBook(searchTitle);
				break;
		    }
	        case 4:
			cout<<"Exiting the program.\n";
			return 0;
		default:
			cout<<"Invalid choice. Please try again.\n";
	}
}
return 0;
}
