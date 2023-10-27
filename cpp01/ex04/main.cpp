#include <iostream>
#include <fstream>
#include <string>

std::string replace_all(std::string str, const std::string& from, const std::string& to) {

    std::string result;
    int pos = 0;
    int lastPos = 0;
    while ((pos = str.find(from, lastPos)) != std::string::npos)
    {
      result += str.substr(lastPos, pos - lastPos);
      result += to;
      lastPos = pos + from.length();
    }
    result += str.substr(lastPos);
    return result;
}

int main () {

  
   std::cout << replace_all("this is a test", "t", "a")<< std::endl;

    return 0;
}
