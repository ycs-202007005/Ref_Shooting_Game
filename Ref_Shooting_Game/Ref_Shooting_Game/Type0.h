#pragma once
#include "EnemyBase.h"

class Type0 : public EnemyBase
{
public:
	Type0();
	~Type0();
	bool MoveNext();
private:	
	PatternResult Attack(PatternParam Param);

	class PatternNormal* patternNormal;
};

