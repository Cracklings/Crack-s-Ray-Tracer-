#include "Ray.h"



Ray::Ray()
{
}

Ray::Ray(const glm::vec3& origin, const glm::vec3& direction)
	: _origin(origin)
	, _direction(direction)
{
}

Ray::~Ray()
{
}

glm::vec3 Ray::Origin() const
{
	return _origin;
}

glm::vec3 Ray::Direction() const
{
	return _direction;
}

bool Ray::intersects(const Mesh& mesh)
{
	return mesh.Intersects(*this);
}
