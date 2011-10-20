/*==LICENSE==*

CyanWorlds.com Engine - MMOG client, server and tools
Copyright (C) 2011 Cyan Worlds, Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

Additional permissions under GNU GPL version 3 section 7

If you modify this Program, or any covered work, by linking or
combining it with any of RAD Game Tools Bink SDK, Autodesk 3ds Max SDK,
NVIDIA PhysX SDK, Microsoft DirectX SDK, OpenSSL library, Independent
JPEG Group JPEG library, Microsoft Windows Media SDK, or Apple QuickTime SDK
(or a modified version of those libraries),
containing parts covered by the terms of the Bink SDK EULA, 3ds Max EULA,
PhysX SDK EULA, DirectX SDK EULA, OpenSSL and SSLeay licenses, IJG
JPEG Library README, Windows Media SDK EULA, or QuickTime SDK EULA, the
licensors of this Program grant you additional
permission to convey the resulting work. Corresponding Source for a
non-source form of such a combination shall include the source code for
the parts of OpenSSL and IJG JPEG Library used as well as that of the covered
work.

You can contact Cyan Worlds, Inc. by email legal@cyan.com
 or by snail mail at:
      Cyan Worlds, Inc.
      14617 N Newport Hwy
      Mead, WA   99021

*==LICENSE==*/
/*****************************************************************************
*
*   $/Plasma20/Sources/Plasma/NucleusLib/pnUtils/Private/pnUtHash.cpp
*   
***/

#include "../Pch.h"
#pragma  hdrstop


/****************************************************************************
*
*   CHashValue
*
***/

