#include "Code\Headers\Board.h"
#include "Code\Namespace\Namespace.h"
#include "Code\Objects\BoardOutline.xaml.h"
#include "Code\Objects\BoardSpace.xaml.h"

#include <collection.h>
#include <algorithm>

using namespace Chess::GameSpace;
using namespace Platform::Collections;

void Chess::GameSpace::Board::InitBoard()
{
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);
	this->GameElement_Space1->Append(ref new Chess::BoardSpace);

	this->GameElement_Space2->Append(ref new Chess::BoardSpace);
	this->GameElement_Space2->Append(ref new Chess::BoardSpace);
	this->GameElement_Space2->Append(ref new Chess::BoardSpace);
	this->GameElement_Space2->Append(ref new Chess::BoardSpace);
	this->GameElement_Space2->Append(ref new Chess::BoardSpace);
	this->GameElement_Space2->Append(ref new Chess::BoardSpace);
	this->GameElement_Space2->Append(ref new Chess::BoardSpace);
	this->GameElement_Space2->Append(ref new Chess::BoardSpace);

	this->GameElement_Space3->Append(ref new Chess::BoardSpace);
	this->GameElement_Space3->Append(ref new Chess::BoardSpace);
	this->GameElement_Space3->Append(ref new Chess::BoardSpace);
	this->GameElement_Space3->Append(ref new Chess::BoardSpace);
	this->GameElement_Space3->Append(ref new Chess::BoardSpace);
	this->GameElement_Space3->Append(ref new Chess::BoardSpace);
	this->GameElement_Space3->Append(ref new Chess::BoardSpace);
	this->GameElement_Space3->Append(ref new Chess::BoardSpace);

	this->GameElement_Space4->Append(ref new Chess::BoardSpace);
	this->GameElement_Space4->Append(ref new Chess::BoardSpace);
	this->GameElement_Space4->Append(ref new Chess::BoardSpace);
	this->GameElement_Space4->Append(ref new Chess::BoardSpace);
	this->GameElement_Space4->Append(ref new Chess::BoardSpace);
	this->GameElement_Space4->Append(ref new Chess::BoardSpace);
	this->GameElement_Space4->Append(ref new Chess::BoardSpace);
	this->GameElement_Space4->Append(ref new Chess::BoardSpace);

	this->GameElement_Space5->Append(ref new Chess::BoardSpace);
	this->GameElement_Space5->Append(ref new Chess::BoardSpace);
	this->GameElement_Space5->Append(ref new Chess::BoardSpace);
	this->GameElement_Space5->Append(ref new Chess::BoardSpace);
	this->GameElement_Space5->Append(ref new Chess::BoardSpace);
	this->GameElement_Space5->Append(ref new Chess::BoardSpace);
	this->GameElement_Space5->Append(ref new Chess::BoardSpace);
	this->GameElement_Space5->Append(ref new Chess::BoardSpace);

	this->GameElement_Space6->Append(ref new Chess::BoardSpace);
	this->GameElement_Space6->Append(ref new Chess::BoardSpace);
	this->GameElement_Space6->Append(ref new Chess::BoardSpace);
	this->GameElement_Space6->Append(ref new Chess::BoardSpace);
	this->GameElement_Space6->Append(ref new Chess::BoardSpace);
	this->GameElement_Space6->Append(ref new Chess::BoardSpace);
	this->GameElement_Space6->Append(ref new Chess::BoardSpace);
	this->GameElement_Space6->Append(ref new Chess::BoardSpace);

	this->GameElement_Space7->Append(ref new Chess::BoardSpace);
	this->GameElement_Space7->Append(ref new Chess::BoardSpace);
	this->GameElement_Space7->Append(ref new Chess::BoardSpace);
	this->GameElement_Space7->Append(ref new Chess::BoardSpace);
	this->GameElement_Space7->Append(ref new Chess::BoardSpace);
	this->GameElement_Space7->Append(ref new Chess::BoardSpace);
	this->GameElement_Space7->Append(ref new Chess::BoardSpace);
	this->GameElement_Space7->Append(ref new Chess::BoardSpace);

	this->GameElement_Space8->Append(ref new Chess::BoardSpace);
	this->GameElement_Space8->Append(ref new Chess::BoardSpace);
	this->GameElement_Space8->Append(ref new Chess::BoardSpace);
	this->GameElement_Space8->Append(ref new Chess::BoardSpace);
	this->GameElement_Space8->Append(ref new Chess::BoardSpace);
	this->GameElement_Space8->Append(ref new Chess::BoardSpace);
	this->GameElement_Space8->Append(ref new Chess::BoardSpace);
	this->GameElement_Space8->Append(ref new Chess::BoardSpace);



	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline1->Append(ref new Chess::BoardOutline);

	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline2->Append(ref new Chess::BoardOutline);

	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline3->Append(ref new Chess::BoardOutline);

	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline4->Append(ref new Chess::BoardOutline);

	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline5->Append(ref new Chess::BoardOutline);

	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline6->Append(ref new Chess::BoardOutline);

	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline7->Append(ref new Chess::BoardOutline);

	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);
	this->GameElement_Outline8->Append(ref new Chess::BoardOutline);

	this->GameElement_SpaceAll.push_back(GameElement_Space1);
	this->GameElement_SpaceAll.push_back(GameElement_Space2);
	this->GameElement_SpaceAll.push_back(GameElement_Space3);
	this->GameElement_SpaceAll.push_back(GameElement_Space4);
	this->GameElement_SpaceAll.push_back(GameElement_Space5);
	this->GameElement_SpaceAll.push_back(GameElement_Space6);
	this->GameElement_SpaceAll.push_back(GameElement_Space7);
	this->GameElement_SpaceAll.push_back(GameElement_Space8);

	this->GameElement_OutlineAll.push_back(GameElement_Outline1);
	this->GameElement_OutlineAll.push_back(GameElement_Outline2);
	this->GameElement_OutlineAll.push_back(GameElement_Outline3);
	this->GameElement_OutlineAll.push_back(GameElement_Outline4);
	this->GameElement_OutlineAll.push_back(GameElement_Outline5);
	this->GameElement_OutlineAll.push_back(GameElement_Outline6);
	this->GameElement_OutlineAll.push_back(GameElement_Outline7);
	this->GameElement_OutlineAll.push_back(GameElement_Outline8);



}

