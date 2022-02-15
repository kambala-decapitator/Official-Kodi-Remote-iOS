//
//  test_fmt.cpp
//  Kodi Remote
//
//  Created by Andrey Filipenkov on 15.02.2022.
//  Copyright © 2022 Team Kodi. All rights reserved.
//

#include "test_fmt.h"

#include <fmt/core.h>

void test_fmt(void) {
    fmt::print("{} {}", "hello", 42);
}
