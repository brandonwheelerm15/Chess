#ifndef TIMER_H
#define TIMER_H
#pragma once
#include "Code/Namespace/Namespace.h"

#include <ctime>

using namespace Chess::TimerSpace;

class Chess::TimerSpace::Timer
{
public:
	Timer();
	void Start();
	void Stop();
	void Reset();
	bool Running();
	unsigned long Tick();
	bool OverTick(unsigned long seconds);
private:
	bool res;
	bool run;
	unsigned long b;
	unsigned long e;

};

#endif