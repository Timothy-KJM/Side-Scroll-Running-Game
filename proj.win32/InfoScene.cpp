#include "InfoScene.h"
#include "SimpleAudioEngine.h"

Scene* InfoScene::createScene()
{
	auto scene = Scene::create();
	auto layer = InfoScene::create();

	scene->addChild(layer);

	return scene;
}

bool InfoScene::init()
{
	if (!Layer::init())
		return false;

	auto visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	return true;
}
