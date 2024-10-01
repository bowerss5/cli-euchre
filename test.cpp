#include "card.h"
#include <iostream>

void testGreater(Card lead, Card next, char trump) {
  std::cout << "(" << trump << ")" << lead << " > " << next << " = "
            << (next.isGreater(lead, trump) ? next : lead) << std::endl;
}

int main(int argc, char *argv[]) {

  Card card1(11, 'H');
  Card card2(14, 'C');
  Card card3(13, 'C');
  Card card4(11, 'D');
  testGreater(card2, card1, 'H');
  testGreater(card2, card1, 'S');
  std::cout << card1.isGreater(card4, 'H') << std::endl; // 1
  std::cout << card1.isGreater(card4, 'S') << std::endl; // 0
  std::cout << card2.isGreater(card3, 'S') << std::endl; // 1
  return 0;
}
