#include <iostream>
#include "./includes/huffman.h"
#include "./includes/dijkstras.cpp"

int main(int args, char **argv)
{
  char ch = '1';
  std::cout << "Enter a number:\n\
    1) Visualize Dijkstra's Algorithm \n\
    2) Visualize Huffman Tree\n\
    4) Quit\n";
  while (ch)
  {
    std::cin >> ch;
    switch (ch)
    {
    case '1':
      visualize_dijkstras_algorithm();
      break;
    case '2':
      visualize_huffman_tree();
      break;
    case '3':
      std::cout << "Thank you for testing our program!\n";
      return 0;
    default:
      std::cout << "Program terminated due to invalid input.\n";
      return 0;
      break;
    }
  }
  return 0;
}
