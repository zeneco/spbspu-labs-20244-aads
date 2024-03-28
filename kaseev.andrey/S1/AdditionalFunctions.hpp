#ifndef ACID_ADDITIONALFUNCTIONS_HPP
#define ACID_ADDITIONALFUNCTIONS_HPP
#include "MaineArray.hpp"

namespace kaseev
{
  int readList(const std::string &line, kaseev::List<std::pair<std::string, kaseev::List<int>>>& arr);
  int sumNumbersInString(const std::string& line);
  void sumNumbersInArray(const kaseev::List<std::pair<std::string, kaseev::List<int>>>& sums);
  void printListNames(const kaseev::List<std::pair<std::string, kaseev::List<int>>>& arr);
  void calculateSumList(kaseev::List<std::pair<std::string, kaseev::List<int>>>& sum, const kaseev::List<std::pair<std::string, kaseev::List<int>>>& arr);
}

#endif
