#ifndef BOARD_H
#define BOARD_H
#pragma once
#include "Code/Namespace/Namespace.h"
#include "Code\Headers\Piece.h"

#include <vector>

using namespace Chess::GameSpace;
using namespace std;

class Chess::GameSpace::Board
{
public:

	enum State {};

	enum BoardColor {Black, White};
	enum BoardSelected { Normal, Possible, Selected, Hovered, PossibleSelected, PossibleHovered };
	struct BoardState
	{
		BoardState() {}
		BoardState(BoardColor Color, BoardSelected Selected)
		{
			BoardColor = Color;
			BoardSelected = Selected;
		}
		BoardColor BoardColor;
		BoardSelected BoardSelected;
	};

	vector< vector < Piece > > getGameBoard();
	void setGameBoard(vector< vector < Piece > >);

	Piece getGameBoardPosition();
	void setGameBoardPosition(Piece::Loc);



	vector< vector < BoardState > > getSelectedStateGameBoard();
	void setSelectedStateGameBoard(vector< vector < BoardState > >);

	BoardState getSelectedStateGameBoardPosition();
	void setSelectedStateGameBoardPosition(BoardState);


private:
	vector< vector < Piece > > GameBoard;
	vector< vector < BoardState > > SelectedStateGameBoard;

};

#endif