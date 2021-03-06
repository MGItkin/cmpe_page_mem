/*
 * <Author> Kenneth Cross
 * <Date> 05/06/2015
 * <Matter> This is an example of calling a commandline util
 * in C++, needed because C won't compile natively with boost TCP
 */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]){
  std::string arguments = argv[1];
  std::string base_command = "./net_api ";
  std::string full_command = base_command + arguments;

  FILE* file = popen(full_command.c_str(), "r");
  char buffer[100];
  fscanf(file, "%100s", buffer);
  pclose(file);

  std::string from_buffer = buffer; //c++ string easier to work with
  std::cout << from_buffer << std::endl;

  return 0;
}
