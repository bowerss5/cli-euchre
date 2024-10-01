#include "card.h"
#include "defs.h"
#include <vector>

class Deck {
private:
  std::vector<Card> cards;

public:
  Deck();
  void shuffle();
  Card deal();
  int size() const;
};
