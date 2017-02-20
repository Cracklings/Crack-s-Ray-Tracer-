#include "Mesh.h"



Mesh::Mesh()
	: _position(0, 0, 0)
	, _radius(0)
{
}

Mesh::Mesh(glm::vec3 position, glm::float64_t radius)
	: _position(position)
	, _radius(radius)
{
}

Mesh::~Mesh()
{
}

glm::vec3 Mesh::Position() const
{
	return _position;
}

glm::float64_t Mesh::Radius() const
{
	return _radius;
}

bool Mesh::Intersects(const Ray& ray) const
{
	glm::float64_t t{ glm::length(glm::cross(ray.Origin() - _position, ray.Direction())) / glm::length(ray.Direction()) };
	return t > _radius ? false : true;
}
