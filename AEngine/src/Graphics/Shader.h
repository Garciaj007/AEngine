#pragma once

#include "Systems/EntityComponent.h"

class Shader : public Component
{
public:
	Shader() = default;
	Shader(const char*, const char*, const char*);
   ~Shader();
	
	void Start() override;
	
	void UseProgram() const { glUseProgram(programId); }

	const GLuint GetShaderProgram() const { return programId; }
	
private:
	static GLuint CreateShader(const GLenum, std::string&, const char*);
	
	const char* shaderName; 
	const char* vertFilePath;
	const char* fragFilePath; 

	GLuint programId;
};