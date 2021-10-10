#pragma once

#include "UBVSR.hpp"

namespace ubv {
	struct WindowProps {
		std::uint16_t width;
		std::uint16_t height;
		std::string title;

		inline WindowProps(std::uint16_t t_width = 0, std::uint16_t t_height = 0, std::string t_title = "") : width{t_width}, height{t_height}, title{std::move(t_title)} { }
	};

	class Window
	{
	public:
		Window(WindowProps t_win_props);
		virtual ~Window();


		SDL_Window* get_sdl_window();
		const WindowProps& get_win_props() const;
		std::uint16_t get_win_width() const;
		std::uint16_t get_win_height() const;
		const std::string& get_win_title() const;

	private:
		WindowProps m_win_props;
		SDL_Window* m_window_ptr;
	};
};