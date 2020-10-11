#include "Src/Engine/Engine.h"
#include "Enemy.h"

int Counter = 0;
Vec2 Position(200.0f, 200.0f);
int step = 0;

void  EnemyMovement()
{
	Engine::LoadTexture("Enemy", "Res/Enemy.png");
	Engine::DrawTexture(Position.X, Position.Y, "Enemy");


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
	}
	else if(Counter <= 320)
	{
		step = 4;
	}
	else if(Counter <= 360)
	{
		step = 0;
		
	}
	else if (Counter <= 400)
	{
		step = 4;
	}
	else if (Counter <= 440)
	{
		step = 0;
	}
	else if (Counter <= 480)
	{
		step = 3;
	}
	else if(Counter <= 520)
	{
		step = 0;
	}
	else if(Counter <= 560)
	{
		step = 2;
	}
	else if(Counter <= 600)
	{
		step = 0;
	}
	else if (Counter <= 640)
	{
		step = 1;
	}
	else if(Counter <= 680)
	{
		step = 0;
		Counter = 0;
	}


	

	switch (step)
	{
	case 1:
		Position.X -= 2.0f;
	
		
		break;

	case 2:
		
		Position.X += 2.0f;

		
		break;
	case 3:
		Position.Y -= 2.0f;
		
		break;

	case 4:
		Position.Y += 2.0f;

		break;

	case 5: Position.Y += 2.0f;
		break;
	}

	

	

	
}