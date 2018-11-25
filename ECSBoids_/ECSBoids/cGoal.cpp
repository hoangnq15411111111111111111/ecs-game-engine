// Includes
//=========

#include "cGoal.h"

#include "cRenderComponent.h"
#include "cGoalComponent.h"
#include <Engine/EntityComponentSystem/ComponentManager.h>

// Initialization / Clean Up
//--------------------------

eae6320::cGoal::cGoal(cCameraComponent* i_cameraToFollow)
{
	m_cameraToFollow = i_cameraToFollow;
}

void eae6320::cGoal::Initialize()
{
	AddComponent<cRenderComponent>("data/prefabs/goal.prefab", Math::sVector(), Math::cQuaternion());
	AddComponent<cGoalComponent>(GetComponent<cRenderComponent>());
}
