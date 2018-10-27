//
// Game.xaml.cpp
// Implementation of the Game class
//

#include "pch.h"
#include "Game.xaml.h"
#include "Code\Objects\BoardOutline.xaml.h"
#include "Code\Objects\BoardSpace.xaml.h"

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

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

Game::Game()
{
	InitializeComponent();

	

	BoardSpace11->ChangeType(1);
	BoardSpace12->ChangeType(2);
	BoardSpace13->ChangeType(1);
	BoardSpace14->ChangeType(2);
	BoardSpace15->ChangeType(1);
	BoardSpace16->ChangeType(2);
	BoardSpace17->ChangeType(1);
	BoardSpace18->ChangeType(2);

	BoardSpace21->ChangeType(2);
	BoardSpace22->ChangeType(1);
	BoardSpace23->ChangeType(2);
	BoardSpace24->ChangeType(1);
	BoardSpace25->ChangeType(2);
	BoardSpace26->ChangeType(1);
	BoardSpace27->ChangeType(2);
	BoardSpace28->ChangeType(1);

	BoardSpace31->ChangeType(1);
	BoardSpace32->ChangeType(2);
	BoardSpace33->ChangeType(1);
	BoardSpace34->ChangeType(2);
	BoardSpace35->ChangeType(1);
	BoardSpace36->ChangeType(2);
	BoardSpace37->ChangeType(1);
	BoardSpace38->ChangeType(2);

	BoardSpace41->ChangeType(2);
	BoardSpace42->ChangeType(1);
	BoardSpace43->ChangeType(2);
	BoardSpace44->ChangeType(1);
	BoardSpace45->ChangeType(2);
	BoardSpace46->ChangeType(1);
	BoardSpace47->ChangeType(2);
	BoardSpace48->ChangeType(1);

	BoardSpace51->ChangeType(1);
	BoardSpace52->ChangeType(2);
	BoardSpace53->ChangeType(1);
	BoardSpace54->ChangeType(2);
	BoardSpace55->ChangeType(1);
	BoardSpace56->ChangeType(2);
	BoardSpace57->ChangeType(1);
	BoardSpace58->ChangeType(2);

	BoardSpace61->ChangeType(2);
	BoardSpace62->ChangeType(1);
	BoardSpace63->ChangeType(2);
	BoardSpace64->ChangeType(1);
	BoardSpace65->ChangeType(2);
	BoardSpace66->ChangeType(1);
	BoardSpace67->ChangeType(2);
	BoardSpace68->ChangeType(1);

	BoardSpace71->ChangeType(1);
	BoardSpace72->ChangeType(2);
	BoardSpace73->ChangeType(1);
	BoardSpace74->ChangeType(2);
	BoardSpace75->ChangeType(1);
	BoardSpace76->ChangeType(2);
	BoardSpace77->ChangeType(1);
	BoardSpace78->ChangeType(2);

	BoardSpace81->ChangeType(2);
	BoardSpace82->ChangeType(1);
	BoardSpace83->ChangeType(2);
	BoardSpace84->ChangeType(1);
	BoardSpace85->ChangeType(2);
	BoardSpace86->ChangeType(1);
	BoardSpace87->ChangeType(2);
	BoardSpace88->ChangeType(1);



	BoardOutline11->ChangeType(0);
	BoardOutline12->ChangeType(0);
	BoardOutline13->ChangeType(0);
	BoardOutline14->ChangeType(0);
	BoardOutline15->ChangeType(0);
	BoardOutline16->ChangeType(0);
	BoardOutline17->ChangeType(0);
	BoardOutline18->ChangeType(0);

	BoardOutline21->ChangeType(0);
	BoardOutline22->ChangeType(0);
	BoardOutline23->ChangeType(0);
	BoardOutline24->ChangeType(0);
	BoardOutline25->ChangeType(0);
	BoardOutline26->ChangeType(0);
	BoardOutline27->ChangeType(0);
	BoardOutline28->ChangeType(0);

	BoardOutline31->ChangeType(0);
	BoardOutline32->ChangeType(0);
	BoardOutline33->ChangeType(0);
	BoardOutline34->ChangeType(0);
	BoardOutline35->ChangeType(0);
	BoardOutline36->ChangeType(0);
	BoardOutline37->ChangeType(0);
	BoardOutline38->ChangeType(0);

	BoardOutline41->ChangeType(0);
	BoardOutline42->ChangeType(0);
	BoardOutline43->ChangeType(0);
	BoardOutline44->ChangeType(0);
	BoardOutline45->ChangeType(0);
	BoardOutline46->ChangeType(0);
	BoardOutline47->ChangeType(0);
	BoardOutline48->ChangeType(0);

	BoardOutline51->ChangeType(0);
	BoardOutline52->ChangeType(0);
	BoardOutline53->ChangeType(0);
	BoardOutline54->ChangeType(0);
	BoardOutline55->ChangeType(0);
	BoardOutline56->ChangeType(0);
	BoardOutline57->ChangeType(0);
	BoardOutline58->ChangeType(0);

	BoardOutline61->ChangeType(0);
	BoardOutline62->ChangeType(0);
	BoardOutline63->ChangeType(0);
	BoardOutline64->ChangeType(0);
	BoardOutline65->ChangeType(0);
	BoardOutline66->ChangeType(0);
	BoardOutline67->ChangeType(0);
	BoardOutline68->ChangeType(0);

	BoardOutline71->ChangeType(0);
	BoardOutline72->ChangeType(0);
	BoardOutline73->ChangeType(0);
	BoardOutline74->ChangeType(0);
	BoardOutline75->ChangeType(0);
	BoardOutline76->ChangeType(0);
	BoardOutline77->ChangeType(0);
	BoardOutline78->ChangeType(0);

	BoardOutline81->ChangeType(0);
	BoardOutline82->ChangeType(0);
	BoardOutline83->ChangeType(0);
	BoardOutline84->ChangeType(0);
	BoardOutline85->ChangeType(0);
	BoardOutline86->ChangeType(0);
	BoardOutline87->ChangeType(0);
	BoardOutline88->ChangeType(0);


}


