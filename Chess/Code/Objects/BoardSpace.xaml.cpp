//
// BoardSpace.xaml.cpp
// Implementation of the BoardSpace class
//

#include "pch.h"
#include "BoardSpace.xaml.h"

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

BoardSpace::BoardSpace()
{
	InitializeComponent();
}

void BoardSpace::ChangeType(int x)
{
	if (x == 1)
	{
		this->SelectedType = 1;
		this->BoardDark->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->BoardLight->Visibility = Windows::UI::Xaml::Visibility::Visible;
	}
	else if (x == 2) {
		this->SelectedType = 2;
		this->BoardDark->Visibility = Windows::UI::Xaml::Visibility::Visible;
		this->BoardLight->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	else {
		this->SelectedType = 0;
		this->BoardDark->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->BoardLight->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
}