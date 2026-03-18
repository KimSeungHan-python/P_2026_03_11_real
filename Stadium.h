#pragma once
#include "Actor.h"
class APlayer;
class AReferee;
class ASpectator;
class ATeam;
class ABall;
class AGoalPost;
class AAdvertise;

class AStadium : public AActor
{
public:
	AStadium();
	~AStadium();

	APlayer* Player;
	AReferee* Referee;
	ASpectator* Spectator;
	ATeam* Team;
	ABall* Ball;
	AGoalPost* GoalPost;
	AAdvertise* Advertise;

};

