#include "HelloWorld.hpp"

namespace Examples{

void HelloWorld::run()
{
    sir::PCore::Engine * myApp = new sir::PCore::Engine();
    myApp->init(800,600,"Hello world");

    myApp->getImageManager()->load("Examples/Resources/Images/house.bmp",255,0,255);
    myApp->getImageManager()->load("Examples/Resources/Images/character.bmp",255,0,255);


    sir::PScene::Scene * scene01 = new sir::PScene::Scene();
    myApp->add(scene01);

    sir::PScene::Image * image01 = new sir::PScene::Image();
    image01->use(myApp->getImageManager()->get("Examples/Resources/Images/house.bmp"));
    scene01->add(image01);

    sir::PScene::Sprite * sprite01 = new sir::PScene::Sprite();
    sprite01->use(myApp->getImageManager()->get("Examples/Resources/Images/character.bmp"));
    sprite01->crop(0,0,32,32);
    scene01->add(sprite01);

    myApp->run();

}

}
