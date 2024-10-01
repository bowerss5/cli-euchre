#include "deck.h"
#include <algorithm>
#include <random>
#include <vector>

Deck::Deck() {
  for (int suit = 0; suit < 4; suit++) {
    for (int rank = 9; rank < 15; rank++) {
      cards.push_back(Card(rank, suits[suit]));
    }
  }
  shuffle();
}

void Deck::shuffle() {
  std::random_device rd;
  std::mt19937 g(rd());
  std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::deal() {
  Card card = cards.back();
  cards.pop_back();
  return card;
}

int Deck::size() const { return cards.size(); }
