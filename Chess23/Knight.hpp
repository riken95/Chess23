#pragma once
#include "Piece.hpp"
class Knight : public Piece {
public:
    Knight(bool color, char pos, Board* b);
    void refreshLegal(const Board* b) const override;
};


