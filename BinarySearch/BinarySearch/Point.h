//
// Created by Jisoo Lee on 2022/10/31.
//

#include "BinarySearch.h"

Point DataSet[15] =
        {
                //      ID,       점수
                {1, 877.88},
                {2, 176.23},
                {3, 365.92},
                {4, 162.44},
                {5, 224.72},
                {6, 121.44},
                {7, 290.34},
                {8, 227.13},
                {9, 941.95},
                {10, 926.66},
                {11, 529.11},
                {12, 124.26},
                {13, 272.67},
                {14, 94.73},
                {15, 952.39},
//                (Point) {16, 74.77},
//                (Point) {17, 934.55},
//                (Point) {18, 958.14},
//                (Point) {19, 715.93},
//                (Point) {20, 761.44},
//                (Point) {21, 719.04},
//                (Point) {22, 826.22},
//                (Point) {23, 156.57},
//                (Point) {24, 169.94},
//                (Point) {25, 83.75},
//                (Point) {26, 880.84},
//                (Point) {27, 867.22},
//                (Point) {28, 156.88},
//                (Point) {29, 660.25},
//                (Point) {30, 584.36},
//                (Point) {31, 906.82},
//                (Point) {32, 237.01},
//                (Point) {33, 934.54},
//                (Point) {34, 508.73},
//                (Point) {35, 947.58},
//                (Point) {36, 27.77},
//                (Point) {37, 877.83},
//                (Point) {38, 676.39},
//                (Point) {39, 142.18},
//                (Point) {40, 704.35},
//                (Point) {41, 85.1},
//                (Point) {42, 594.56},
//                (Point) {43, 781.48},
//                (Point) {44, 301.59},
//                (Point) {45, 140.4},
//                (Point) {46, 435.35},
//                (Point) {47, 669.57},
//                (Point) {48, 344.44},
//                (Point) {49, 940.52},
//                (Point) {50, 937.42},
//                (Point) {51, 345.73},
//                (Point) {52, 780.54},
//                (Point) {53, 648.54},
//                (Point) {54, 258.18},
//                (Point) {55, 842.58},
//                (Point) {56, 539.13},
//                (Point) {57, 238.05},
//                (Point) {58, 398.97},
//                (Point) {59, 154.08},
//                (Point) {60, 942.21},
//                (Point) {61, 13.88},
//                (Point) {62, 479.44},
//                (Point) {63, 66.04},
//                (Point) {64, 486.64},
//                (Point) {65, 857.82},
//                (Point) {66, 443.58},
//                (Point) {67, 229.63},
//                (Point) {68, 515.27},
//                (Point) {69, 533.97},
//                (Point) {70, 514.57},
//                (Point) {71, 419.82},
//                (Point) {72, 218.81},
//                (Point) {73, 276.27},
//                (Point) {74, 124.02},
//                (Point) {75, 710.37},
//                (Point) {76, 552.9},
//                (Point) {77, 89.5},
//                (Point) {78, 539.03},
//                (Point) {79, 730.94},
//                (Point) {80, 149.02},
//                (Point) {81, 757.9},
//                (Point) {82, 327.87},
//                (Point) {83, 466.95},
//                (Point) {84, 824.97},
//                (Point) {85, 255.12},
//                (Point) {86, 25.95},
//                (Point) {87, 602.38},
//                (Point) {88, 434.2},
//                (Point) {89, 442.66},
//                (Point) {90, 378.01},
//                (Point) {91, 803.05},
//                (Point) {92, 93.29},
//                (Point) {93, 332.13},
//                (Point) {94, 486.66},
//                (Point) {95, 888.15},
//                (Point) {96, 842.89},
//                (Point) {97, 14.95},
//                (Point) {98, 700.94},
//                (Point) {99, 27.13},
//                (Point) {100, 444.82},
//                (Point) {101, 487.23},
//                (Point) {102, 169.6},
//                (Point) {103, 721.73},
//                (Point) {104, 357.74},
//                (Point) {105, 146.39},
//                (Point) {106, 921.27},
//                (Point) {107, 70.06},
//                (Point) {108, 720.46},
//                (Point) {109, 197.24},
//                (Point) {110, 26.12},
//                (Point) {111, 521.37},
//                (Point) {112, 739.44},
//                (Point) {113, 572.31},
//                (Point) {114, 652.08},
//                (Point) {115, 804.1},
//                (Point) {116, 966.14},
//                (Point) {117, 687.68},
//                (Point) {118, 248.65},
//                (Point) {119, 109.71},
//                (Point) {120, 311.29},
        };

