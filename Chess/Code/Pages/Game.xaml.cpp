//
// Game.xaml.cpp
// Implementation of the Game class
//

#include "pch.h"
#include "Game.xaml.h"
#include "Code\Objects\BoardOutline.xaml.h"
#include "Code\Objects\BoardSpace.xaml.h"
#include "Code\Headers\Board.h"

#include <locale>
#include <codecvt>


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
using namespace Platform::Collections;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

Game::Game()
{
	InitializeComponent();

	Board CurrentBoard;

	CurrentBoard.InitBoard();

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace11, 1, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace12, 1, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace13, 1, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace14, 1, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace15, 1, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace16, 1, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace17, 1, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace18, 1, 8);

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace21, 2, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace22, 2, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace23, 2, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace24, 2, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace25, 2, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace26, 2, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace27, 2, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace28, 2, 8);

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace31, 3, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace32, 3, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace33, 3, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace34, 3, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace35, 3, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace36, 3, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace37, 3, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace38, 3, 8);

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace41, 4, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace42, 4, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace43, 4, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace44, 4, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace45, 4, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace46, 4, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace47, 4, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace48, 4, 8);

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace51, 5, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace52, 5, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace53, 5, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace54, 5, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace55, 5, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace56, 5, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace57, 5, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace58, 5, 8);

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace61, 6, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace62, 6, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace63, 6, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace64, 6, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace65, 6, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace66, 6, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace67, 6, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace68, 6, 8);

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace71, 7, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace72, 7, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace73, 7, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace74, 7, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace75, 7, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace76, 7, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace77, 7, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace78, 7, 8);

	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace81, 8, 1);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace82, 8, 2);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace83, 8, 3);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace84, 8, 4);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace85, 8, 5);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace86, 8, 6);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace87, 8, 7);
	CurrentBoard.setGameElement_SpaceSpecific(BoardSpace88, 8, 8);



	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline11, 1, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline12, 1, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline13, 1, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline14, 1, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline15, 1, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline16, 1, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline17, 1, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline18, 1, 8);

	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline21, 2, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline22, 2, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline23, 2, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline24, 2, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline25, 2, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline26, 2, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline27, 2, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline28, 2, 8);

	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline31, 3, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline32, 3, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline33, 3, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline34, 3, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline35, 3, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline36, 3, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline37, 3, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline38, 3, 8);

	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline41, 4, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline42, 4, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline43, 4, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline44, 4, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline45, 4, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline46, 4, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline47, 4, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline48, 4, 8);

	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline51, 5, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline52, 5, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline53, 5, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline54, 5, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline55, 5, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline56, 5, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline57, 5, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline58, 5, 8);

	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline61, 6, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline62, 6, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline63, 6, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline64, 6, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline65, 6, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline66, 6, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline67, 6, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline68, 6, 8);

	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline71, 7, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline72, 7, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline73, 7, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline74, 7, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline75, 7, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline76, 7, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline77, 7, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline78, 7, 8);

	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline81, 8, 1);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline82, 8, 2);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline83, 8, 3);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline84, 8, 4);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline85, 8, 5);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline86, 8, 6);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline87, 8, 7);
	CurrentBoard.setGameElement_OutlineSpecific(BoardOutline88, 8, 8);



	CurrentBoard.ResetBoard();
}

