// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {0, "05dc0aa892144dc69dab8ab0637e3015bd4db56ad3cc8fa17d3ddac941163faa"},
        {2, "8c00a064e676bc24108b27f9c16021887f23a97dcd7e779a8bdaa4bad3c06837"},
        {5000, "2a4fa21bf5a39f902043d9a5c1785ba0e0800f2e66d5400d7e2c81856b798222"},
        {10000, "bc98901708c869f12f3b9acd4e6bc59cd14224b998f444af8da019ff7fac23da"},
        {15000, "5de6dd58d67526d46b85c3aacdf615b77042de5a65c20321606916764c812207"},
        {20000, "bd5395f7dde0d0c77e8cf7f148c0b1b59cb77deb86066313e67465e047e22d71"},
        {25000, "9456f83d7983debc9a1488766501f9d5e0dab65af161da154c23be18bd19b66e"},
        {30000, "1ffcb59031845aa13bb04d23d101ed683b209e6e07eca2a3755f2e1e87c25b14"}};
} // namespace CryptoNote
