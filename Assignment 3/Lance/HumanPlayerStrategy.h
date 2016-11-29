#pragma once

#include "Character.h"
#include "Map.h"

class HumanPlayerStrategy : public Strategy {
  using Strategy::execute;
  public:
    void execute(Map& m, Character& c);
    void movePlayer(Map& m, Character& c);
    void moveUp(Map& m, Character& c);
    void moveDown(Map& m, Character& c);
    void moveRight(Map& m, Character& c);
    void moveLeft(Map& m, Character& c);
};
