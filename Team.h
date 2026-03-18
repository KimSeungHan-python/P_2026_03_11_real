#pragma once
#include "Actor.h"

class APlayer;

class ATeam : public AActor
{
public:
	ATeam();
	~ATeam();

	APlayer* Player;

};

