#include <iostream>
#include <fstream>

int main()
{
   std::ifstream ifs("file.txt");

   int dst, dst2;

   ifs >> dst >> dst2;

   std::cout << dst << " " << dst2 << std::endl;
   ifs.close();

   std::ofstream ofs("test.out");

   ofs << "this is a test " << std::endl;
   ofs.close();
}