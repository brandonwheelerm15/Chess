//
// PieceKnight.xaml.cpp
// Implementation of the PieceKnight class
//

#include "pch.h"
#include "PieceKnight.xaml.h"

using namespace Chess;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The User Control item template is documented at https://go.microsoft.com/fwlink/?LinkId=234236

PieceKnight::PieceKnight()
{
	InitializeComponent();
}
PieceKnight::PieceKnight(int Color)
{
	this->Color = Color;
	switch (Color)
	{
	case 0:
		this->Black->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->White->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		break;
	case 1:
		this->Black->Visibility = Windows::UI::Xaml::Visibility::Visible;
		this->White->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		break;
	case 2:
		this->Black->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->White->Visibility = Windows::UI::Xaml::Visibility::Visible;
		break;
	}
}
void PieceKnight::setColor(int x)
{
	this->Color = x;

	if (x == 0) {
		this->Black->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->White->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	else if (x == 1) {
		this->Black->Visibility = Windows::UI::Xaml::Visibility::Visible;
		this->White->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	else if (x == 2) {
		this->Black->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->White->Visibility = Windows::UI::Xaml::Visibility::Visible;
	}
}
int PieceKnight::getColor()
{
	return Color;
}
