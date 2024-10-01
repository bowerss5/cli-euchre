#include <iostream>

class Card {
private:
  // 1-10, 11-J, 12-Q, 13-K, 14-A
  int value;
  char suit;
  bool color;

public:
  Card(int value, char suit);
  int getValue() const;
  char getSuit() const;
  bool isTrump(char trump) const;
  int relativeValue(char trump) const;
  bool isGreater(const Card &other, char trump) const;
};
std::ostream &operator<<(std::ostream &os, const Card &card);
