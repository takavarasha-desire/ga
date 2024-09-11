/*
    Copyright (c) 2022 Idiap Research Institute, http://www.idiap.ch/
    Written by Tobias Löw <https://tobiloew.ch>

    This file is part of gafro.

    gafro is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 3 as
    published by the Free Software Foundation.

    gafro is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with gafro. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <gafro/algebra/Blades.hpp>
#include <gafro/algebra/Multivector.hxx>

namespace gafro
{
    template <class T>
    class Point : public Multivector<T, blades::e0, blades::e1, blades::e2, blades::e3, blades::ei>
    {
      public:
        using Base = Multivector<T, blades::e0, blades::e1, blades::e2, blades::e3, blades::ei>;

        using Parameters = typename Base::Parameters;

        using Base::Base;

        Point();

        Point(const Base &other);

        Point(const T &x, const T &y, const T &z);

        virtual ~Point() = default;

      protected:
      private:
      public:
        static Point X(const T &x = T(1.0));

        static Point Y(const T &y = T(1.0));

        static Point Z(const T &z = T(1.0));

        static Point Random();
    };

}  // namespace gafro