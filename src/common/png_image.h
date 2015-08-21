// This file is distributed under the MIT license.
// See the LICENSE file for details.

#pragma once

#ifndef VSNRAY_COMMON_PNG_IMAGE_H
#define VSNRAY_COMMON_PNG_IMAGE_H 1

#if defined(VSNRAY_HAVE_PNG)

#include <cstddef>
#include <string>
#include <vector>

namespace visionaray
{

class png_image
{
public:

    png_image(std::string const& filename);

    size_t width() const    { return width_; }
    size_t height() const   { return height_; }

    unsigned char const* data() const { return data_.data(); }

private:

    size_t width_;
    size_t height_;

    std::vector<unsigned char> data_;

};

} // visionaray

#endif // VSNRAY_HAVE_PNG

#endif // VSNRAY_COMMON_PNG_IMAGE_H
