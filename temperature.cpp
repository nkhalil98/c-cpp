#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user for the temperature in Fahrenheit
  std::cout << "Enter the temperature in Fahrenheit: \n";
  std::cin >> tempf;
  
  // Convert Fahrenheit to Celsius
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}