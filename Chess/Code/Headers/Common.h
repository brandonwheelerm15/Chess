#ifndef COMMON_H
#define COMMON_H
#pragma once
#include "Code/Namespace/Namespace.h"

using namespace Chess::CommonSpace;

class Chess::CommonSpace::Common
{
public:
	enum DetectedOS { Windows, Unix, Unknown };
	static DetectedOS DetectOS();
private:

};

#endif