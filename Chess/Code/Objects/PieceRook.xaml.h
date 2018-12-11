//
// PieceRook.xaml.h
// Declaration of the PieceRook class
//

#pragma once

#include "Code\Objects\PieceRook.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class PieceRook sealed
	{
	public:
		//0 nothing, 1 black, 2 white
		PieceRook();
		PieceRook(int Color);

		void setColor(int x);
		int getColor();
	private:
		int Color;

	};
}
