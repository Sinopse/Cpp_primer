// write delegating cosntructors for your custom class

#include <iostream>
#include <string>
// providing constructoors for the listed classes

class Book {
  //  friend std::ostream &print(std::ostream&, Book&);
  friend std::ostream &print(Book&);
  std::string BookName;
  std::string Author;
  std::string ISBN;
  unsigned pubYear;
  unsigned numPages;
public:
  Book(const std::string &s, const std::string &a,
       const std::string &isbn,
       const unsigned y, const unsigned p):
    BookName(s), Author(a), ISBN(isbn), pubYear(y), numPages(p) {}
  // delegating cosntructors
  Book(): Book("no title", "no author", "9-9999-99", 1900, 0) {}
  Book(std::string s): Book(s, "", "9-9999-99", 1900, 0) {}
	       
  };

std::ostream &print(Book& book)
{
 return std::cout << book.BookName << " " << book.Author
     << " " << book.ISBN << " " << book.pubYear << " "
		  << book.numPages << "\n";
}

int main()
{
  Book book1("Harry Potter", "Joan Rowling", "9-99999-9999", 1998, 365);
  print(book1);
  Book book2("Six of blades");
  print(book2);
  Book book3;
  print(book3);
  
  return 0;
}
  
  
