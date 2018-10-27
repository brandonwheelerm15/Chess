//
// Game.xaml.h
// Declaration of the Game class
//

#pragma once

#include "Generated Files\Code\Pages\Game.g.h"
#include <string>

namespace Chess
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Game sealed
	{
	public:
		Game();
	private:
		void ChangeBoardSpaceType(std::string str1, int a);
		void BoardSpace_PointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
		void BoardSpace_PointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
		void BoardSpace_PointerReleased(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e);
	};
}
