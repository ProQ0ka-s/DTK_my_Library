//
// ScreenManager.h
//

// @author ka-s

#pragma once

#include "pch.h"

class screen_manager
{
private:

public:
    // コンストラクタ
    screen_manager();
    // デストラクタ
    ~screen_manager();

    // 更新
    void update();
    // 描画
    void render();
};