BoardOutline^ Chess::Game::FindBoardSpaceType(std::string ssname)
{
	if (strstr(ssname.c_str(), "11"))
		return BoardOutline11;
	if (strstr(ssname.c_str(), "12"))
		return BoardOutline12;
	if (strstr(ssname.c_str(), "13"))
		return BoardOutline13;
	if (strstr(ssname.c_str(), "14"))
		return BoardOutline14;
	if (strstr(ssname.c_str(), "15"))
		return BoardOutline15;
	if (strstr(ssname.c_str(), "16"))
		return BoardOutline16;
	if (strstr(ssname.c_str(), "17"))
		return BoardOutline17;
	if (strstr(ssname.c_str(), "18"))
		return BoardOutline18;

	if (strstr(ssname.c_str(), "21"))
		return BoardOutline21;
	if (strstr(ssname.c_str(), "22"))
		return BoardOutline22;
	if (strstr(ssname.c_str(), "23"))
		return BoardOutline23;
	if (strstr(ssname.c_str(), "24"))
		return BoardOutline24;
	if (strstr(ssname.c_str(), "25"))
		return BoardOutline25;
	if (strstr(ssname.c_str(), "26"))
		return BoardOutline26;
	if (strstr(ssname.c_str(), "27"))
		return BoardOutline27;
	if (strstr(ssname.c_str(), "28"))
		return BoardOutline28;

	if (strstr(ssname.c_str(), "31"))
		return BoardOutline31;
	if (strstr(ssname.c_str(), "32"))
		return BoardOutline32;
	if (strstr(ssname.c_str(), "33"))
		return BoardOutline33;
	if (strstr(ssname.c_str(), "34"))
		return BoardOutline34;
	if (strstr(ssname.c_str(), "35"))
		return BoardOutline35;
	if (strstr(ssname.c_str(), "36"))
		return BoardOutline36;
	if (strstr(ssname.c_str(), "37"))
		return BoardOutline37;
	if (strstr(ssname.c_str(), "38"))
		return BoardOutline38;

	if (strstr(ssname.c_str(), "41"))
		return BoardOutline41;
	if (strstr(ssname.c_str(), "42"))
		return BoardOutline42;
	if (strstr(ssname.c_str(), "43"))
		return BoardOutline43;
	if (strstr(ssname.c_str(), "44"))
		return BoardOutline44;
	if (strstr(ssname.c_str(), "45"))
		return BoardOutline45;
	if (strstr(ssname.c_str(), "46"))
		return BoardOutline46;
	if (strstr(ssname.c_str(), "47"))
		return BoardOutline47;
	if (strstr(ssname.c_str(), "48"))
		return BoardOutline48;

	if (strstr(ssname.c_str(), "51"))
		return BoardOutline51;
	if (strstr(ssname.c_str(), "52"))
		return BoardOutline52;
	if (strstr(ssname.c_str(), "53"))
		return BoardOutline53;
	if (strstr(ssname.c_str(), "54"))
		return BoardOutline54;
	if (strstr(ssname.c_str(), "55"))
		return BoardOutline55;
	if (strstr(ssname.c_str(), "56"))
		return BoardOutline56;
	if (strstr(ssname.c_str(), "57"))
		return BoardOutline57;
	if (strstr(ssname.c_str(), "58"))
		return BoardOutline58;

	if (strstr(ssname.c_str(), "61"))
		return BoardOutline61;
	if (strstr(ssname.c_str(), "62"))
		return BoardOutline62;
	if (strstr(ssname.c_str(), "63"))
		return BoardOutline63;
	if (strstr(ssname.c_str(), "64"))
		return BoardOutline64;
	if (strstr(ssname.c_str(), "65"))
		return BoardOutline65;
	if (strstr(ssname.c_str(), "66"))
		return BoardOutline66;
	if (strstr(ssname.c_str(), "67"))
		return BoardOutline67;
	if (strstr(ssname.c_str(), "68"))
		return BoardOutline68;

	if (strstr(ssname.c_str(), "71"))
		return BoardOutline71;
	if (strstr(ssname.c_str(), "72"))
		return BoardOutline72;
	if (strstr(ssname.c_str(), "73"))
		return BoardOutline73;
	if (strstr(ssname.c_str(), "74"))
		return BoardOutline74;
	if (strstr(ssname.c_str(), "75"))
		return BoardOutline75;
	if (strstr(ssname.c_str(), "76"))
		return BoardOutline76;
	if (strstr(ssname.c_str(), "77"))
		return BoardOutline77;
	if (strstr(ssname.c_str(), "78"))
		return BoardOutline78;

	if (strstr(ssname.c_str(), "81"))
		return BoardOutline81;
	if (strstr(ssname.c_str(), "82"))
		return BoardOutline82;
	if (strstr(ssname.c_str(), "83"))
		return BoardOutline83;
	if (strstr(ssname.c_str(), "84"))
		return BoardOutline84;
	if (strstr(ssname.c_str(), "85"))
		return BoardOutline85;
	if (strstr(ssname.c_str(), "86"))
		return BoardOutline86;
	if (strstr(ssname.c_str(), "87"))
		return BoardOutline87;
	if (strstr(ssname.c_str(), "88"))
		return BoardOutline88;
}


void Chess::Game::BoardSpace_PointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{

	FrameworkElement^ obj = static_cast<FrameworkElement^>(sender); //get element of sender

	String^ rname = obj->Name; //get element name in platform::string
	std::wstring sname = (rname->Data()); //convert to std::wstring

	using convert_type = std::codecvt_utf8<wchar_t>; //conversion of std::wstring to std::string
	std::wstring_convert<convert_type, wchar_t> converter; //conversion of std::wstring to std::string
	std::string ssname = converter.to_bytes(sname); //convert to std::string


	BoardOutline^ triggered = FindBoardSpaceType(ssname);
	if (triggered->getSelectedType() != 1) {
		triggered->setSelectedType(2);
	}
}


void Chess::Game::BoardSpace_PointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	FrameworkElement^ obj = static_cast<FrameworkElement^>(sender); //get element of sender

	String^ rname = obj->Name; //get element name in platform::string
	std::wstring sname = (rname->Data()); //convert to std::wstring

	using convert_type = std::codecvt_utf8<wchar_t>; //conversion of std::wstring to std::string
	std::wstring_convert<convert_type, wchar_t> converter; //conversion of std::wstring to std::string
	std::string ssname = converter.to_bytes(sname); //convert to std::string

	
	BoardOutline^ triggered = FindBoardSpaceType(ssname);
	if (triggered->getSelectedType() == 2)
	{
		triggered->setSelectedType(0);
	}
}


void Chess::Game::BoardSpace_PointerReleased(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	FrameworkElement^ obj = static_cast<FrameworkElement^>(sender); //get element of sender

	String^ rname = obj->Name; //get element name in platform::string
	std::wstring sname = (rname->Data()); //convert to std::wstring

	using convert_type = std::codecvt_utf8<wchar_t>; //conversion of std::wstring to std::string
	std::wstring_convert<convert_type, wchar_t> converter; //conversion of std::wstring to std::string
	std::string ssname = converter.to_bytes(sname); //convert to std::string

	BoardOutline^ triggered = FindBoardSpaceType(ssname);
	if (triggered->getSelectedType() == 1)
	{
		triggered->setSelectedType(2);
	} else {
		triggered->setSelectedType(1);

	}
}
