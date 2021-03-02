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
  };

std::ostream &print(Book& book)
{
 return std::cout << book.BookName << " " << book.Author
     << " " << book.ISBN << " " << book.pubYear << " "
     << book.numPages;
}

int main()
{
  Book book1("Harry Potter", "Joan Rowling", "9-99999-9999", 1998, 365);
  // std::cout << book1.BookName << " " << book1.Author
  // 	    << " " << book1.ISBN << " " << book1.pubYear << " "
  // 	    << book1.numPages;
  print(book1);

  
  return 0;
}
  
  
