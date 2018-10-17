﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "Code\Objects\BoardOutline.xaml.h"
#include "Code\Objects\BoardSpace.xaml.h"
#include "Code\Objects\Piece.xaml.h"
#include "Code\Objects\PieceBishop.xaml.h"
#include "Code\Objects\PieceKing.xaml.h"
#include "Code\Objects\PieceKnight.xaml.h"
#include "Code\Objects\PiecePawn.xaml.h"
#include "Code\Objects\PieceQueen.xaml.h"
#include "Code\Objects\PieceRook.xaml.h"
#include "Code\Pages\Message.xaml.h"
#include "Code\Pages\Game.xaml.h"
#include "App.xaml.h"
#include "Code\Pages\Start.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "Code\Objects\BoardOutline.g.hpp"
#include "Code\Objects\BoardSpace.g.hpp"
#include "Code\Objects\Piece.g.hpp"
#include "Code\Objects\PieceBishop.g.hpp"
#include "Code\Objects\PieceKing.g.hpp"
#include "Code\Objects\PieceKnight.g.hpp"
#include "Code\Objects\PiecePawn.g.hpp"
#include "Code\Objects\PieceQueen.g.hpp"
#include "Code\Objects\PieceRook.g.hpp"
#include "Code\Pages\Message.g.hpp"
#include "Code\Pages\Game.g.hpp"
#include "App.g.hpp"
#include "Code\Pages\Start.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

enum TypeInfo_Flags
{
    TypeInfo_Flags_None                 = 0x00,
    TypeInfo_Flags_IsLocalType          = 0x01,
    TypeInfo_Flags_IsSystemType         = 0x02,
    TypeInfo_Flags_IsReturnTypeStub     = 0x04,
    TypeInfo_Flags_IsBindable           = 0x08,
    TypeInfo_Flags_IsMarkupExtension    = 0x10, 
};

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    int     createFromStringIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    unsigned int flags;
};

const TypeInfo TypeInfos[] = 
{
    //   0
    L"Chess.Game", L"",
    &ActivateType<::Chess::Game>, nullptr, nullptr, nullptr,
    12, // Windows.UI.Xaml.Controls.Page
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   1
    L"Chess.Piece", L"",
    &ActivateType<::Chess::Piece>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   2
    L"Chess.Start", L"",
    &ActivateType<::Chess::Start>, nullptr, nullptr, nullptr,
    12, // Windows.UI.Xaml.Controls.Page
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   3
    L"Chess.Message", L"",
    &ActivateType<::Chess::Message>, nullptr, nullptr, nullptr,
    14, // Windows.UI.Xaml.Controls.ContentDialog
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   4
    L"Chess.PieceKing", L"",
    &ActivateType<::Chess::PieceKing>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   5
    L"Chess.PiecePawn", L"",
    &ActivateType<::Chess::PiecePawn>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   6
    L"Chess.PieceRook", L"",
    &ActivateType<::Chess::PieceRook>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   7
    L"Chess.BoardSpace", L"",
    &ActivateType<::Chess::BoardSpace>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   8
    L"Chess.PieceQueen", L"",
    &ActivateType<::Chess::PieceQueen>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   9
    L"Chess.PieceBishop", L"",
    &ActivateType<::Chess::PieceBishop>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //  10
    L"Chess.PieceKnight", L"",
    &ActivateType<::Chess::PieceKnight>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //  11
    L"Chess.BoardOutline", L"",
    &ActivateType<::Chess::BoardOutline>, nullptr, nullptr, nullptr,
    13, // Windows.UI.Xaml.Controls.UserControl
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //  12
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //  13
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //  14
    L"Windows.UI.Xaml.Controls.ContentDialog", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //  15
    L"Windows.UI.Xaml.Controls.ContentControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_None,
};

const UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      0,   //   7
      0,   //   8
      0,   //   9
      0,   //  10
      1,   //  11
      3,   //  12
      3,   //  13
      4,   //  14
      4,   //  15
      7,   //  16
      9,   //  17
     11,   //  18
     12,   //  19
     12,   //  20
     12,   //  21
     12,   //  22
     12,   //  23
     12,   //  24
     12,   //  25
     12,   //  26
     12,   //  27
     12,   //  28
     12,   //  29
     13,   //  30
     13,   //  31
     13,   //  32
     13,   //  33
     13,   //  34
     13,   //  35
     13,   //  36
     14,   //  37
     14,   //  38
     15,   //  39
     16,   //  40
};

const TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    auto typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        auto otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        _otherProviders = otherProviders;
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    const TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->flags & TypeInfo_Flags_IsSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->flags & TypeInfo_Flags_IsLocalType;
        userType->IsReturnTypeStub = pTypeInfo->flags & TypeInfo_Flags_IsReturnTypeStub;
        userType->IsBindable = pTypeInfo->flags & TypeInfo_Flags_IsBindable;
        userType->IsMarkupExtension = pTypeInfo->flags & TypeInfo_Flags_IsMarkupExtension;
        userType->CreateFromStringMethod = nullptr;
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    // No Local Properties
    (void)longMemberName; // Unused parameter
    return xamlMember;
}

