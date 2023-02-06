#include "Book.hpp"
#include <iostream>
#include <string>
using namespace std;
/** Parameterized constructor
param : title of the book that the user wants (a string)
param : the author of said book(a string)
param : the amount of pages that the book has (a not negative integer)
param : checks if the book has a digital form, but in this case it just sets it to its default value, which is false
post : the private data members of the book class are set the values of the parameters
*/
  Book::Book(string title,string author,int page_count,bool digital){
    this->title = title;
    this->author = author;
    this->page_count = page_count;
    this->digital = digital;
  }
/**
@param : a copy of the book title
post: the book tilte becomes the value of the parameter
*/
  void Book::setTitle(const string& title){
    this->title = title;
  }
/**
 return :the title of the book
*/
  string Book::getTitle() const{
    return title;
  }
/**
param : a copy of the book's author
post : sets the value of author to the value of the parameter
*/
  void Book::setAuthor(const string& author){
    this->author = author;
  }
/**
return : the author of the book
*/
  string Book::getAuthor() const{
    return author;
  }
/**
param : a positive integer
pre : the value of pageCount can not be negative, as a book's page count can't be negative
post : sets pageCount to the value of the parameter, if its a positive integer
*/
  void Book::setPageCount(const int& page_count){
   if(page_count >0){
    this->page_count = page_count;
     }
  }
/**
return : the value of pageCount
*/
  int Book::getPageCount() const{
    return page_count;
  }
/**
post : sets the value of digitial to be true
*/
  void Book::setDigital(){
    digital = true;
  }
/**
 return: true if the book has a digital form, false otherwise
 */
  bool Book::isDigital(){
    if(digital == true){
      return true;
    } else {
      return false;
      }
    }
  

