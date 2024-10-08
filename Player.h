#pragma once
#include "GameEntity.h"
#include "Camera.h"

class Player : public GameEntity
{
private:

	float moveSpeed = 15.0f;
	float gravity = -19.6f;
	float jumpForce = 8;
	float mouseLookSpeed = 1.0f;

	Camera* camera;

	bool localPlayer;

	//TEMPORARY
	float floorHeight = -3;

public:

	Player(Mesh* mesh, Material* material, Camera* camera, bool local = true);

	Camera* GetCamera() { return camera; }

	void Update(float dt);

	void SetVelocity(float x, float y, float z);

	float velocityX;
	float velocityY;
	float velocityZ;

};