void Chess::Game::ChangeBoardSpaceType(std::string ssname, int sw)
{
	if (strstr(ssname.c_str(), "11"))
		BoardOutline11->ChangeType(sw);
	if (strstr(ssname.c_str(), "12"))
		BoardOutline12->ChangeType(sw);
	if (strstr(ssname.c_str(), "13"))
		BoardOutline13->ChangeType(sw);
	if (strstr(ssname.c_str(), "14"))
		BoardOutline14->ChangeType(sw);
	if (strstr(ssname.c_str(), "15"))
		BoardOutline15->ChangeType(sw);
	if (strstr(ssname.c_str(), "16"))
		BoardOutline16->ChangeType(sw);
	if (strstr(ssname.c_str(), "17"))
		BoardOutline17->ChangeType(sw);
	if (strstr(ssname.c_str(), "18"))
		BoardOutline18->ChangeType(sw);

	if (strstr(ssname.c_str(), "21"))
		BoardOutline21->ChangeType(sw);
	if (strstr(ssname.c_str(), "22"))
		BoardOutline22->ChangeType(sw);
	if (strstr(ssname.c_str(), "23"))
		BoardOutline23->ChangeType(sw);
	if (strstr(ssname.c_str(), "24"))
		BoardOutline24->ChangeType(sw);
	if (strstr(ssname.c_str(), "25"))
		BoardOutline25->ChangeType(sw);
	if (strstr(ssname.c_str(), "26"))
		BoardOutline26->ChangeType(sw);
	if (strstr(ssname.c_str(), "27"))
		BoardOutline27->ChangeType(sw);
	if (strstr(ssname.c_str(), "28"))
		BoardOutline28->ChangeType(sw);

	if (strstr(ssname.c_str(), "31"))
		BoardOutline31->ChangeType(sw);
	if (strstr(ssname.c_str(), "32"))
		BoardOutline32->ChangeType(sw);
	if (strstr(ssname.c_str(), "33"))
		BoardOutline33->ChangeType(sw);
	if (strstr(ssname.c_str(), "34"))
		BoardOutline34->ChangeType(sw);
	if (strstr(ssname.c_str(), "35"))
		BoardOutline35->ChangeType(sw);
	if (strstr(ssname.c_str(), "36"))
		BoardOutline36->ChangeType(sw);
	if (strstr(ssname.c_str(), "37"))
		BoardOutline37->ChangeType(sw);
	if (strstr(ssname.c_str(), "38"))
		BoardOutline38->ChangeType(sw);

	if (strstr(ssname.c_str(), "41"))
		BoardOutline41->ChangeType(sw);
	if (strstr(ssname.c_str(), "42"))
		BoardOutline42->ChangeType(sw);
	if (strstr(ssname.c_str(), "43"))
		BoardOutline43->ChangeType(sw);
	if (strstr(ssname.c_str(), "44"))
		BoardOutline44->ChangeType(sw);
	if (strstr(ssname.c_str(), "45"))
		BoardOutline45->ChangeType(sw);
	if (strstr(ssname.c_str(), "46"))
		BoardOutline46->ChangeType(sw);
	if (strstr(ssname.c_str(), "47"))
		BoardOutline47->ChangeType(sw);
	if (strstr(ssname.c_str(), "48"))
		BoardOutline48->ChangeType(sw);

	if (strstr(ssname.c_str(), "51"))
		BoardOutline51->ChangeType(sw);
	if (strstr(ssname.c_str(), "52"))
		BoardOutline52->ChangeType(sw);
	if (strstr(ssname.c_str(), "53"))
		BoardOutline53->ChangeType(sw);
	if (strstr(ssname.c_str(), "54"))
		BoardOutline54->ChangeType(sw);
	if (strstr(ssname.c_str(), "55"))
		BoardOutline55->ChangeType(sw);
	if (strstr(ssname.c_str(), "56"))
		BoardOutline56->ChangeType(sw);
	if (strstr(ssname.c_str(), "57"))
		BoardOutline57->ChangeType(sw);
	if (strstr(ssname.c_str(), "58"))
		BoardOutline58->ChangeType(sw);

	if (strstr(ssname.c_str(), "61"))
		BoardOutline61->ChangeType(sw);
	if (strstr(ssname.c_str(), "62"))
		BoardOutline62->ChangeType(sw);
	if (strstr(ssname.c_str(), "63"))
		BoardOutline63->ChangeType(sw);
	if (strstr(ssname.c_str(), "64"))
		BoardOutline64->ChangeType(sw);
	if (strstr(ssname.c_str(), "65"))
		BoardOutline65->ChangeType(sw);
	if (strstr(ssname.c_str(), "66"))
		BoardOutline66->ChangeType(sw);
	if (strstr(ssname.c_str(), "67"))
		BoardOutline67->ChangeType(sw);
	if (strstr(ssname.c_str(), "68"))
		BoardOutline68->ChangeType(sw);

	if (strstr(ssname.c_str(), "71"))
		BoardOutline71->ChangeType(sw);
	if (strstr(ssname.c_str(), "72"))
		BoardOutline72->ChangeType(sw);
	if (strstr(ssname.c_str(), "73"))
		BoardOutline73->ChangeType(sw);
	if (strstr(ssname.c_str(), "74"))
		BoardOutline74->ChangeType(sw);
	if (strstr(ssname.c_str(), "75"))
		BoardOutline75->ChangeType(sw);
	if (strstr(ssname.c_str(), "76"))
		BoardOutline76->ChangeType(sw);
	if (strstr(ssname.c_str(), "77"))
		BoardOutline77->ChangeType(sw);
	if (strstr(ssname.c_str(), "78"))
		BoardOutline78->ChangeType(sw);

	if (strstr(ssname.c_str(), "81"))
		BoardOutline81->ChangeType(sw);
	if (strstr(ssname.c_str(), "82"))
		BoardOutline82->ChangeType(sw);
	if (strstr(ssname.c_str(), "83"))
		BoardOutline83->ChangeType(sw);
	if (strstr(ssname.c_str(), "84"))
		BoardOutline84->ChangeType(sw);
	if (strstr(ssname.c_str(), "85"))
		BoardOutline85->ChangeType(sw);
	if (strstr(ssname.c_str(), "86"))
		BoardOutline86->ChangeType(sw);
	if (strstr(ssname.c_str(), "87"))
		BoardOutline87->ChangeType(sw);
	if (strstr(ssname.c_str(), "88"))
		BoardOutline88->ChangeType(sw);
}

