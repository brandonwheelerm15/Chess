//
// PieceBishop.xaml.h
// Declaration of the PieceBishop class
//

#pragma once

#include "Code\Objects\PieceBishop.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class PieceBishop sealed
	{
	public:
		//0 nothing, 1 black, 2 white
		PieceBishop();
		PieceBishop(int Color);

		void setColor(int x);
		int getColor();
	private:
		int Color;

	};
}
