#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>
using namespace std;

class Book 
{
private:
  string title;
  string author;
  int page_count;
  bool digital;
public:
  Book() = default;
  Book(string title,string author,int page_count,bool digital = false);
  void setTitle(const string& title);
  string getTitle() const;
  void setAuthor(const string& author);
  string getAuthor() const;
  void setPageCount(const int& page_count);
  int getPageCount() const;
  void setDigital();
  bool isDigital() const; 

};

#endif