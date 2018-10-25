#include "Code\Headers\Common.h"
#include "Code\Namespace\Namespace.h"

using namespace Chess::CommonSpace;

Common::DetectedOS Common::DetectOS() {
#if defined(_WIN32)
	return Windows;
#endif
#if defined(__linux__) || defined(__APPLE__) || defined(__unix__)
	return Unix;
#endif
}