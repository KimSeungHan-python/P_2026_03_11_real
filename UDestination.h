#pragma once
class UPlayer;

class UDestination
{
public:
	UDestination();
	~UDestination();

	UPlayer* Player;

	void GameEnd();
};

