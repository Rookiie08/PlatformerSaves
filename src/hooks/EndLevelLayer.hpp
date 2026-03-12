#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/EndLevelLayer.hpp>
#include "PersistenceAPI.hpp"

class $modify(PSEndLevelLayer, EndLevelLayer) {
public:
    // overrides

    $override
    void onMenu(cocos2d::CCObject* i_sender);
};