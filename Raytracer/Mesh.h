#pragma once
#include <glm/glm.hpp>
#include "Ray.h"

class Mesh
{
public:
	Mesh();
	Mesh(glm::vec3 position, glm::float64_t radius);
	~Mesh();

	glm::vec3 Position() const;
	glm::float64_t Radius() const;

	bool Intersects(const Ray&) const;

private:
	glm::vec3 _position;
	glm::float64_t _radius;
};

