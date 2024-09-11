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

#include <gafro/algebra/Translator.hpp>

namespace gafro
{
    template <class T>
    class Translator<T>::Generator : public Multivector<T, blades::e1i, blades::e2i, blades::e3i>
    {
      public:
        using Base = Multivector<T, blades::e1i, blades::e2i, blades::e3i>;

        using Parameters = typename Base::Parameters;

        using Base::Base;

        Generator() = default;

        Generator(const Base &other);

        Generator(const Generator &other);

        Generator(const Parameters &parameters);

        const T &x() const;

        const T &y() const;

        const T &z() const;

      private:
    };

}  // namespace gafro