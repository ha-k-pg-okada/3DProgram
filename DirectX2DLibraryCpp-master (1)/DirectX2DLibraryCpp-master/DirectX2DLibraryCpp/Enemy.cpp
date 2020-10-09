#include "Src/Engine/Engine.h"
#include "Enemy.h"

int Counter = 0;
int Counter1 = 0;
Vec2 Position(200.0f, 200.0f);
int step = 0;
//bool a = false;

void  EnemyMovement()
{

	Counter++;
   

	if (Counter <= 40)
	{
		
		step = 0;
		
	}
	else if (Counter <= 80)
	{
		
		step = 1;
		
	}
	else if (Counter <= 120)
	{
		step = 0;
		
	}
	else if (Counter <= 160)
	{
		step = 2;
	}
	else if (Counter <= 200)
	{
		step = 0;
	}

	else if (Counter <= 240)
	{
		step = 3;
	}
	else if(Counter <= 280)
	{
		step = 0;
		//Counter = 0;
	}
	else if(Counter <= 320)
	{
		step = 4;
	}
	else if(Counter <= 360)
	{
		step = 0;
		Counter = 0;
	}


	Engine::DrawTexture(Position.X, Position.Y, "Enemy");
	
	Engine::LoadTexture("Enemy", "Res/Enemy.png");

	switch (step)
	{
	case 1:
		Position.X -= 2.0f;
	
		
		break;

	case 2:
		
		Position.X += 2.0f;

		
		break;
	case 3:
		Position.X += 2.0f;
		
		break;

	case 4:
		Position.X -= 2.0f;

		break;
	}

	

	

	
}