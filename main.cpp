#include <iostream>
#include "./includes/huffman.h"
#include "./includes/dijkstras.h"

using namespace std;

int main()
{
  char ch = '1';
  cout << "Enter a number: " << endl;
  cout << "    1) Visualize Huffman Tree\n\
    2) Visualize Dijkstra's Algorithm\n\
    3) Quit\n";
  while (ch)
  {
    std::cin >> ch;
    switch (ch)
    {
    case '1':
      visualize_huffman_tree();
      break;
    case '2':
      visualize_dijkstras_algorithm();
      break;
    case '3':
      cout << "Thank you for testing our program!" << endl;
      return 0;
    default:
      cout << "Invalid Input." << endl;
      return 0;
      break;
    }
  }
  return 0;
}
