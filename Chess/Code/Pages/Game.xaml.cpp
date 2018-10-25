//
// Game.xaml.cpp
// Implementation of the Game class
//

#include "pch.h"
#include "Game.xaml.h"
#include "Code\Objects\BoardSpace.xaml.h"

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

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

Game::Game()
{
	InitializeComponent();


	Board11->ChangeType(1);
	Board12->ChangeType(2);
	Board13->ChangeType(1);
	Board14->ChangeType(2);
	Board15->ChangeType(1);
	Board16->ChangeType(2);
	Board17->ChangeType(1);
	Board18->ChangeType(2);

	Board21->ChangeType(2);
	Board22->ChangeType(1);
	Board23->ChangeType(2);
	Board24->ChangeType(1);
	Board25->ChangeType(2);
	Board26->ChangeType(1);
	Board27->ChangeType(2);
	Board28->ChangeType(1);

	Board31->ChangeType(1);
	Board32->ChangeType(2);
	Board33->ChangeType(1);
	Board34->ChangeType(2);
	Board35->ChangeType(1);
	Board36->ChangeType(2);
	Board37->ChangeType(1);
	Board38->ChangeType(2);

	Board41->ChangeType(2);
	Board42->ChangeType(1);
	Board43->ChangeType(2);
	Board44->ChangeType(1);
	Board45->ChangeType(2);
	Board46->ChangeType(1);
	Board47->ChangeType(2);
	Board48->ChangeType(1);

	Board51->ChangeType(1);
	Board52->ChangeType(2);
	Board53->ChangeType(1);
	Board54->ChangeType(2);
	Board55->ChangeType(1);
	Board56->ChangeType(2);
	Board57->ChangeType(1);
	Board58->ChangeType(2);

	Board61->ChangeType(2);
	Board62->ChangeType(1);
	Board63->ChangeType(2);
	Board64->ChangeType(1);
	Board65->ChangeType(2);
	Board66->ChangeType(1);
	Board67->ChangeType(2);
	Board68->ChangeType(1);

	Board71->ChangeType(1);
	Board72->ChangeType(2);
	Board73->ChangeType(1);
	Board74->ChangeType(2);
	Board75->ChangeType(1);
	Board76->ChangeType(2);
	Board77->ChangeType(1);
	Board78->ChangeType(2);

	Board81->ChangeType(2);
	Board82->ChangeType(1);
	Board83->ChangeType(2);
	Board84->ChangeType(1);
	Board85->ChangeType(2);
	Board86->ChangeType(1);
	Board87->ChangeType(2);
	Board88->ChangeType(1);
}
