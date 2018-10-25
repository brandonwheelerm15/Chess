#include "Code\Headers\Timer.h"
#include "Code\Namespace\Namespace.h"

using namespace Chess::TimerSpace;

Timer::Timer() {
	res = true;
	run = false;
	b = 0;
	e = 0;
}
void Timer::Start() {
	if (!run) {
		if (res) { b = static_cast<unsigned long>(clock()); }
		else { b -= e - static_cast<unsigned long>(clock()); }
		run = true;
		res = false;
	}
}
void Timer::Stop() {
	if (run) {
		e = static_cast<unsigned long>(clock());
		run = false;
	}
}
void Timer::Reset() {
	bool pre = run;
	if (pre) {
		Stop();
		res = true;
		b = 0;
		e = 0;
	}
	if (pre) { Start(); }
}
unsigned long Timer::Tick() {
	if (run) { return (static_cast<unsigned long>(clock()) - b) / CLOCKS_PER_SEC; }
	else { return e - b; }
}
bool Timer::Running() { return run; }
bool Timer::OverTick(unsigned long seconds) { return seconds >= Tick(); }