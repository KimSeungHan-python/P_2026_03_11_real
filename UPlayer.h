#pragma once
class UPosition;

class UPlayer
{
public:
	UPlayer();
	~UPlayer();

	UPosition* Position;

	void Move();
};

