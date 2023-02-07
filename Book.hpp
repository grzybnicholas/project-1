#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
#include <string>
using namespace std;

class Book 
{
private:
  string title_;
  string author_;
  int page_count;
  bool digital_;
public:
  Book();
  Book(string title_,string author_,int page_count,bool digital_ = false);
  void setTitle(const string& title_);
  string getTitle() const;
  void setAuthor(const string& author_);
  string getAuthor() const;
  void setPageCount(const int& page_count);
  int getPageCount() const;
  void setDigital();
  bool isDigital() const; 

};

#endif