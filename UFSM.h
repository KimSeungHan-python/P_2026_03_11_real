#pragma once
class UState;
class UTransition;

class UFSM

{
public:
	UFSM();
	~UFSM();

	UState* States;
	UTransition* Transitions;
};

