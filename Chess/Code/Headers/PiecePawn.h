#ifndef PIECEPAWN_H
#define PIECEPAWN_H
#pragma once
#include "Code/Namespace/Namespace.h"
#include "Code/Headers/Piece.h"

using namespace Chess::PieceSpace;

class Chess::PieceSpace::PiecePawn : public Chess::PieceSpace::Piece
{
protected:
	bool isValidMove();

public:
	PiecePawn();

private:

};

#endif