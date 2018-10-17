#ifndef APPMAIN_XAML_H
#define APPMAIN_XAML_H

#include "App.g.h"

namespace Chess
{
	ref class App sealed
	{
	protected:
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;

	internal:
		App();

	private:
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
		void OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e);
	};
}
#endif