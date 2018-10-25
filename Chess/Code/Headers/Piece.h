#ifndef PIECE_H
#define PIECE_H
#pragma once
#include "Code/Namespace/Namespace.h"

using namespace Chess::PieceSpace;

class Chess::PieceSpace::Piece
{
public:
	Piece();

	enum PieceColor { White, Black };
	enum PieceTypes { Bishop, King, Knight, Pawn, Queen, Rook };
	struct Loc
	{
		Loc() {}
		Loc(char X, char Y)
		{
			LocX = X;
			LocY = Y;
		}
		char LocX; char LocY;
	};

	void MovePiece(Loc *ToLocation);

	void setLocationX(char a);
	char getLocationX();
	void setLocationY(char a);
	char getLocationY();
	void setLocation(char a_LocX, char a_LocY);
	Loc getLocation();

	void setPieceType(PieceTypes a);
	PieceTypes getPieceType();
private:
	virtual bool isValidMove();

	PieceTypes Type;
	PieceColor Color;

	Loc Location;
};

#endif