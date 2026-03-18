#pragma once

class UWall;
class UFloor;
class UPlayer;
class UMonster;
class UDestination;

class UWorld
{
public:
	UWorld();
	~UWorld();

	UWall* Wall;
	UFloor* Floor;
	UPlayer* Player;
	UMonster* Monster;
	UDestination* Destination;
};

