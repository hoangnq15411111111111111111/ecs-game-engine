// Includes
//=========

#include "cBoid.h"

#include "cRenderComponent.h"
#include "cBoidComponent.h"

#include <Engine/EntityComponentSystem/ComponentManager.h>

// Initialization / Clean Up
//--------------------------

eae6320::cBoid::cBoid()
{

}

void eae6320::cBoid::Initialize()
{

	AddComponent<cRenderComponent>("data/prefabs/boid.prefab", Math::sVector((float)(rand() % 10), (float)(rand() % 10), (float)(rand() % 10)), Math::cQuaternion());
	AddComponent<cBoidComponent>(GetComponent<cRenderComponent>());
}
