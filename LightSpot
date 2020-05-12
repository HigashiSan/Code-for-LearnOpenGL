#pragma once
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
class LightSpot
{
public:
	LightSpot(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color = glm::vec3(1.0f, 1.0f, 1.0f));
	void UpdateDirection();

	glm::vec3 position;
	glm::vec3 angles;
	glm::vec3 direction = glm::vec3(1.0f, 1.0f, 1.0f);
	glm::vec3 color;

	float CosPhyInner=0.95f;
	float CosPhyOutter = 0.8f;
	float constant = 1.0f;
	float linear = 0.3f;
	float quadratic = 0.001f;
};

#include "LightSpot.h"
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtx/rotate_vector.hpp>

LightSpot::LightSpot(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color):
	position(_position),
	angles(_angles),
	color(_color)
{
	UpdateDirection();
}

void LightSpot::UpdateDirection()
{
	direction = glm::vec3(1.0f, 1.0f, 1.0f);
	direction = glm::rotateZ(direction, angles.z);
	direction = glm::rotateX(direction, angles.x);
	direction = glm::rotateY(direction, angles.y);
	direction = -1.0f * direction;
}
