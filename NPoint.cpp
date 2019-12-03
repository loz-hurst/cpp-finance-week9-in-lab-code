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

#include "NPoint.hpp"
#include <cmath>
#include <initializer_list>
#include <stdexcept>
#include <iostream>
#include <vector>

NPoint::NPoint(std::initializer_list<double> coords)
: coords_{coords}
{
}
double NPoint::Distance(const NPoint & other) const {
    std::vector<double> our_coords {GetCoordinates()};
    std::vector<double> their_coords {other.GetCoordinates()};
    double sqr_sum {0};
    std::cout << "Our size: " << our_coords.size() << std::endl;
    std::cout << "Their size: " << their_coords.size() << std::endl;

    if (our_coords.size() != their_coords.size()) {
        std::cout << "Throwing exception" << std::endl;
        throw std::runtime_error("Mismatched dimensions");
    }

    for (int i {0}; our_coords.size() > i; ++i) {
        double this_val {our_coords.at(i) - their_coords.at(i)};
        this_val *= this_val;
        sqr_sum += this_val;
    }

    return std::sqrt(sqr_sum);
}
std::vector<double> NPoint::GetCoordinates() const {
    return coords_;
}
