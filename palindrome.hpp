#pragma once

#include <algorithm>
#include <iostream>

bool isPalindrome(const std::string& text) {
    return std::equal(text.cbegin(), text.cbegin() + text.size() / 2, text.crbegin());
}