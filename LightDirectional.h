#pragma once
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtx/rotate_vector.hpp>
class LightDirectional
{
public:
	LightDirectional(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color=glm::vec3(1.0f,1.0f,1.0f));
	void UpdateDirection();
	
	glm::vec3 position;
	glm::vec3 angles;
	glm::vec3 direction = glm::vec3(1.0f,1.0f,1.0f);
	glm::vec3 color;
};

#include "LightDirectional.h"
#include <glm.hpp>
#include <gtc/matrix_transform.hpp>

LightDirectional::LightDirectional(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color):
	position(_position),
	angles(_angles),
	color(_color)
{
	UpdateDirection();
}

void LightDirectional::UpdateDirection() {
	direction = glm::vec3(0, 0, 1.0f);
	direction = glm::rotateZ(direction, angles.z);
	direction = glm::rotateX(direction, angles.x);
	direction = glm::rotateY(direction, angles.y);
	direction = -1.0f * direction;
}
