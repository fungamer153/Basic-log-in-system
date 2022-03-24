#include <iostream>
#include <map>
#include <string>
#include <string_view>

std::map<std::string, std::string> m { {"Joe", "Burger"}, {"Jeff", "Cheese"} };
std::map<std::string, std::string>::iterator Index;

int CheckDetails(std::string User, std::string Password) {
  Index = m.find(User);
  
  if ((Index->first == User) && (Index->second == Password)) {
    return 1;
  }else{
    return 0;
  };
}

int main() {
  std::string Username; std::string Password;
  Start:
  
  std::cout << "What is your username?: ";
  std::cin >> Username;

  std::cout << "What is your password?: ";
  std::cin >> Password;

  int Check = { CheckDetails(Username, Password) };
  
  if (Check == 1) {
    std::cout << "You successfully logged in!" << "\n";
  }else{
    std::cout << "Password failed, try again." << "\n";
    goto Start;
  }
  
  //std::cout << m["Joe"] << '\n';
  
  return 0;
}