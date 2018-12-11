//
// PieceKnight.xaml.h
// Declaration of the PieceKnight class
//

#pragma once

#include "Code\Objects\PieceKnight.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class PieceKnight sealed
	{
	public:
		//0 nothing, 1 black, 2 white
		PieceKnight();
		PieceKnight(int Color);

		void setColor(int x);
		int getColor();
	private:
		int Color;

	};
}
