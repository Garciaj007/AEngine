#pragma once

#include "Systems/EntityComponent.h"

class IScene 
{
public:
	explicit IScene() = default;
	virtual ~IScene() = default;

	virtual bool Initialize() = 0;
	virtual void Update(const float) = 0;
	virtual void Render() const = 0;

protected:
	std::unique_ptr<EntityManager> sceneEntityManagerPtr;
};