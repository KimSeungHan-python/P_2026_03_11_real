#include "UWorld.h"
#include "UWall.h"
#include "UFloor.h"
#include "UPlayer.h"
#include "UMonster.h"
#include "UDestination.h"

UWorld::UWorld()
{
	Wall = new UWall;
	Floor = new UFloor;
	Player = new UPlayer;
	Monster = new UMonster;
	Destination = new UDestination;

}

UWorld::~UWorld()
{
	delete Wall;
	delete Floor;
	delete Player;
	delete Monster;
	delete Destination;
}
