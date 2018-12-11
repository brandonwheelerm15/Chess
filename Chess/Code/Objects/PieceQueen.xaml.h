//
// PieceQueen.xaml.h
// Declaration of the PieceQueen class
//

#pragma once

#include "Code\Objects\PieceQueen.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class PieceQueen sealed
	{
	public:
		//0 nothing, 1 black, 2 white
		PieceQueen();
		PieceQueen(int Color);

		void setColor(int x);
		int getColor();
	private:
		int Color;

	};
}
