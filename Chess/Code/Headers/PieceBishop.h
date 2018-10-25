#ifndef PIECEBISHOP_H
#define PIECEBISHOP_H
#pragma once
#include "Code/Namespace/Namespace.h"
#include "Code/Headers/Piece.h"

using namespace Chess::PieceSpace;

class Chess::PieceSpace::PieceBishop : public Chess::PieceSpace::Piece
{
protected:
	bool isValidMove();

public:
	PieceBishop();

private:

};

#endif