#include <vector>

#include "card.h"
#include "defs.h"

class Deck {
   private:
    std::vector<Card> cards;

   public:
    Deck();
    void shuffle();
    Card deal();
    int size() const;
};
