#include "UPlayer.h"
#include "UPosition.h"

UPlayer::UPlayer()
{
	Position = new UPosition;
	Position->X = 1;
	Position->Y = 1;
}

UPlayer::~UPlayer()
{

}
