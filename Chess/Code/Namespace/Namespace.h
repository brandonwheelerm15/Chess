#ifndef NAMESPACE_H
#define NAMESPACE_H
#pragma once

namespace Chess
{
	class main;
	namespace AISpace
	{
		class Bridge;
	}
	namespace GameSpace
	{
		class Board;
	}
	namespace PieceSpace
	{
		class Piece;
		class PieceKing;
		class PieceQueen;
		class PieceRook;
		class PiecePawn;
		class PieceBishop;
		class PieceKnight;
	}
	namespace TimerSpace
	{
		class Timer;
	}
	namespace CommonSpace
	{
		class Common;
	}
	namespace DisplaySpace
	{
		class Display;
		class DisplayGUI;
	}
}

#endif