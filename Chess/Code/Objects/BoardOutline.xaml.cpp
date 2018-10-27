//
// BoardOutline.xaml.cpp
// Implementation of the BoardOutline class
//

#include "pch.h"
#include "BoardOutline.xaml.h"

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

BoardOutline::BoardOutline()
{
	InitializeComponent();
}

void BoardOutline::ChangeType(int x)
{
	if (x == 1)
	{
		this->SelectedType = 1;
		this->SelectedClick->Visibility = Windows::UI::Xaml::Visibility::Visible;
		this->SelectedHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossible->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	else if (x == 2) {
		this->SelectedType = 2;
		this->SelectedClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedHover->Visibility = Windows::UI::Xaml::Visibility::Visible;
		this->SelectedPossible->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	else if (x == 3) {
		this->SelectedType = 3;
		this->SelectedClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossible->Visibility = Windows::UI::Xaml::Visibility::Visible;
		this->SelectedPossibleClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	else if (x == 4) {
		this->SelectedType = 4;
		this->SelectedClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossible->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleClick->Visibility = Windows::UI::Xaml::Visibility::Visible;
		this->SelectedPossibleHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
	}
	else if (x == 5) {
		this->SelectedType = 5;
		this->SelectedClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossible->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleHover->Visibility = Windows::UI::Xaml::Visibility::Visible;
	}
	else {
		this->SelectedType = 0;
		this->SelectedClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossible->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleClick->Visibility = Windows::UI::Xaml::Visibility::Collapsed;
		this->SelectedPossibleHover->Visibility = Windows::UI::Xaml::Visibility::Collapsed;

	}
}