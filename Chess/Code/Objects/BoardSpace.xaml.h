//
// BoardSpace.xaml.h
// Declaration of the BoardSpace class
//

#pragma once

#include "Code\Objects\BoardSpace.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class BoardSpace sealed
	{
	public:
		BoardSpace();

		void ChangeType(int x);
	private:
		int SelectedType = 0;
	};
}
