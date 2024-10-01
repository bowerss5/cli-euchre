#include "card.h"

Card::Card(int value, char suit) {
  this->value = value;
  this->suit = suit;
  this->color = suit == 'H' || suit == 'D';
};

int Card::getValue() const { return value; };

char Card::getSuit() const { return suit; };

char getOffsuiit(char suit) {
  if (suit == 'H') {
    return 'D';
  }
  if (suit == 'D') {
    return 'H';
  }
  if (suit == 'S') {
    return 'C';
  }
  return 'S';
};

bool Card::isTrump(char trump) const {
  return suit == trump || (suit == getOffsuiit(trump) && value == 11);
};

int Card::relativeValue(char trump) const {
  if (!isTrump(trump)) {
    return value;
  }
  int v = value + 14;
  if (value == 11) {
    v += 4;
    if (suit == trump) {
      v++;
    }
  }
  return v;
};

bool Card::isGreater(const Card &other, char trump) const {
  if (!isTrump(trump) && suit != other.suit) {
    return false;
  }
  return relativeValue(trump) > other.relativeValue(trump);
}

std::ostream &operator<<(std::ostream &os, const Card &card) {
  if (card.getValue() == 11) {
    os << "J";
  } else if (card.getValue() == 12) {
    os << "Q";
  } else if (card.getValue() == 13) {
    os << "K";
  } else if (card.getValue() == 14) {
    os << "A";
  } else {
    os << card.getValue();
  }
  os << card.getSuit();
  return os;
}
