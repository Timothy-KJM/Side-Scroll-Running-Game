#ifndef __INFO_SCENE_H__
#define __INFO_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class InfoScene : public cocos2d::Layer
{
public:
	static Scene* createScene();

	virtual bool init();
	CREATE_FUNC(InfoScene);
};

#endif