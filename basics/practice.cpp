// Create a Library that has many books, each book has an Id
// User can Add a book , Delete a book and Update book Id
// search for a specific book using it's Id
#include <iostream>
#include <vector>
#include <string>
#include <array>
struct Book
{
    std::uint16_t Id;
    std::string title;
};

class Laibrary
{
    public:
        Laibrary()
        {}

        void addBook(Book &books)
        {
            book.push_back(book);
        }

        void removeBook(Book & books_id)
        {
            for (int index = 0; index < book.size(); ++index)
            {
                if (book.Id == books_id)
                {
                    auto removeElement = book.at(index);
                    removeElement = 0;

                }
            }
        }

        void Display()
        {
            for (auto book : books)
            {
                std::cout << "Book Id : " << book << std::endl;
            }
        }

    private:
        std::vector <Book> books;
};

int main()
{
    Book c_book;
    c_book.Id = 1;
    c_book.title = "C/C++ Book For beginers";
    
    Laibrary newBook;
    newBook.addBook(c_book);
    newBook.Display();

    return 0;
}