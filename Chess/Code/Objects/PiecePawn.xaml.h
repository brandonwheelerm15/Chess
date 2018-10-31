//
// PiecePawn.xaml.h
// Declaration of the PiecePawn class
//

#pragma once

#include "Code\Objects\PiecePawn.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class PiecePawn sealed
	{
	public:
		//0 nothing, 1 black, 2 white
		PiecePawn();
		PiecePawn(int Color);

		void setColor(int x);
		int getColor();
	private:
		int Color;
		
	};
}