void Chess::GameSpace::Board::ResetBoard()
{
	this->getGameElement_SpaceSpecific(1, 1)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(1, 2)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(1, 3)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(1, 4)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(1, 5)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(1, 6)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(1, 7)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(1, 8)->setSelectedType(2);

	this->getGameElement_SpaceSpecific(2, 1)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(2, 2)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(2, 3)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(2, 4)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(2, 5)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(2, 6)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(2, 7)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(2, 8)->setSelectedType(1);

	this->getGameElement_SpaceSpecific(3, 1)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(3, 2)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(3, 3)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(3, 4)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(3, 5)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(3, 6)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(3, 7)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(3, 8)->setSelectedType(2);

	this->getGameElement_SpaceSpecific(4, 1)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(4, 2)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(4, 3)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(4, 4)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(4, 5)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(4, 6)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(4, 7)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(4, 8)->setSelectedType(1);

	this->getGameElement_SpaceSpecific(5, 1)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(5, 2)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(5, 3)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(5, 4)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(5, 5)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(5, 6)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(5, 7)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(5, 8)->setSelectedType(2);

	this->getGameElement_SpaceSpecific(6, 1)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(6, 2)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(6, 3)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(6, 4)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(6, 5)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(6, 6)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(6, 7)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(6, 8)->setSelectedType(1);

	this->getGameElement_SpaceSpecific(7, 1)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(7, 2)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(7, 3)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(7, 4)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(7, 5)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(7, 6)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(7, 7)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(7, 8)->setSelectedType(2);

	this->getGameElement_SpaceSpecific(8, 1)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(8, 2)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(8, 3)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(8, 4)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(8, 5)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(8, 6)->setSelectedType(1);
	this->getGameElement_SpaceSpecific(8, 7)->setSelectedType(2);
	this->getGameElement_SpaceSpecific(8, 8)->setSelectedType(1);



	this->getGameElement_OutlineSpecific(1, 1)->setSelectedType(0);
	this->getGameElement_OutlineSpecific(1, 2)->setSelectedType(0);
	this->getGameElement_OutlineSpecific(1, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(1, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(1, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(1, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(1, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(1, 8)->setSelectedType(0); 

	this->getGameElement_OutlineSpecific(2, 1)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(2, 2)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(2, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(2, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(2, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(2, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(2, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(2, 8)->setSelectedType(0); 

	this->getGameElement_OutlineSpecific(3, 1)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(3, 2)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(3, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(3, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(3, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(3, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(3, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(3, 8)->setSelectedType(0); 

	this->getGameElement_OutlineSpecific(4, 1)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(4, 2)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(4, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(4, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(4, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(4, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(4, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(4, 8)->setSelectedType(0); 

	this->getGameElement_OutlineSpecific(5, 1)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(5, 2)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(5, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(5, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(5, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(5, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(5, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(5, 8)->setSelectedType(0); 

	this->getGameElement_OutlineSpecific(6, 1)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(6, 2)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(6, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(6, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(6, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(6, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(6, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(6, 8)->setSelectedType(0); 

	this->getGameElement_OutlineSpecific(7, 1)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(7, 2)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(7, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(7, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(7, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(7, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(7, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(7, 8)->setSelectedType(0); 

	this->getGameElement_OutlineSpecific(8, 1)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(8, 2)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(8, 3)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(8, 4)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(8, 5)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(8, 6)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(8, 7)->setSelectedType(0); 
	this->getGameElement_OutlineSpecific(8, 8)->setSelectedType(0); 

}

Chess::BoardSpace^ Chess::GameSpace::Board::getGameElement_SpaceSpecific(int x, int xsp)
{
	
	return ((GameElement_SpaceAll[x - 1])->GetAt(xsp - 1));
}

void Chess::GameSpace::Board::setGameElement_SpaceSpecific(Chess::BoardSpace^ a, int x, int xsp)
{
	((GameElement_SpaceAll[x - 1])->SetAt(xsp - 1, a));
}

Chess::BoardOutline^ Chess::GameSpace::Board::getGameElement_OutlineSpecific(int x, int xsp)
{
	return ((GameElement_OutlineAll[x - 1])->GetAt(xsp - 1));
}

void Chess::GameSpace::Board::setGameElement_OutlineSpecific(Chess::BoardOutline^ a, int x, int xsp)
{
	((GameElement_OutlineAll[x - 1])->SetAt(xsp - 1, a));
}



Vector<Chess::BoardSpace^>^ Chess::GameSpace::Board::getGameElement_Space(int x)
{
	return nullptr;
}

void Chess::GameSpace::Board::setGameElement_Space(Vector<Chess::BoardSpace^>^ a, int x)
{
}

Vector<Chess::BoardOutline^>^ Chess::GameSpace::Board::getGameElement_Outline(int x)
{
	return nullptr;
}

void Chess::GameSpace::Board::setGameElement_Outline(Vector<Chess::BoardOutline^>^ a, int x)
{
}

Chess::BoardSpace^ Chess::GameSpace::Board::getSelectedBoardSpace()
{
	return SelectedBoardSpace;
}
void Chess::GameSpace::Board::setSelectedBoardSpace(BoardSpace^ x)
{
	SelectedBoardSpace = x;
}
Chess::BoardOutline^ Chess::GameSpace::Board::getSelectedBoardOutline()
{
	return SelectedBoardOutline;
}
void Chess::GameSpace::Board::setSelectedBoardOutline(BoardOutline^ x)
{
	SelectedBoardOutline = x;
}

Chess::BoardSpace^ Chess::GameSpace::Board::getSelectedPossibleBoardSpace()
{
	return SelectedPossibleBoardSpace;
}
void Chess::GameSpace::Board::setSelectedPossibleBoardSpace(BoardSpace^ x)
{
	SelectedPossibleBoardSpace = x;
}
Chess::BoardOutline^ Chess::GameSpace::Board::getSelectedPossibleBoardOutline()
{
	return SelectedPossibleBoardOutline;
}
void Chess::GameSpace::Board::setSelectedPossibleBoardOutline(BoardOutline^ x)
{
	SelectedPossibleBoardOutline = x;
}

using namespace Windows::UI::Popups;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;

void Chess::GameSpace::Board::FindSelectedPossible(bool toshow)
{
	int firstbound=1, secondbound=1;


	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((GameElement_OutlineAll[i])->GetAt(j) == SelectedBoardOutline)
			{
				firstbound = i;
				secondbound = j;
			}
		}
	}
	if (toshow)
	{
		(GameElement_OutlineAll[firstbound - 1])->GetAt(secondbound - 1)->setSelectedType(3);
		(GameElement_OutlineAll[firstbound + 1])->GetAt(secondbound + 1)->setSelectedType(3);
		(GameElement_OutlineAll[firstbound - 2])->GetAt(secondbound - 2)->setSelectedType(3);
		(GameElement_OutlineAll[firstbound + 2])->GetAt(secondbound + 2)->setSelectedType(3);
	}
	else
	{
		(GameElement_OutlineAll[firstbound - 1])->GetAt(secondbound - 1)->setSelectedType(0);
		(GameElement_OutlineAll[firstbound + 1])->GetAt(secondbound + 1)->setSelectedType(0);
		(GameElement_OutlineAll[firstbound - 2])->GetAt(secondbound - 2)->setSelectedType(0);
		(GameElement_OutlineAll[firstbound + 2])->GetAt(secondbound + 2)->setSelectedType(0);
	}
}