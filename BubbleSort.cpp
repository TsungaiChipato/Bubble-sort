#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void Swap(int &a, int &b, std::vector<int> &elements) {
  int temp = 0;
  temp = a;
  a = b;
  b = temp;
}

std::vector<int> Sort(std::vector<int> elements) {
  // Sorting algorithm.
  for(int i = 0; i < elements.size(); i++){
    for (int j = i; j< elements.size(); j++){
      if (elements[i] > elements[j]){
        //Swap swap elements
        Swap(elements[i], elements[j], elements);
      }
    }
  }
  return elements;
}

int main() {

  try {
    int input = 0, n = 0;
    std::vector<int> elements;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    if (!std::cin){
      throw std::runtime_error("Invalid input");
    }

    std::cout << "Enter your numbers to be sorted: ";

    for(int i = 0; i < n; i++) {
      std::cin >> input;
      if (!std::cin) {
        throw std::runtime_error("invalid input");
      }
      elements.push_back(input);
    }

    //Bubble sort algorithm
    elements = Sort(elements);

    std::cout<<"The sorted input is: ";
    for (int i = 0; i < n; i++) {
      std::cout << elements[i] << " ";
    }
    std::cout<<std::endl;
    
  }
  catch(std::runtime_error & e){
    std::cout << e.what() << std::endl;
  }
  return 0;
}
