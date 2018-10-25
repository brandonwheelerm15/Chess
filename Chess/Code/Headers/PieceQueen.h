#ifndef PIECEQUEEN_H
#define PIECEQUEEN_H
#pragma once
#include "Code/Namespace/Namespace.h"
#include "Code/Headers/Piece.h"

using namespace Chess::PieceSpace;

class Chess::PieceSpace::PieceQueen : public Chess::PieceSpace::Piece
{
protected:
	bool isValidMove();

public:
	PieceQueen();

private:

};

#endif