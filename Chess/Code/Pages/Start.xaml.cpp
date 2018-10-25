#include "Code\Headers\main.h"
#include "Start.xaml.h"
#include "Game.xaml.h"

#include "Code\Headers\Piece.h"

#include "Code\Headers\PieceKing.h"
#include "Code\Headers\PieceKnight.h"
#include "Code\Headers\PieceQueen.h"
#include "Code\Headers\PieceRook.h"
#include "Code\Headers\PieceBishop.h"
#include "Code\Headers\PiecePawn.h"

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
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Popups;

Start::Start()
{
	InitializeComponent();

	PieceKnight mypiece;
	mypiece.MovePiece(new Piece::Loc('X', 'X'));

	//MessageDialog^ msg = ref new MessageDialog("Start");
	//msg->ShowAsync();


	cboType1->SelectedIndex = 0;
	cboType2->SelectedIndex = 0;

}

void Chess::Start::cboType1_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
	if (cboType1->SelectedIndex == 0)
	{
		cboDiff1->IsEnabled = false;
		txtName1->IsEnabled = true;
		txtName1->Text = "Player1";
	}
	else
	{
		cboDiff1->IsEnabled = true;
		cboDiff1->SelectedIndex = 0;
		txtName1->IsEnabled = false;
		txtName1->Text = "Jacqueline";
	}
}


void Chess::Start::cboType2_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
	if (cboType2->SelectedIndex == 0)
	{
		cboDiff2->IsEnabled = false;
		txtName2->IsEnabled = true;
		txtName2->Text = "Player2";
	}
	else
	{
		cboDiff2->IsEnabled = true;
		cboDiff2->SelectedIndex = 0;
		txtName2->IsEnabled = false;
		txtName2->Text = "Jacqueline";
	}
}


void Chess::Start::btnStart_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	bool error = false;
	if (cboType1->SelectedIndex == 0 && txtName1->Text == "" && error == false)
	{
		error = true;
		MessageDialog^ msg = ref new MessageDialog("Enter a player name for Player 1.");
		msg->ShowAsync();
	}
	if (cboType1->SelectedIndex == 0 && txtName2->Text == "" && error == false)
	{
		error = true;
		MessageDialog^ msg = ref new MessageDialog("Enter a player name for Player 2.");
		msg->ShowAsync();
	}

	if (!error) {
		Frame->Navigate(TypeName(Game::typeid));
	}
}

