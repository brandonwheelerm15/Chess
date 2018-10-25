#ifndef PIECEKING_H
#define PIECEKING_H
#pragma once
#include "Code/Namespace/Namespace.h"
#include "Code/Headers/Piece.h"

using namespace Chess::PieceSpace;

class Chess::PieceSpace::PieceKing : public Chess::PieceSpace::Piece
{
protected:
	bool isValidMove();

public:
	PieceKing();

private:

};

#endif