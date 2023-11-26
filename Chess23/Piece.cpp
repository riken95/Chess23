#include "Piece.hpp"

Piece::Piece(bool color, char pos, Board* b) :isWhite(color), pos(pos) {
    this->refreshLegal(b);
}



bool Piece::hasToRefresh(const char index, const char mask) {
    if (this->refreshMask[index] & mask) //Bitwise operator to check if the piece is affected
        return true;
    return false;

}