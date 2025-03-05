#ifndef ZONE_H
#define ZONE_H
#include <stdint.h>
#include <stddef.h>

typedef struct
{
	double x, y, w, h;
} Zone;

extern Zone*	g_mapZone[22];
extern size_t	g_mapZoneSize[22];

#endif