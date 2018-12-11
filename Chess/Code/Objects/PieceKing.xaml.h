//
// PieceKing.xaml.h
// Declaration of the PieceKing class
//

#pragma once

#include "Code\Objects\PieceKing.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class PieceKing sealed
	{
	public:
		//0 nothing, 1 black, 2 white
		PieceKing();
		PieceKing(int Color);

		void setColor(int x);
		int getColor();
	private:
		int Color;

	};
}
