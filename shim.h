#ifdef __linux__
#include <freetype/freetype.h>
#include <freetype/tttables.h>
#elif defined(__APPLE__)
#include <freetype/freetype.h>
#include <freetype/tttables.h>
#else
#include <freetype.h>
#include <tttables.h>
