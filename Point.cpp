/*
 * Code from week 9 in-lab session of C++ for Finance.
 *
 * Copyright 2019 Laurence Alexander Hurst
 *
 * This file is part of C++ for Finance.
 *
 *     C++ for Finance is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     C++ for Finance is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
 *
 * See the file LICENCE in the original source code repository for the
 * full licence.
 */

#include "Point.hpp"
#include <cmath>
#include <utility>


Point::Point(const double x, const double y)
: coords_ {std::make_pair(x, y)}
{
}

double Point::Distance(const Point & other) const {
    std::pair<double, double> this_coord {GetCoordinates()};
    std::pair<double, double> other_coord {other.GetCoordinates()};
    double x2 {this_coord.first - other_coord.first};
    x2 *= x2;
    double y2 {this_coord.second - other_coord.second};
    y2 *= y2;
    return std::sqrt(x2+y2);
}

std::pair<double, double> Point::GetCoordinates() const {
    return coords_;
}