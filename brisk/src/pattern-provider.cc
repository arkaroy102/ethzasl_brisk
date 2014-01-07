/*
 Copyright (C) 2013  The Autonomous Systems Lab, ETH Zurich,
 Stefan Leutenegger and Simon Lynen.

 BRISK - Binary Robust Invariant Scalable Keypoints
 Reference implementation of
 [1] Stefan Leutenegger,Margarita Chli and Roland Siegwart, BRISK:
 Binary Robust Invariant Scalable Keypoints, in Proceedings of
 the IEEE International Conference on Computer Vision (ICCV2011).

 This file is part of BRISK.

 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the <organization> nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <assert.h>
#include <brisk/internal/pattern-provider.h>

namespace brisk {
void GetDefaultPatternAsStream(std::stringstream* pattern_stream) {
assert(pattern_stream);

  pattern_stream->clear();
  *pattern_stream << "66" << std::endl
  << "0 0 6.000000e-01 " << std::endl
  << "1.190000e+00 0 6.000000e-01 " << std::endl
  << "5.950000e-01 1.030570e+00 6.000000e-01 " << std::endl
  << "-5.950000e-01 1.030570e+00 6.000000e-01 " << std::endl
  << "-1.190000e+00 1.457330e-16 6.000000e-01 " << std::endl
  << "-5.950000e-01 -1.030570e+00 6.000000e-01 " << std::endl
  << "5.950000e-01 -1.030570e+00 6.000000e-01 " << std::endl
  << "2.465000e+00 0 7.617269e-01 " << std::endl
  << "1.994227e+00 1.448891e+00 7.617269e-01 " << std::endl
  << "7.617269e-01 2.344354e+00 7.617269e-01 " << std::endl
  << "-7.617269e-01 2.344354e+00 7.617269e-01 " << std::endl
  << "-1.994227e+00 1.448891e+00 7.617269e-01 " << std::endl
  << "-2.465000e+00 3.018754e-16 7.617269e-01 " << std::endl
  << "-1.994227e+00 -1.448891e+00 7.617269e-01 " << std::endl
  << "-7.617269e-01 -2.344354e+00 7.617269e-01 " << std::endl
  << "7.617269e-01 -2.344354e+00 7.617269e-01 " << std::endl
  << "1.994227e+00 -1.448891e+00 7.617269e-01 " << std::endl
  << "4.165000e+00 0 9.267997e-01 " << std::endl
  << "3.752535e+00 1.807126e+00 9.267997e-01 " << std::endl
  << "2.596835e+00 3.256328e+00 9.267997e-01 " << std::endl
  << "9.267997e-01 4.060575e+00 9.267997e-01 " << std::endl
  << "-9.267997e-01 4.060575e+00 9.267997e-01 " << std::endl
  << "-2.596835e+00 3.256328e+00 9.267997e-01 " << std::endl
  << "-3.752535e+00 1.807126e+00 9.267997e-01 " << std::endl
  << "-4.165000e+00 5.100654e-16 9.267997e-01 " << std::endl
  << "-3.752535e+00 -1.807126e+00 9.267997e-01 " << std::endl
  << "-2.596835e+00 -3.256328e+00 9.267997e-01 " << std::endl
  << "-9.267997e-01 -4.060575e+00 9.267997e-01 " << std::endl
  << "9.267997e-01 -4.060575e+00 9.267997e-01 " << std::endl
  << "2.596835e+00 -3.256328e+00 9.267997e-01 " << std::endl
  << "3.752535e+00 -1.807126e+00 9.267997e-01 " << std::endl
  << "6.290000e+00 0 1.307765e+00 " << std::endl
  << "5.746201e+00 2.558373e+00 1.307765e+00 " << std::endl
  << "4.208832e+00 4.674381e+00 1.307765e+00 " << std::endl
  << "1.943717e+00 5.982145e+00 1.307765e+00 " << std::endl
  << "-6.574840e-01 6.255543e+00 1.307765e+00 " << std::endl
  << "-3.145000e+00 5.447300e+00 1.307765e+00 " << std::endl
  << "-5.088717e+00 3.697169e+00 1.307765e+00 " << std::endl
  << "-6.152548e+00 1.307765e+00 1.307765e+00 " << std::endl
  << "-6.152548e+00 -1.307765e+00 1.307765e+00 " << std::endl
  << "-5.088717e+00 -3.697169e+00 1.307765e+00 " << std::endl
  << "-3.145000e+00 -5.447300e+00 1.307765e+00 " << std::endl
  << "-6.574840e-01 -6.255543e+00 1.307765e+00 " << std::endl
  << "1.943717e+00 -5.982145e+00 1.307765e+00 " << std::endl
  << "4.208832e+00 -4.674381e+00 1.307765e+00 " << std::endl
  << "5.746201e+00 -2.558373e+00 1.307765e+00 " << std::endl
  << "9.180000e+00 0 1.436068e+00 " << std::endl
  << "8.730699e+00 2.836776e+00 1.436068e+00 " << std::endl
  << "7.426776e+00 5.395869e+00 1.436068e+00 " << std::endl
  << "5.395869e+00 7.426776e+00 1.436068e+00 " << std::endl
  << "2.836776e+00 8.730699e+00 1.436068e+00 " << std::endl
  << "5.621129e-16 9.180000e+00 1.436068e+00 " << std::endl
  << "-2.836776e+00 8.730699e+00 1.436068e+00 " << std::endl
  << "-5.395869e+00 7.426776e+00 1.436068e+00 " << std::endl
  << "-7.426776e+00 5.395869e+00 1.436068e+00 " << std::endl
  << "-8.730699e+00 2.836776e+00 1.436068e+00 " << std::endl
  << "-9.180000e+00 1.124226e-15 1.436068e+00 " << std::endl
  << "-8.730699e+00 -2.836776e+00 1.436068e+00 " << std::endl
  << "-7.426776e+00 -5.395869e+00 1.436068e+00 " << std::endl
  << "-5.395869e+00 -7.426776e+00 1.436068e+00 " << std::endl
  << "-2.836776e+00 -8.730699e+00 1.436068e+00 " << std::endl
  << "-1.686339e-15 -9.180000e+00 1.436068e+00 " << std::endl
  << "2.836776e+00 -8.730699e+00 1.436068e+00 " << std::endl
  << "5.395869e+00 -7.426776e+00 1.436068e+00 " << std::endl
  << "7.426776e+00 -5.395869e+00 1.436068e+00 " << std::endl
  << "8.730699e+00 -2.836776e+00 1.436068e+00 " << std::endl
  << "384" << std::endl
  << "2 1 " << std::endl
  << "3 1 " << std::endl
  << "3 2 " << std::endl
  << "4 0 " << std::endl
  << "4 1 " << std::endl
  << "4 2 " << std::endl
  << "4 3 " << std::endl
  << "5 1 " << std::endl
  << "5 2 " << std::endl
  << "5 3 " << std::endl
  << "5 4 " << std::endl
  << "6 1 " << std::endl
  << "6 2 " << std::endl
  << "6 3 " << std::endl
  << "6 4 " << std::endl
  << "6 5 " << std::endl
  << "7 1 " << std::endl
  << "7 2 " << std::endl
  << "7 6 " << std::endl
  << "8 3 " << std::endl
  << "8 6 " << std::endl
  << "8 7 " << std::endl
  << "9 0 " << std::endl
  << "9 1 " << std::endl
  << "9 3 " << std::endl
  << "9 7 " << std::endl
  << "9 8 " << std::endl
  << "10 2 " << std::endl
  << "10 4 " << std::endl
  << "10 8 " << std::endl
  << "10 9 " << std::endl
  << "11 2 " << std::endl
  << "11 3 " << std::endl
  << "11 5 " << std::endl
  << "11 9 " << std::endl
  << "11 10 " << std::endl
  << "12 3 " << std::endl
  << "12 4 " << std::endl
  << "12 5 " << std::endl
  << "12 10 " << std::endl
  << "12 11 " << std::endl
  << "13 3 " << std::endl
  << "13 5 " << std::endl
  << "13 6 " << std::endl
  << "13 11 " << std::endl
  << "13 12 " << std::endl
  << "14 4 " << std::endl
  << "14 6 " << std::endl
  << "14 12 " << std::endl
  << "14 13 " << std::endl
  << "15 0 " << std::endl
  << "15 1 " << std::endl
  << "15 5 " << std::endl
  << "15 7 " << std::endl
  << "15 13 " << std::endl
  << "15 14 " << std::endl
  << "16 1 " << std::endl
  << "16 5 " << std::endl
  << "16 6 " << std::endl
  << "16 7 " << std::endl
  << "16 8 " << std::endl
  << "16 14 " << std::endl
  << "16 15 " << std::endl
  << "17 1 " << std::endl
  << "17 7 " << std::endl
  << "17 8 " << std::endl
  << "17 16 " << std::endl
  << "18 1 " << std::endl
  << "18 2 " << std::endl
  << "18 7 " << std::endl
  << "18 8 " << std::endl
  << "18 9 " << std::endl
  << "18 17 " << std::endl
  << "19 2 " << std::endl
  << "19 7 " << std::endl
  << "19 8 " << std::endl
  << "19 9 " << std::endl
  << "19 10 " << std::endl
  << "19 17 " << std::endl
  << "19 18 " << std::endl
  << "20 2 " << std::endl
  << "20 8 " << std::endl
  << "20 9 " << std::endl
  << "20 10 " << std::endl
  << "20 18 " << std::endl
  << "20 19 " << std::endl
  << "21 3 " << std::endl
  << "21 9 " << std::endl
  << "21 10 " << std::endl
  << "21 11 " << std::endl
  << "21 19 " << std::endl
  << "21 20 " << std::endl
  << "22 3 " << std::endl
  << "22 9 " << std::endl
  << "22 10 " << std::endl
  << "22 11 " << std::endl
  << "22 12 " << std::endl
  << "22 20 " << std::endl
  << "22 21 " << std::endl
  << "23 3 " << std::endl
  << "23 4 " << std::endl
  << "23 10 " << std::endl
  << "23 11 " << std::endl
  << "23 12 " << std::endl
  << "23 21 " << std::endl
  << "23 22 " << std::endl
  << "24 4 " << std::endl
  << "24 11 " << std::endl
  << "24 12 " << std::endl
  << "24 13 " << std::endl
  << "24 22 " << std::endl
  << "24 23 " << std::endl
  << "25 5 " << std::endl
  << "25 12 " << std::endl
  << "25 13 " << std::endl
  << "25 14 " << std::endl
  << "25 23 " << std::endl
  << "25 24 " << std::endl
  << "26 5 " << std::endl
  << "26 12 " << std::endl
  << "26 13 " << std::endl
  << "26 14 " << std::endl
  << "26 15 " << std::endl
  << "26 24 " << std::endl
  << "26 25 " << std::endl
  << "27 5 " << std::endl
  << "27 13 " << std::endl
  << "27 14 " << std::endl
  << "27 15 " << std::endl
  << "27 25 " << std::endl
  << "27 26 " << std::endl
  << "28 6 " << std::endl
  << "28 14 " << std::endl
  << "28 15 " << std::endl
  << "28 16 " << std::endl
  << "28 26 " << std::endl
  << "28 27 " << std::endl
  << "29 6 " << std::endl
  << "29 7 " << std::endl
  << "29 14 " << std::endl
  << "29 15 " << std::endl
  << "29 16 " << std::endl
  << "29 17 " << std::endl
  << "29 27 " << std::endl
  << "29 28 " << std::endl
  << "30 1 " << std::endl
  << "30 6 " << std::endl
  << "30 7 " << std::endl
  << "30 15 " << std::endl
  << "30 16 " << std::endl
  << "30 17 " << std::endl
  << "30 18 " << std::endl
  << "30 28 " << std::endl
  << "30 29 " << std::endl
  << "31 7 " << std::endl
  << "31 17 " << std::endl
  << "31 18 " << std::endl
  << "31 30 " << std::endl
  << "32 17 " << std::endl
  << "32 18 " << std::endl
  << "32 19 " << std::endl
  << "32 30 " << std::endl
  << "32 31 " << std::endl
  << "33 8 " << std::endl
  << "33 9 " << std::endl
  << "33 17 " << std::endl
  << "33 18 " << std::endl
  << "33 19 " << std::endl
  << "33 20 " << std::endl
  << "33 31 " << std::endl
  << "33 32 " << std::endl
  << "34 9 " << std::endl
  << "34 18 " << std::endl
  << "34 19 " << std::endl
  << "34 20 " << std::endl
  << "34 21 " << std::endl
  << "34 32 " << std::endl
  << "34 33 " << std::endl
  << "35 9 " << std::endl
  << "35 10 " << std::endl
  << "35 19 " << std::endl
  << "35 20 " << std::endl
  << "35 21 " << std::endl
  << "35 22 " << std::endl
  << "35 33 " << std::endl
  << "35 34 " << std::endl
  << "36 10 " << std::endl
  << "36 11 " << std::endl
  << "36 20 " << std::endl
  << "36 21 " << std::endl
  << "36 22 " << std::endl
  << "36 23 " << std::endl
  << "36 34 " << std::endl
  << "36 35 " << std::endl
  << "37 11 " << std::endl
  << "37 21 " << std::endl
  << "37 22 " << std::endl
  << "37 23 " << std::endl
  << "37 24 " << std::endl
  << "37 35 " << std::endl
  << "37 36 " << std::endl
  << "38 11 " << std::endl
  << "38 12 " << std::endl
  << "38 22 " << std::endl
  << "38 23 " << std::endl
  << "38 24 " << std::endl
  << "38 25 " << std::endl
  << "38 36 " << std::endl
  << "38 37 " << std::endl
  << "39 12 " << std::endl
  << "39 13 " << std::endl
  << "39 23 " << std::endl
  << "39 24 " << std::endl
  << "39 25 " << std::endl
  << "39 26 " << std::endl
  << "39 37 " << std::endl
  << "39 38 " << std::endl
  << "40 13 " << std::endl
  << "40 24 " << std::endl
  << "40 25 " << std::endl
  << "40 26 " << std::endl
  << "40 27 " << std::endl
  << "40 38 " << std::endl
  << "40 39 " << std::endl
  << "41 13 " << std::endl
  << "41 14 " << std::endl
  << "41 25 " << std::endl
  << "41 26 " << std::endl
  << "41 27 " << std::endl
  << "41 28 " << std::endl
  << "41 39 " << std::endl
  << "41 40 " << std::endl
  << "42 14 " << std::endl
  << "42 15 " << std::endl
  << "42 26 " << std::endl
  << "42 27 " << std::endl
  << "42 28 " << std::endl
  << "42 29 " << std::endl
  << "42 40 " << std::endl
  << "42 41 " << std::endl
  << "43 15 " << std::endl
  << "43 27 " << std::endl
  << "43 28 " << std::endl
  << "43 29 " << std::endl
  << "43 30 " << std::endl
  << "43 41 " << std::endl
  << "43 42 " << std::endl
  << "44 15 " << std::endl
  << "44 16 " << std::endl
  << "44 17 " << std::endl
  << "44 28 " << std::endl
  << "44 29 " << std::endl
  << "44 30 " << std::endl
  << "44 31 " << std::endl
  << "44 42 " << std::endl
  << "44 43 " << std::endl
  << "45 16 " << std::endl
  << "45 17 " << std::endl
  << "45 18 " << std::endl
  << "45 29 " << std::endl
  << "45 30 " << std::endl
  << "45 31 " << std::endl
  << "45 32 " << std::endl
  << "45 43 " << std::endl
  << "45 44 " << std::endl
  << "46 17 " << std::endl
  << "46 31 " << std::endl
  << "46 32 " << std::endl
  << "46 45 " << std::endl
  << "47 18 " << std::endl
  << "47 31 " << std::endl
  << "47 32 " << std::endl
  << "47 33 " << std::endl
  << "47 46 " << std::endl
  << "48 31 " << std::endl
  << "48 32 " << std::endl
  << "48 33 " << std::endl
  << "48 34 " << std::endl
  << "48 46 " << std::endl
  << "48 47 " << std::endl
  << "49 19 " << std::endl
  << "49 32 " << std::endl
  << "49 33 " << std::endl
  << "49 34 " << std::endl
  << "49 47 " << std::endl
  << "49 48 " << std::endl
  << "50 20 " << std::endl
  << "50 33 " << std::endl
  << "50 34 " << std::endl
  << "50 35 " << std::endl
  << "50 48 " << std::endl
  << "50 49 " << std::endl
  << "51 34 " << std::endl
  << "51 35 " << std::endl
  << "51 36 " << std::endl
  << "51 49 " << std::endl
  << "51 50 " << std::endl
  << "52 21 " << std::endl
  << "52 34 " << std::endl
  << "52 35 " << std::endl
  << "52 36 " << std::endl
  << "52 37 " << std::endl
  << "52 50 " << std::endl
  << "52 51 " << std::endl
  << "53 22 " << std::endl
  << "53 35 " << std::endl
  << "53 36 " << std::endl
  << "53 37 " << std::endl
  << "53 51 " << std::endl
  << "53 52 " << std::endl
  << "54 36 " << std::endl
  << "54 37 " << std::endl
  << "54 38 " << std::endl
  << "54 52 " << std::endl
  << "54 53 " << std::endl
  << "55 23 " << std::endl
  << "55 37 " << std::endl
  << "55 38 " << std::endl
  << "55 39 " << std::endl
  << "55 53 " << std::endl
  << "55 54 " << std::endl
  << "56 24 " << std::endl
  << "56 37 " << std::endl
  << "56 38 " << std::endl
  << "56 39 " << std::endl
  << "56 40 " << std::endl
  << "56 54 " << std::endl
  << "56 55 " << std::endl
  << "57 25 " << std::endl
  << "57 38 " << std::endl
  << "57 39 " << std::endl
  << "57 40 " << std::endl
  << "57 55 " << std::endl
  << "57 56 " << std::endl
  << "58 39 " << std::endl
  << "58 40 " << std::endl
  << "58 41 " << std::endl
  << "58 56 " << std::endl
  << "58 57 " << std::endl
  << "59 26 " << std::endl
  << "59 40 " << std::endl
  << "59 41 " << std::endl
  << "59 42 " << std::endl
  << "59 57 " << std::endl
  << "59 58 " << std::endl
  << "60 27 " << std::endl
  << "60 40 " << std::endl
  << "60 41 " << std::endl
  << "60 42 " << std::endl
  << "60 43 " << std::endl
  << "60 58 " << std::endl
  << "60 59 " << std::endl
  << "61 41 " << std::endl
  << "61 42 " << std::endl
  << "61 43 " << std::endl
  << "61 59 " << std::endl
  << "61 60 " << std::endl
  << "62 28 " << std::endl
  << "62 42 " << std::endl
  << "62 43 " << std::endl
  << "62 44 " << std::endl
  << "62 60 " << std::endl
  << "62 61 " << std::endl
  << "63 29 " << std::endl
  << "63 43 " << std::endl
  << "63 44 " << std::endl
  << "63 45 " << std::endl
  << "63 61 " << std::endl
  << "63 62 " << std::endl
  << "64 31 " << std::endl
  << "64 43 " << std::endl
  << "64 44 " << std::endl
  << "64 45 " << std::endl
  << "64 46 " << std::endl
  << "64 62 " << std::endl
  << "64 63 " << std::endl
  << "65 30 " << std::endl
  << "65 31 " << std::endl
  << "65 44 " << std::endl
  << "65 45 " << std::endl
  << "65 46 " << std::endl
  << "65 47 " << std::endl
  << "65 63 " << std::endl
  << "65 64 " << std::endl
  << "856" << std::endl
  << "1 0 " << std::endl
  << "2 0 " << std::endl
  << "2 1 " << std::endl
  << "3 0 " << std::endl
  << "3 1 " << std::endl
  << "3 2 " << std::endl
  << "4 0 " << std::endl
  << "4 1 " << std::endl
  << "4 2 " << std::endl
  << "4 3 " << std::endl
  << "5 0 " << std::endl
  << "5 1 " << std::endl
  << "5 2 " << std::endl
  << "5 3 " << std::endl
  << "5 4 " << std::endl
  << "6 0 " << std::endl
  << "6 1 " << std::endl
  << "6 2 " << std::endl
  << "6 3 " << std::endl
  << "6 4 " << std::endl
  << "6 5 " << std::endl
  << "7 0 " << std::endl
  << "7 1 " << std::endl
  << "7 2 " << std::endl
  << "7 3 " << std::endl
  << "7 4 " << std::endl
  << "7 5 " << std::endl
  << "7 6 " << std::endl
  << "8 0 " << std::endl
  << "8 1 " << std::endl
  << "8 2 " << std::endl
  << "8 3 " << std::endl
  << "8 4 " << std::endl
  << "8 5 " << std::endl
  << "8 6 " << std::endl
  << "8 7 " << std::endl
  << "9 0 " << std::endl
  << "9 1 " << std::endl
  << "9 2 " << std::endl
  << "9 3 " << std::endl
  << "9 4 " << std::endl
  << "9 5 " << std::endl
  << "9 6 " << std::endl
  << "9 7 " << std::endl
  << "9 8 " << std::endl
  << "10 0 " << std::endl
  << "10 1 " << std::endl
  << "10 2 " << std::endl
  << "10 3 " << std::endl
  << "10 4 " << std::endl
  << "10 5 " << std::endl
  << "10 6 " << std::endl
  << "10 7 " << std::endl
  << "10 8 " << std::endl
  << "10 9 " << std::endl
  << "11 0 " << std::endl
  << "11 1 " << std::endl
  << "11 2 " << std::endl
  << "11 3 " << std::endl
  << "11 4 " << std::endl
  << "11 5 " << std::endl
  << "11 6 " << std::endl
  << "11 7 " << std::endl
  << "11 8 " << std::endl
  << "11 9 " << std::endl
  << "11 10 " << std::endl
  << "12 0 " << std::endl
  << "12 1 " << std::endl
  << "12 2 " << std::endl
  << "12 3 " << std::endl
  << "12 4 " << std::endl
  << "12 5 " << std::endl
  << "12 6 " << std::endl
  << "12 8 " << std::endl
  << "12 9 " << std::endl
  << "12 10 " << std::endl
  << "12 11 " << std::endl
  << "13 0 " << std::endl
  << "13 1 " << std::endl
  << "13 2 " << std::endl
  << "13 3 " << std::endl
  << "13 4 " << std::endl
  << "13 5 " << std::endl
  << "13 6 " << std::endl
  << "13 7 " << std::endl
  << "13 9 " << std::endl
  << "13 10 " << std::endl
  << "13 11 " << std::endl
  << "13 12 " << std::endl
  << "14 0 " << std::endl
  << "14 1 " << std::endl
  << "14 2 " << std::endl
  << "14 3 " << std::endl
  << "14 4 " << std::endl
  << "14 5 " << std::endl
  << "14 6 " << std::endl
  << "14 7 " << std::endl
  << "14 8 " << std::endl
  << "14 10 " << std::endl
  << "14 11 " << std::endl
  << "14 12 " << std::endl
  << "14 13 " << std::endl
  << "15 0 " << std::endl
  << "15 1 " << std::endl
  << "15 2 " << std::endl
  << "15 3 " << std::endl
  << "15 4 " << std::endl
  << "15 5 " << std::endl
  << "15 6 " << std::endl
  << "15 7 " << std::endl
  << "15 8 " << std::endl
  << "15 9 " << std::endl
  << "15 11 " << std::endl
  << "15 12 " << std::endl
  << "15 13 " << std::endl
  << "15 14 " << std::endl
  << "16 0 " << std::endl
  << "16 1 " << std::endl
  << "16 2 " << std::endl
  << "16 3 " << std::endl
  << "16 4 " << std::endl
  << "16 5 " << std::endl
  << "16 6 " << std::endl
  << "16 7 " << std::endl
  << "16 8 " << std::endl
  << "16 9 " << std::endl
  << "16 10 " << std::endl
  << "16 12 " << std::endl
  << "16 13 " << std::endl
  << "16 14 " << std::endl
  << "16 15 " << std::endl
  << "17 0 " << std::endl
  << "17 1 " << std::endl
  << "17 2 " << std::endl
  << "17 6 " << std::endl
  << "17 7 " << std::endl
  << "17 8 " << std::endl
  << "17 9 " << std::endl
  << "17 15 " << std::endl
  << "17 16 " << std::endl
  << "18 0 " << std::endl
  << "18 1 " << std::endl
  << "18 2 " << std::endl
  << "18 3 " << std::endl
  << "18 6 " << std::endl
  << "18 7 " << std::endl
  << "18 8 " << std::endl
  << "18 9 " << std::endl
  << "18 10 " << std::endl
  << "18 15 " << std::endl
  << "18 16 " << std::endl
  << "18 17 " << std::endl
  << "19 0 " << std::endl
  << "19 1 " << std::endl
  << "19 2 " << std::endl
  << "19 3 " << std::endl
  << "19 6 " << std::endl
  << "19 7 " << std::endl
  << "19 8 " << std::endl
  << "19 9 " << std::endl
  << "19 10 " << std::endl
  << "19 11 " << std::endl
  << "19 16 " << std::endl
  << "19 17 " << std::endl
  << "19 18 " << std::endl
  << "20 0 " << std::endl
  << "20 1 " << std::endl
  << "20 2 " << std::endl
  << "20 3 " << std::endl
  << "20 4 " << std::endl
  << "20 7 " << std::endl
  << "20 8 " << std::endl
  << "20 9 " << std::endl
  << "20 10 " << std::endl
  << "20 11 " << std::endl
  << "20 12 " << std::endl
  << "20 17 " << std::endl
  << "20 18 " << std::endl
  << "20 19 " << std::endl
  << "21 0 " << std::endl
  << "21 1 " << std::endl
  << "21 2 " << std::endl
  << "21 3 " << std::endl
  << "21 4 " << std::endl
  << "21 7 " << std::endl
  << "21 8 " << std::endl
  << "21 9 " << std::endl
  << "21 10 " << std::endl
  << "21 11 " << std::endl
  << "21 12 " << std::endl
  << "21 18 " << std::endl
  << "21 19 " << std::endl
  << "21 20 " << std::endl
  << "22 0 " << std::endl
  << "22 2 " << std::endl
  << "22 3 " << std::endl
  << "22 4 " << std::endl
  << "22 5 " << std::endl
  << "22 8 " << std::endl
  << "22 9 " << std::endl
  << "22 10 " << std::endl
  << "22 11 " << std::endl
  << "22 12 " << std::endl
  << "22 13 " << std::endl
  << "22 19 " << std::endl
  << "22 20 " << std::endl
  << "22 21 " << std::endl
  << "23 0 " << std::endl
  << "23 2 " << std::endl
  << "23 3 " << std::endl
  << "23 4 " << std::endl
  << "23 5 " << std::endl
  << "23 9 " << std::endl
  << "23 10 " << std::endl
  << "23 11 " << std::endl
  << "23 12 " << std::endl
  << "23 13 " << std::endl
  << "23 14 " << std::endl
  << "23 20 " << std::endl
  << "23 21 " << std::endl
  << "23 22 " << std::endl
  << "24 0 " << std::endl
  << "24 3 " << std::endl
  << "24 4 " << std::endl
  << "24 5 " << std::endl
  << "24 10 " << std::endl
  << "24 11 " << std::endl
  << "24 12 " << std::endl
  << "24 13 " << std::endl
  << "24 14 " << std::endl
  << "24 21 " << std::endl
  << "24 22 " << std::endl
  << "24 23 " << std::endl
  << "25 0 " << std::endl
  << "25 3 " << std::endl
  << "25 4 " << std::endl
  << "25 5 " << std::endl
  << "25 6 " << std::endl
  << "25 10 " << std::endl
  << "25 11 " << std::endl
  << "25 12 " << std::endl
  << "25 13 " << std::endl
  << "25 14 " << std::endl
  << "25 15 " << std::endl
  << "25 22 " << std::endl
  << "25 23 " << std::endl
  << "25 24 " << std::endl
  << "26 0 " << std::endl
  << "26 3 " << std::endl
  << "26 4 " << std::endl
  << "26 5 " << std::endl
  << "26 6 " << std::endl
  << "26 11 " << std::endl
  << "26 12 " << std::endl
  << "26 13 " << std::endl
  << "26 14 " << std::endl
  << "26 15 " << std::endl
  << "26 16 " << std::endl
  << "26 23 " << std::endl
  << "26 24 " << std::endl
  << "26 25 " << std::endl
  << "27 0 " << std::endl
  << "27 1 " << std::endl
  << "27 4 " << std::endl
  << "27 5 " << std::endl
  << "27 6 " << std::endl
  << "27 7 " << std::endl
  << "27 12 " << std::endl
  << "27 13 " << std::endl
  << "27 14 " << std::endl
  << "27 15 " << std::endl
  << "27 16 " << std::endl
  << "27 24 " << std::endl
  << "27 25 " << std::endl
  << "27 26 " << std::endl
  << "28 0 " << std::endl
  << "28 1 " << std::endl
  << "28 4 " << std::endl
  << "28 5 " << std::endl
  << "28 6 " << std::endl
  << "28 7 " << std::endl
  << "28 12 " << std::endl
  << "28 13 " << std::endl
  << "28 14 " << std::endl
  << "28 15 " << std::endl
  << "28 16 " << std::endl
  << "28 17 " << std::endl
  << "28 25 " << std::endl
  << "28 26 " << std::endl
  << "28 27 " << std::endl
  << "29 0 " << std::endl
  << "29 1 " << std::endl
  << "29 2 " << std::endl
  << "29 5 " << std::endl
  << "29 6 " << std::endl
  << "29 7 " << std::endl
  << "29 8 " << std::endl
  << "29 13 " << std::endl
  << "29 14 " << std::endl
  << "29 15 " << std::endl
  << "29 16 " << std::endl
  << "29 17 " << std::endl
  << "29 18 " << std::endl
  << "29 26 " << std::endl
  << "29 27 " << std::endl
  << "29 28 " << std::endl
  << "30 0 " << std::endl
  << "30 1 " << std::endl
  << "30 2 " << std::endl
  << "30 5 " << std::endl
  << "30 6 " << std::endl
  << "30 7 " << std::endl
  << "30 8 " << std::endl
  << "30 9 " << std::endl
  << "30 14 " << std::endl
  << "30 15 " << std::endl
  << "30 16 " << std::endl
  << "30 17 " << std::endl
  << "30 18 " << std::endl
  << "30 19 " << std::endl
  << "30 27 " << std::endl
  << "30 28 " << std::endl
  << "30 29 " << std::endl
  << "31 1 " << std::endl
  << "31 2 " << std::endl
  << "31 6 " << std::endl
  << "31 7 " << std::endl
  << "31 8 " << std::endl
  << "31 9 " << std::endl
  << "31 15 " << std::endl
  << "31 16 " << std::endl
  << "31 17 " << std::endl
  << "31 18 " << std::endl
  << "31 19 " << std::endl
  << "31 20 " << std::endl
  << "31 28 " << std::endl
  << "31 29 " << std::endl
  << "31 30 " << std::endl
  << "32 1 " << std::endl
  << "32 2 " << std::endl
  << "32 7 " << std::endl
  << "32 8 " << std::endl
  << "32 9 " << std::endl
  << "32 10 " << std::endl
  << "32 16 " << std::endl
  << "32 17 " << std::endl
  << "32 18 " << std::endl
  << "32 19 " << std::endl
  << "32 20 " << std::endl
  << "32 21 " << std::endl
  << "32 29 " << std::endl
  << "32 30 " << std::endl
  << "32 31 " << std::endl
  << "33 1 " << std::endl
  << "33 2 " << std::endl
  << "33 3 " << std::endl
  << "33 7 " << std::endl
  << "33 8 " << std::endl
  << "33 9 " << std::endl
  << "33 10 " << std::endl
  << "33 16 " << std::endl
  << "33 17 " << std::endl
  << "33 18 " << std::endl
  << "33 19 " << std::endl
  << "33 20 " << std::endl
  << "33 21 " << std::endl
  << "33 22 " << std::endl
  << "33 30 " << std::endl
  << "33 31 " << std::endl
  << "33 32 " << std::endl
  << "34 1 " << std::endl
  << "34 2 " << std::endl
  << "34 3 " << std::endl
  << "34 7 " << std::endl
  << "34 8 " << std::endl
  << "34 9 " << std::endl
  << "34 10 " << std::endl
  << "34 11 " << std::endl
  << "34 17 " << std::endl
  << "34 18 " << std::endl
  << "34 19 " << std::endl
  << "34 20 " << std::endl
  << "34 21 " << std::endl
  << "34 22 " << std::endl
  << "34 23 " << std::endl
  << "34 31 " << std::endl
  << "34 32 " << std::endl
  << "34 33 " << std::endl
  << "35 2 " << std::endl
  << "35 3 " << std::endl
  << "35 8 " << std::endl
  << "35 9 " << std::endl
  << "35 10 " << std::endl
  << "35 11 " << std::endl
  << "35 12 " << std::endl
  << "35 18 " << std::endl
  << "35 19 " << std::endl
  << "35 20 " << std::endl
  << "35 21 " << std::endl
  << "35 22 " << std::endl
  << "35 23 " << std::endl
  << "35 32 " << std::endl
  << "35 33 " << std::endl
  << "35 34 " << std::endl
  << "36 2 " << std::endl
  << "36 3 " << std::endl
  << "36 4 " << std::endl
  << "36 8 " << std::endl
  << "36 9 " << std::endl
  << "36 10 " << std::endl
  << "36 11 " << std::endl
  << "36 12 " << std::endl
  << "36 19 " << std::endl
  << "36 20 " << std::endl
  << "36 21 " << std::endl
  << "36 22 " << std::endl
  << "36 23 " << std::endl
  << "36 24 " << std::endl
  << "36 33 " << std::endl
  << "36 34 " << std::endl
  << "36 35 " << std::endl
  << "37 3 " << std::endl
  << "37 4 " << std::endl
  << "37 9 " << std::endl
  << "37 10 " << std::endl
  << "37 11 " << std::endl
  << "37 12 " << std::endl
  << "37 13 " << std::endl
  << "37 20 " << std::endl
  << "37 21 " << std::endl
  << "37 22 " << std::endl
  << "37 23 " << std::endl
  << "37 24 " << std::endl
  << "37 25 " << std::endl
  << "37 34 " << std::endl
  << "37 35 " << std::endl
  << "37 36 " << std::endl
  << "38 3 " << std::endl
  << "38 4 " << std::endl
  << "38 5 " << std::endl
  << "38 10 " << std::endl
  << "38 11 " << std::endl
  << "38 12 " << std::endl
  << "38 13 " << std::endl
  << "38 14 " << std::endl
  << "38 21 " << std::endl
  << "38 22 " << std::endl
  << "38 23 " << std::endl
  << "38 24 " << std::endl
  << "38 25 " << std::endl
  << "38 26 " << std::endl
  << "38 35 " << std::endl
  << "38 36 " << std::endl
  << "38 37 " << std::endl
  << "39 3 " << std::endl
  << "39 4 " << std::endl
  << "39 5 " << std::endl
  << "39 10 " << std::endl
  << "39 11 " << std::endl
  << "39 12 " << std::endl
  << "39 13 " << std::endl
  << "39 14 " << std::endl
  << "39 22 " << std::endl
  << "39 23 " << std::endl
  << "39 24 " << std::endl
  << "39 25 " << std::endl
  << "39 26 " << std::endl
  << "39 27 " << std::endl
  << "39 36 " << std::endl
  << "39 37 " << std::endl
  << "39 38 " << std::endl
  << "40 4 " << std::endl
  << "40 5 " << std::endl
  << "40 11 " << std::endl
  << "40 12 " << std::endl
  << "40 13 " << std::endl
  << "40 14 " << std::endl
  << "40 15 " << std::endl
  << "40 23 " << std::endl
  << "40 24 " << std::endl
  << "40 25 " << std::endl
  << "40 26 " << std::endl
  << "40 27 " << std::endl
  << "40 28 " << std::endl
  << "40 37 " << std::endl
  << "40 38 " << std::endl
  << "40 39 " << std::endl
  << "41 4 " << std::endl
  << "41 5 " << std::endl
  << "41 6 " << std::endl
  << "41 12 " << std::endl
  << "41 13 " << std::endl
  << "41 14 " << std::endl
  << "41 15 " << std::endl
  << "41 16 " << std::endl
  << "41 24 " << std::endl
  << "41 25 " << std::endl
  << "41 26 " << std::endl
  << "41 27 " << std::endl
  << "41 28 " << std::endl
  << "41 29 " << std::endl
  << "41 38 " << std::endl
  << "41 39 " << std::endl
  << "41 40 " << std::endl
  << "42 5 " << std::endl
  << "42 6 " << std::endl
  << "42 12 " << std::endl
  << "42 13 " << std::endl
  << "42 14 " << std::endl
  << "42 15 " << std::endl
  << "42 16 " << std::endl
  << "42 25 " << std::endl
  << "42 26 " << std::endl
  << "42 27 " << std::endl
  << "42 28 " << std::endl
  << "42 29 " << std::endl
  << "42 30 " << std::endl
  << "42 39 " << std::endl
  << "42 40 " << std::endl
  << "42 41 " << std::endl
  << "43 1 " << std::endl
  << "43 5 " << std::endl
  << "43 6 " << std::endl
  << "43 7 " << std::endl
  << "43 13 " << std::endl
  << "43 14 " << std::endl
  << "43 15 " << std::endl
  << "43 16 " << std::endl
  << "43 17 " << std::endl
  << "43 25 " << std::endl
  << "43 26 " << std::endl
  << "43 27 " << std::endl
  << "43 28 " << std::endl
  << "43 29 " << std::endl
  << "43 30 " << std::endl
  << "43 31 " << std::endl
  << "43 40 " << std::endl
  << "43 41 " << std::endl
  << "43 42 " << std::endl
  << "44 1 " << std::endl
  << "44 5 " << std::endl
  << "44 6 " << std::endl
  << "44 7 " << std::endl
  << "44 8 " << std::endl
  << "44 14 " << std::endl
  << "44 15 " << std::endl
  << "44 16 " << std::endl
  << "44 17 " << std::endl
  << "44 18 " << std::endl
  << "44 26 " << std::endl
  << "44 27 " << std::endl
  << "44 28 " << std::endl
  << "44 29 " << std::endl
  << "44 30 " << std::endl
  << "44 31 " << std::endl
  << "44 32 " << std::endl
  << "44 41 " << std::endl
  << "44 42 " << std::endl
  << "44 43 " << std::endl
  << "45 1 " << std::endl
  << "45 6 " << std::endl
  << "45 7 " << std::endl
  << "45 8 " << std::endl
  << "45 14 " << std::endl
  << "45 15 " << std::endl
  << "45 16 " << std::endl
  << "45 17 " << std::endl
  << "45 18 " << std::endl
  << "45 19 " << std::endl
  << "45 27 " << std::endl
  << "45 28 " << std::endl
  << "45 29 " << std::endl
  << "45 30 " << std::endl
  << "45 31 " << std::endl
  << "45 32 " << std::endl
  << "45 33 " << std::endl
  << "45 42 " << std::endl
  << "45 43 " << std::endl
  << "45 44 " << std::endl
  << "46 7 " << std::endl
  << "46 17 " << std::endl
  << "46 18 " << std::endl
  << "46 19 " << std::endl
  << "46 29 " << std::endl
  << "46 30 " << std::endl
  << "46 31 " << std::endl
  << "46 32 " << std::endl
  << "46 33 " << std::endl
  << "46 44 " << std::endl
  << "46 45 " << std::endl
  << "47 7 " << std::endl
  << "47 8 " << std::endl
  << "47 17 " << std::endl
  << "47 18 " << std::endl
  << "47 19 " << std::endl
  << "47 30 " << std::endl
  << "47 31 " << std::endl
  << "47 32 " << std::endl
  << "47 33 " << std::endl
  << "47 34 " << std::endl
  << "47 45 " << std::endl
  << "47 46 " << std::endl
  << "48 8 " << std::endl
  << "48 17 " << std::endl
  << "48 18 " << std::endl
  << "48 19 " << std::endl
  << "48 20 " << std::endl
  << "48 31 " << std::endl
  << "48 32 " << std::endl
  << "48 33 " << std::endl
  << "48 34 " << std::endl
  << "48 35 " << std::endl
  << "48 45 " << std::endl
  << "48 46 " << std::endl
  << "48 47 " << std::endl
  << "49 8 " << std::endl
  << "49 9 " << std::endl
  << "49 18 " << std::endl
  << "49 19 " << std::endl
  << "49 20 " << std::endl
  << "49 21 " << std::endl
  << "49 31 " << std::endl
  << "49 32 " << std::endl
  << "49 33 " << std::endl
  << "49 34 " << std::endl
  << "49 35 " << std::endl
  << "49 46 " << std::endl
  << "49 47 " << std::endl
  << "49 48 " << std::endl
  << "50 9 " << std::endl
  << "50 18 " << std::endl
  << "50 19 " << std::endl
  << "50 20 " << std::endl
  << "50 21 " << std::endl
  << "50 32 " << std::endl
  << "50 33 " << std::endl
  << "50 34 " << std::endl
  << "50 35 " << std::endl
  << "50 36 " << std::endl
  << "50 47 " << std::endl
  << "50 48 " << std::endl
  << "50 49 " << std::endl
  << "51 9 " << std::endl
  << "51 10 " << std::endl
  << "51 19 " << std::endl
  << "51 20 " << std::endl
  << "51 21 " << std::endl
  << "51 22 " << std::endl
  << "51 33 " << std::endl
  << "51 34 " << std::endl
  << "51 35 " << std::endl
  << "51 36 " << std::endl
  << "51 37 " << std::endl
  << "51 48 " << std::endl
  << "51 49 " << std::endl
  << "51 50 " << std::endl
  << "52 10 " << std::endl
  << "52 20 " << std::endl
  << "52 21 " << std::endl
  << "52 22 " << std::endl
  << "52 23 " << std::endl
  << "52 33 " << std::endl
  << "52 34 " << std::endl
  << "52 35 " << std::endl
  << "52 36 " << std::endl
  << "52 37 " << std::endl
  << "52 38 " << std::endl
  << "52 49 " << std::endl
  << "52 50 " << std::endl
  << "52 51 " << std::endl
  << "53 10 " << std::endl
  << "53 11 " << std::endl
  << "53 20 " << std::endl
  << "53 21 " << std::endl
  << "53 22 " << std::endl
  << "53 23 " << std::endl
  << "53 34 " << std::endl
  << "53 35 " << std::endl
  << "53 36 " << std::endl
  << "53 37 " << std::endl
  << "53 38 " << std::endl
  << "53 50 " << std::endl
  << "53 51 " << std::endl
  << "53 52 " << std::endl
  << "54 11 " << std::endl
  << "54 21 " << std::endl
  << "54 22 " << std::endl
  << "54 23 " << std::endl
  << "54 24 " << std::endl
  << "54 35 " << std::endl
  << "54 36 " << std::endl
  << "54 37 " << std::endl
  << "54 38 " << std::endl
  << "54 39 " << std::endl
  << "54 51 " << std::endl
  << "54 52 " << std::endl
  << "54 53 " << std::endl
  << "55 11 " << std::endl
  << "55 12 " << std::endl
  << "55 22 " << std::endl
  << "55 23 " << std::endl
  << "55 24 " << std::endl
  << "55 25 " << std::endl
  << "55 36 " << std::endl
  << "55 37 " << std::endl
  << "55 38 " << std::endl
  << "55 39 " << std::endl
  << "55 40 " << std::endl
  << "55 52 " << std::endl
  << "55 53 " << std::endl
  << "55 54 " << std::endl
  << "56 12 " << std::endl
  << "56 22 " << std::endl
  << "56 23 " << std::endl
  << "56 24 " << std::endl
  << "56 25 " << std::endl
  << "56 26 " << std::endl
  << "56 36 " << std::endl
  << "56 37 " << std::endl
  << "56 38 " << std::endl
  << "56 39 " << std::endl
  << "56 40 " << std::endl
  << "56 41 " << std::endl
  << "56 53 " << std::endl
  << "56 54 " << std::endl
  << "56 55 " << std::endl
  << "57 12 " << std::endl
  << "57 13 " << std::endl
  << "57 23 " << std::endl
  << "57 24 " << std::endl
  << "57 25 " << std::endl
  << "57 26 " << std::endl
  << "57 37 " << std::endl
  << "57 38 " << std::endl
  << "57 39 " << std::endl
  << "57 40 " << std::endl
  << "57 41 " << std::endl
  << "57 54 " << std::endl
  << "57 55 " << std::endl
  << "57 56 " << std::endl
  << "58 13 " << std::endl
  << "58 24 " << std::endl
  << "58 25 " << std::endl
  << "58 26 " << std::endl
  << "58 27 " << std::endl
  << "58 38 " << std::endl
  << "58 39 " << std::endl
  << "58 40 " << std::endl
  << "58 41 " << std::endl
  << "58 42 " << std::endl
  << "58 55 " << std::endl
  << "58 56 " << std::endl
  << "58 57 " << std::endl
  << "59 13 " << std::endl
  << "59 14 " << std::endl
  << "59 25 " << std::endl
  << "59 26 " << std::endl
  << "59 27 " << std::endl
  << "59 28 " << std::endl
  << "59 39 " << std::endl
  << "59 40 " << std::endl
  << "59 41 " << std::endl
  << "59 42 " << std::endl
  << "59 43 " << std::endl
  << "59 56 " << std::endl
  << "59 57 " << std::endl
  << "59 58 " << std::endl
  << "60 14 " << std::endl
  << "60 25 " << std::endl
  << "60 26 " << std::endl
  << "60 27 " << std::endl
  << "60 28 " << std::endl
  << "60 39 " << std::endl
  << "60 40 " << std::endl
  << "60 41 " << std::endl
  << "60 42 " << std::endl
  << "60 43 " << std::endl
  << "60 44 " << std::endl
  << "60 57 " << std::endl
  << "60 58 " << std::endl
  << "60 59 " << std::endl
  << "61 14 " << std::endl
  << "61 15 " << std::endl
  << "61 26 " << std::endl
  << "61 27 " << std::endl
  << "61 28 " << std::endl
  << "61 29 " << std::endl
  << "61 40 " << std::endl
  << "61 41 " << std::endl
  << "61 42 " << std::endl
  << "61 43 " << std::endl
  << "61 44 " << std::endl
  << "61 58 " << std::endl
  << "61 59 " << std::endl
  << "61 60 " << std::endl
  << "62 15 " << std::endl
  << "62 27 " << std::endl
  << "62 28 " << std::endl
  << "62 29 " << std::endl
  << "62 30 " << std::endl
  << "62 41 " << std::endl
  << "62 42 " << std::endl
  << "62 43 " << std::endl
  << "62 44 " << std::endl
  << "62 45 " << std::endl
  << "62 59 " << std::endl
  << "62 60 " << std::endl
  << "62 61 " << std::endl
  << "63 15 " << std::endl
  << "63 16 " << std::endl
  << "63 27 " << std::endl
  << "63 28 " << std::endl
  << "63 29 " << std::endl
  << "63 30 " << std::endl
  << "63 31 " << std::endl
  << "63 42 " << std::endl
  << "63 43 " << std::endl
  << "63 44 " << std::endl
  << "63 45 " << std::endl
  << "63 46 " << std::endl
  << "63 60 " << std::endl
  << "63 61 " << std::endl
  << "63 62 " << std::endl
  << "64 16 " << std::endl
  << "64 17 " << std::endl
  << "64 28 " << std::endl
  << "64 29 " << std::endl
  << "64 30 " << std::endl
  << "64 31 " << std::endl
  << "64 32 " << std::endl
  << "64 42 " << std::endl
  << "64 43 " << std::endl
  << "64 44 " << std::endl
  << "64 45 " << std::endl
  << "64 46 " << std::endl
  << "64 47 " << std::endl
  << "64 61 " << std::endl
  << "64 62 " << std::endl
  << "64 63 " << std::endl
  << "65 7 " << std::endl
  << "65 16 " << std::endl
  << "65 17 " << std::endl
  << "65 18 " << std::endl
  << "65 29 " << std::endl
  << "65 30 " << std::endl
  << "65 31 " << std::endl
  << "65 32 " << std::endl
  << "65 43 " << std::endl
  << "65 44 " << std::endl
  << "65 45 " << std::endl
  << "65 46 " << std::endl
  << "65 47 " << std::endl
  << "65 48 " << std::endl
  << "65 62 " << std::endl
  << "65 63 " << std::endl
  << "65 64 " << std::endl;

}
}  // namespace brisk
