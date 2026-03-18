#include "Stadium.h"
#include "Player.h"
#include "Referee.h"
#include "Spectator.h"
#include "Team.h"
#include "Ball.h"
#include "GoalPost.h"
#include "Advertise.h"

AStadium::AStadium()
{
	Player = new APlayer;
	Referee = new AReferee;
	Spectator = new ASpectator;
	Team = new ATeam;
	Ball = new ABall;
	GoalPost = new AGoalPost;
	Advertise = new AAdvertise;
}

AStadium::~AStadium()
{
	delete Player;
	delete Referee;
	delete Spectator;
	delete Team;
	delete Ball;
	delete GoalPost;
	delete Advertise;
}
