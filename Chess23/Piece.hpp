#pragma once
class Board;

class Piece {
protected:
    char refreshMask[8];
    char legalMask[8];
    bool isWhite;
    char pos;

public:
    Piece(bool color, char pos, Board* b);
    bool hasToRefresh(const char index, const char mask);
    virtual void refreshLegal(const Board* b) const = 0 {
    }
};
