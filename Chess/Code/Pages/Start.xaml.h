#ifndef START_XAML_H
#define START_XAML_H

#include "Generated Files\Code\Pages\Start.g.h"

namespace Chess
{
	public ref class Start sealed
	{
	public:
		Start();
	private:
		void cboType1_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
		void cboType2_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
		void btnStart_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
#endif