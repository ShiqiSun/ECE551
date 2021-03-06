#ifndef __RAND_H__
#define __RAND_H__
#include <stdio.h>

#include <iostream>
#include <vector>

class WordLib {
 private:
  int num;
  std::string type;
  std::vector<std::string> words;

 public:
  WordLib(std::string type, std::string word) : num(1), type(type) {
    this->words.push_back(word);
  }
  ~WordLib() {}
  void addWord(std::string word) {
    this->words.push_back(word);
    num++;
  }
  int getNum() { return num; };
  std::string getType() { return type; };
  std::string operator[](int ord) const { return words[ord]; };
};

std::ostream & operator<<(std::ostream & out, class WordLib words) {
  int num = words.getNum();
  out << "In the type " << words.getType() << ", we have: ";
  for (int i = 0; i < num; i++)
    out << words[i] << " ";
  out << "\n";
  return out;
}
#endif