// These random values were generated by the radioactive decay based
// random number generator at www.fourmilab.ch
const dword CHashValue::s_hashTable[] = {
    0xe8fd2035, 0xaf1add63, 0x049fb872, 0xcf9bb8eb, 0xc30d2a72, 0x15efaec1, 0xd250c7d9, 0xaf3c60a8,
    0x17ae32ff, 0x4089cd9e, 0x91dd6936, 0x093f880d, 0x9608ae8f, 0x452c0e11, 0xb6840ffd, 0x3e36c913,
    0x393114fd, 0xa72556b2, 0x7c338fb7, 0x4e445027, 0x2864eace, 0x9b0a17d6, 0x108da74b, 0xf2c479c1,
    0x288a43ac, 0x241e8411, 0x12ace782, 0xfb015799, 0x8b4dd597, 0x97199bc0, 0x621f0cce, 0x1658553e,
    0x99697839, 0xe3efb551, 0xbc1a2625, 0x54583c22, 0x9693d685, 0x612f910a, 0x080ccee8, 0xd00a43c9,
    0x86e6984d, 0x793245cf, 0x5335afa0, 0xdb8734d8, 0xfe5ab506, 0x3aae2ec1, 0x0aac22a3, 0xf3cd2c16,
    0x3d3039d1, 0x070b576d, 0x3a624bff, 0x0e185383, 0x78316efa, 0xafbef9ad, 0x556130cc, 0x54813111,
    0xc0e59be8, 0x30010241, 0x2cfa9040, 0x5a039832, 0x68a8a31d, 0xac786303, 0xe81b7dea, 0x2e3d7f5a,
    0xabb30a5c, 0xab08fef0, 0xf88cdc9d, 0x962d8361, 0x82ae270c, 0xc45a6e9c, 0x506a3f62, 0xed7c8f10,
    0x64631545, 0xea26488a, 0xd39f06f7, 0xafa35b6b, 0xdd1f83fb, 0x60b57a99, 0x636373ee, 0x05e82732,
    0xb2eaf275, 0x4763208c, 0x49499166, 0x8e436c6a, 0x3a4f831a, 0x57b7c11e, 0xbd751298, 0x6217ffbc,
    0x789efe70, 0x91d695cc, 0xa7e9049e, 0x12b74cdb, 0x40a2d8e6, 0x4dd33013, 0x506ec265, 0x81b2a421,
    0xdf98bac4, 0x554e33d0, 0x514decf9, 0x4374274c, 0x70b09e64, 0xac951473, 0xd6bb35eb, 0xa65ed4cf,
    0x71f724ac, 0x91e8da43, 0xe386dcee, 0x45bc6b20, 0x08ddf47a, 0xadac9571, 0x44d3cddf, 0x535ace85,
    0x5ac801cc, 0x89e90941, 0xa0507200, 0xe4b2a9b2, 0x00922b39, 0x2848f374, 0xfbe97b80, 0x77ea2e00,
    0x05eea617, 0x2bf0baf7, 0x0c97f929, 0x4d3190c0, 0x31f58de0, 0x7cae5dc4, 0x39f33590, 0x9cd39b3f,
    0x98b0bf46, 0x393169f1, 0x9f8271da, 0x0b85462f, 0xb8b81857, 0xed66ce2c, 0x6f97f3bb, 0x87e8c7dd,
    0x55741d88, 0x9ccd43b8, 0xe537d98a, 0x64a28550, 0x165ba5bf, 0xe4229568, 0x1af7c624, 0x059b9f7a,
    0x38129d4a, 0x73dca9ba, 0xe0185118, 0x48560fdb, 0xb7d0ec6b, 0x1acd6d4b, 0x84ab7a10, 0xcd9bf830,
    0x539d6be2, 0xfdcb65f4, 0x183a4dd7, 0xc4425aa4, 0xa3934d5f, 0xf71b8023, 0x30c109f7, 0x512e5128,
    0x7decdea5, 0xd3aded88, 0x34288710, 0x0c07a16e, 0xec0299da, 0x1e738f1b, 0xd7b898e1, 0x1b7318fd,
    0x3b67392d, 0x60da77b3, 0x614d4804, 0xb854468a, 0x4dbfc9fd, 0x85185833, 0x56095260, 0xb85d0771,
    0xbfe579e7, 0x51ca011b, 0xcebd2983, 0x4d56cda1, 0x5ec08b9a, 0x6bf9aa6f, 0x7da1e2c0, 0x4499dd84,
    0x95ca5ba3, 0xd0f9e77b, 0x5d099253, 0xbe943272, 0x1a87fe96, 0x29584d77, 0x0344f269, 0x2bdafede,
    0x4ababc94, 0x7a06acb7, 0x0a4c1efe, 0x8699f00f, 0x0f74e313, 0x0469ac17, 0x80f17875, 0xa6aecf16,
    0x0d772a15, 0x60eb0850, 0xa852be33, 0xe1574793, 0x7847204c, 0x1cea62ac, 0xb5948e41, 0x0e574ae9,
    0xdeb24de3, 0xe6472a0b, 0xaaaaf355, 0xa271aeae, 0xf3d5d209, 0x4f8fa676, 0x25ff71c9, 0x3f38d7df,
    0x0a8cd458, 0x5c6ad602, 0x06d0c0ec, 0x0d84ac0f, 0xf3cc4a59, 0xd6f04d8c, 0x1b3c3229, 0xc8281f6d,
    0x9410dd7c, 0x502519d1, 0x4449a76a, 0x88ba67b6, 0x8f710894, 0x7b63230e, 0xc095db28, 0x155a4ac7,
    0x0d418a5d, 0xe2b69e59, 0xeab4ac50, 0x0de06aae, 0x60f272fa, 0x408aefd8, 0x01c3435a, 0x0880c1e3,
    0x4f23137b, 0x9dfd6434, 0xd1e25d94, 0xbad4c88a, 0x0746edf9, 0x8103a9aa, 0xc8c73617, 0xe0f2759a,
    0x00161c79, 0xd4545360, 0x1763cc5b, 0x296361fa, 0xbc35858d, 0xdaed5e93, 0x0b9d0aed, 0x01c45a64,
};
    