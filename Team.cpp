#include "Team.h"
#include "Player.h"

ATeam::ATeam()
{
	Player = new APlayer;
}
ATeam::~ATeam()
{
	delete Player;
}
