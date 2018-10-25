#include "Code\Headers\Piece.h"

using namespace Chess::PieceSpace;

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;
using namespace Windows::UI::Popups;

Chess::PieceSpace::Piece::Piece()
{

}

void Chess::PieceSpace::Piece::MovePiece(Loc * ToLocation)
{

	this->isValidMove();
	
}


bool Chess::PieceSpace::Piece::isValidMove()
{
	return false;
}