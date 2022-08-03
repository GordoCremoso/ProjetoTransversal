#pragma once
#include <glm/glm.hpp>
#include <string>

class MenuButton
{
public:
	MenuButton( const glm::vec2& position,
				const glm::vec2& dimensions,
				const std::string& text = "Button",
				const std::string& m_bgTexturePath = "",
				const float scale = 1.0);

	bool IsHovered(const double& mouseX, const double& mouseY);

	glm::vec2 m_position;
	glm::vec2 m_dimensions;
	std::string m_text;
	std::string m_bgTexturePath;
	float m_scale = 1.0f;


	bool m_hovered = false;
	bool m_clicked = false;
};
