#include <iostream>
#include <fstream>
#include <string>
using namespace std;

auto createFile(string filename, string text) -> bool
{
  ofstream file(filename);
  if (file.is_open())
  {
    file << text;
    file.close();
    
    if (file.good()){
      cout << "File created successfully\n";
      return true;
    }
  }
  else
  {
    file.close();
    throw runtime_error("Unable to create file\n");
    return false;
  }
}

int main()
{
  string filename = "test.txt";
  string text = "Just testing the file writing capabilities of C++";

  createFile(filename, text);
}


