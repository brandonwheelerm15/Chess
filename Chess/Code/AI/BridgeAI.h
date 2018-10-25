#ifndef BRIDGEAI_H
#define BRIDGEAI_H
#pragma once
#include "Code/Namespace/Namespace.h"
#include "Code\Headers\Board.h"

using namespace Chess::AISpace;

class Chess::AISpace::Bridge
{
public:
	enum GameCurrent { Playing, OverWithOff, OverWithDef, OverWithStale, OverWithQuit };
	enum GameDifficulty { Hard, Medium, Easy };

	GameCurrent getSelectedGameCurrent(Board b);
	void setSelectedGameCurrent(Board b, GameCurrent);

	GameDifficulty getSelectedGameDifficulty(Board b);
	void setSelectedGameDifficulty(Board b, GameDifficulty);

	bool isGameOver(Board b);
	bool isStale(Board b);

	bool isMovable(Board b, char x1, char y1, char x2, char y2);
	bool isTakeable(Board b, char x1, char y1, char x2, char y2);

	void MovePiece(Board b, char x1, char y1, char x2, char y2); //move piece FROM space(1) TO space(2).
	void TakePiece(Board b, char x1, char y1, char x2, char y2); //USE YOUR piece (1) TO TAKE piece (2). 

	bool IsDefCheck(Board b);
	bool IsOffCheck(Board b);

	Piece WhereDefCheck(Board b);
	Piece WhereOffCheck(Board b);

private:
	GameCurrent SelectedGameCurrent;
	GameDifficulty SelectedGameDifficulty;


};

#endif