/**
 * Autogenerated by Thrift Compiler (0.16.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Types_TYPES_H
#define Types_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>

#include <unordered_set>

namespace CXX {

class Author;

class Book;

class Orders;


class Author : public virtual ::apache::thrift::TBase {
 public:

  Author(const Author&);
  Author& operator=(const Author&);
  Author() noexcept
         : name(),
           age(0) {
  }

  virtual ~Author() noexcept;
  std::string name;
  int32_t age;

  void __set_name(const std::string& val);

  void __set_age(const int32_t val);

  bool operator == (const Author & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(age == rhs.age))
      return false;
    return true;
  }
  bool operator != (const Author &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Author & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(Author &a, Author &b);

std::ostream& operator<<(std::ostream& out, const Author& obj);


class Book : public virtual ::apache::thrift::TBase {
 public:

  Book(const Book&);
  Book& operator=(const Book&);
  Book() noexcept
       : name(),
         price(0) {
  }

  virtual ~Book() noexcept;
  std::string name;
  int32_t price;
  Author author;

  void __set_name(const std::string& val);

  void __set_price(const int32_t val);

  void __set_author(const Author& val);

  bool operator == (const Book & rhs) const
  {
    if (!(name == rhs.name))
      return false;
    if (!(price == rhs.price))
      return false;
    if (!(author == rhs.author))
      return false;
    return true;
  }
  bool operator != (const Book &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Book & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(Book &a, Book &b);

std::ostream& operator<<(std::ostream& out, const Book& obj);


class Orders : public virtual ::apache::thrift::TBase {
 public:

  Orders(const Orders&);
  Orders& operator=(const Orders&);
  Orders() noexcept {
  }

  virtual ~Orders() noexcept;
  std::map<std::string, std::set<std::string> >  entry;

  void __set_entry(const std::map<std::string, std::set<std::string> > & val);

  bool operator == (const Orders & rhs) const
  {
    if (!(entry == rhs.entry))
      return false;
    return true;
  }
  bool operator != (const Orders &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Orders & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(Orders &a, Orders &b);

std::ostream& operator<<(std::ostream& out, const Orders& obj);

} // namespace

#endif
