﻿//
// BoardOutline.xaml.h
// Declaration of the BoardOutline class
//

#pragma once

#include "Code\Objects\BoardOutline.g.h"

namespace Chess
{
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class BoardOutline sealed
	{
	public:
		BoardOutline();

		void setSelectedType(int x);
		int getSelectedType();

	private:
		int SelectedType = 0;
	};
}
