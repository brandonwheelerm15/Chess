#include "Code\Headers\main.h"
#include "Start.xaml.h"

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

using namespace Windows::UI::Popups;

Start::Start()
{
	InitializeComponent();

	PieceKnight mypiece;
	mypiece.MovePiece(new Piece::Loc('X', 'X'));

	//MessageDialog^ msg = ref new MessageDialog("Start");
	//msg->ShowAsync();




}
