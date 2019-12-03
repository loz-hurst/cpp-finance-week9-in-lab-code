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

#ifndef WEEK_9_EXAMPLE_NPOINT_HPP
#define WEEK_9_EXAMPLE_NPOINT_HPP

#include <initializer_list>
#include <vector>

// n-dimensional point
class NPoint {
    private:
        std::vector<double> coords_;

    public:
        NPoint(std::initializer_list<double> coords);
        double Distance(const NPoint & other) const;
        std::vector<double> GetCoordinates() const;
};


#endif //WEEK_9_EXAMPLE_NPOINT_HPP