void Chess::Game::BoardSpace_PointerEntered(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{

	FrameworkElement^ obj = static_cast<FrameworkElement^>(sender); //get element of sender

	String^ rname = obj->Name; //get element name in platform::string
	std::wstring sname = (rname->Data()); //convert to std::wstring

	using convert_type = std::codecvt_utf8<wchar_t>; //conversion of std::wstring to std::string
	std::wstring_convert<convert_type, wchar_t> converter; //conversion of std::wstring to std::string
	std::string ssname = converter.to_bytes(sname); //convert to std::string


	ChangeBoardSpaceType(ssname, 2);
	
}


void Chess::Game::BoardSpace_PointerExited(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	FrameworkElement^ obj = static_cast<FrameworkElement^>(sender); //get element of sender

	String^ rname = obj->Name; //get element name in platform::string
	std::wstring sname = (rname->Data()); //convert to std::wstring

	using convert_type = std::codecvt_utf8<wchar_t>; //conversion of std::wstring to std::string
	std::wstring_convert<convert_type, wchar_t> converter; //conversion of std::wstring to std::string
	std::string ssname = converter.to_bytes(sname); //convert to std::string


	ChangeBoardSpaceType(ssname, 0);

}


void Chess::Game::BoardSpace_PointerReleased(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ e)
{
	FrameworkElement^ obj = static_cast<FrameworkElement^>(sender); //get element of sender

	String^ rname = obj->Name; //get element name in platform::string
	std::wstring sname = (rname->Data()); //convert to std::wstring

	using convert_type = std::codecvt_utf8<wchar_t>; //conversion of std::wstring to std::string
	std::wstring_convert<convert_type, wchar_t> converter; //conversion of std::wstring to std::string
	std::string ssname = converter.to_bytes(sname); //convert to std::string


	ChangeBoardSpaceType(ssname, 1);
}
