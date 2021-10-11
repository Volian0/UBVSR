#include "Window.hpp"

namespace ubv
{
Window::Window(WindowProps t_win_props)
	: m_win_props{std::move(t_win_props)}, m_window_ptr{SDL_CreateWindow(m_win_props.title.c_str(),
																		 SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
																		 m_win_props.width, m_win_props.height,
																		 SDL_WINDOW_SHOWN)}
{
	if (!m_window_ptr)
	{
		throw std::runtime_error("Failed to create window");
	}
}

Window::~Window() noexcept
{
	SDL_DestroyWindow(m_window_ptr);
}

SDL_Window *Window::get_sdl_window() noexcept
{
	return m_window_ptr;
}

const WindowProps &Window::get_win_props() const noexcept
{
	return m_win_props;
}

std::uint16_t Window::get_win_width() const noexcept
{
	return m_win_props.width;
}

std::uint16_t Window::get_win_height() const noexcept
{
	return m_win_props.height;
}

const std::string &Window::get_win_title() const noexcept
{
	return m_win_props.title;
}
} // namespace ubv
