#ifndef SDL_UTILS_CONFIG_TEXTCONTAINER_H_
#define SDL_UTILS_CONFIG_TEXTCONTAINER_H_
//C system includes

//C++ system includes
#include<cstdint>
#include<vector>
#include<unordered_map>

//3rd-party includes

//Own includes
#include"sdl_utils/config/TextContainerCfg.h"

//Forward Declaration
struct SDL_Textures;
typedef struct TTF_Font;


class TextContainer {

public:
	int32_t init(const TextContainerCfg& cfg);

	void deinit();

	std::vector<SDL_Textures*> _textures; //the textures we will be drawning

	std::unordered_map<int32_t, TTF_Font*> _fonts;
};

#endif /* SDL_UTILS_CONFIG_TEXTCONTAINER_H_ */
