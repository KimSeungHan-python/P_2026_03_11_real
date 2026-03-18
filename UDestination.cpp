#include "UDestination.h"
#include "UPlayer.h"
UDestination::UDestination()
{
	Player = new UPlayer;
}

UDestination::~UDestination()
{
	delete Player;
}

void UDestination::GameEnd()
{

}