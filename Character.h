#pragma once
#include "Actor.h"
#include <string>
class ACharacter : public AActor
{
public:
	ACharacter();
	~ACharacter();
	std::string Name;
	int Mesh;
};

