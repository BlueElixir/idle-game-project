#include <string>
#include <vector>
#include "../dx9_imgui/dx9_imgui.hpp"
#include "../dx9_imgui/imgui/imgui.h"

struct globals_t {

	struct window_t {

		int width = 1360;
		int height = 768;

	} window;

	struct states_t {

		bool should_exit = false; // set to true when you want to close program

	} states;

	struct user_interface_t {

		int active_image = 0;
		bool changed = false;

	} ui;

	struct textures_t {

		std::vector<LPDIRECT3DTEXTURE9> images;
		std::vector<std::vector<char>> files;

		struct texture_data_t {

			int width;
			int height;
			float aspect_ratio;
			std::string filename;

		}; std::vector<texture_data_t> data;

	} textures;

};

extern globals_t gvars;