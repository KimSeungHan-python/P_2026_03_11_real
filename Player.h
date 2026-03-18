#pragma once
#include "Character.h"
class APlayer : public ACharacter
{
public:
	APlayer();
	~APlayer();

	int PositionX;
	int PositionY;
	int ability;
};

