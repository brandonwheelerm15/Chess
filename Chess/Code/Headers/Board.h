#ifndef BOARD_H
#define BOARD_H
#pragma once
#include "Code/Namespace/Namespace.h"
#include "Code\Headers\Piece.h"
#include "Code\Objects\BoardOutline.xaml.h"
#include "Code\Objects\BoardSpace.xaml.h"

#include <collection.h>

using namespace Chess::GameSpace;


using namespace Platform::Collections;


class Chess::GameSpace::Board
{
public:

	enum State {};

	enum BoardColor {Black, White};
	enum BoardSelected { Normal, Possible, Selected, Hovered, PossibleSelected, PossibleHovered, InChecked };
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

	void InitBoard();

	void ResetBoard();


	BoardSpace^ getSelectedBoardSpace();
	void setSelectedBoardSpace(BoardSpace^);

	BoardOutline^ getSelectedBoardOutline();
	void setSelectedBoardOutline(BoardOutline^);


	Vector<BoardSpace^>^ getGameElement_Space(int x);
	void setGameElement_Space(Vector<BoardSpace^>^ a, int x);

	Vector<BoardOutline^>^ getGameElement_Outline(int x);
	void setGameElement_Outline(Vector<BoardOutline^>^ a, int x);


	BoardSpace^ getGameElement_SpaceSpecific(int x, int xsp);
	void setGameElement_SpaceSpecific(BoardSpace^ a, int x, int xsp);

	BoardOutline^ getGameElement_OutlineSpecific(int x, int xsp);
	void setGameElement_OutlineSpecific(BoardOutline^ a, int x, int xsp);


private:

	BoardSpace^ SelectedBoardSpace;
	BoardOutline^ SelectedBoardOutline;


	Vector<BoardSpace^>^ GameElement_Space1 = ref new Vector<BoardSpace^>();
	Vector<BoardSpace^>^ GameElement_Space2 = ref new Vector<BoardSpace^>();
	Vector<BoardSpace^>^ GameElement_Space3 = ref new Vector<BoardSpace^>();
	Vector<BoardSpace^>^ GameElement_Space4 = ref new Vector<BoardSpace^>();
	Vector<BoardSpace^>^ GameElement_Space5 = ref new Vector<BoardSpace^>();
	Vector<BoardSpace^>^ GameElement_Space6 = ref new Vector<BoardSpace^>();
	Vector<BoardSpace^>^ GameElement_Space7 = ref new Vector<BoardSpace^>();
	Vector<BoardSpace^>^ GameElement_Space8 = ref new Vector<BoardSpace^>();

	Vector<BoardOutline^>^ GameElement_Outline1 = ref new Vector<BoardOutline^>();
	Vector<BoardOutline^>^ GameElement_Outline2 = ref new Vector<BoardOutline^>();
	Vector<BoardOutline^>^ GameElement_Outline3 = ref new Vector<BoardOutline^>();
	Vector<BoardOutline^>^ GameElement_Outline4 = ref new Vector<BoardOutline^>();
	Vector<BoardOutline^>^ GameElement_Outline5 = ref new Vector<BoardOutline^>();
	Vector<BoardOutline^>^ GameElement_Outline6 = ref new Vector<BoardOutline^>();
	Vector<BoardOutline^>^ GameElement_Outline7 = ref new Vector<BoardOutline^>();
	Vector<BoardOutline^>^ GameElement_Outline8 = ref new Vector<BoardOutline^>();

};

#endif