/* This file is generated by gen_zigzag16.m */

/* clang-format off */

#include "odintrin.h"
OD_EXTERN const unsigned char OD_ZIGZAG16_DCT_DCT[192][2] = {
  {8, 0}, {8, 1}, {8, 2}, {9, 0},
  {8, 3}, {9, 1}, {9, 2}, {10, 0},
  {9, 3}, {10, 1}, {10, 2}, {11, 0},
  {10, 3}, {11, 1}, {11, 2}, {11, 3},
  {12, 0}, {12, 1}, {13, 0}, {12, 2},
  {12, 3}, {13, 1}, {13, 2}, {14, 0},
  {13, 3}, {14, 1}, {15, 0}, {14, 2},
  {14, 3}, {15, 1}, {15, 2}, {15, 3},
  {0, 8}, {1, 8}, {0, 9}, {2, 8},
  {1, 9}, {3, 8}, {0, 10}, {2, 9},
  {1, 10}, {3, 9}, {0, 11}, {2, 10},
  {1, 11}, {3, 10}, {0, 12}, {2, 11},
  {1, 12}, {3, 11}, {0, 13}, {2, 12},
  {1, 13}, {0, 14}, {3, 12}, {2, 13},
  {1, 14}, {3, 13}, {0, 15}, {2, 14},
  {1, 15}, {3, 14}, {2, 15}, {3, 15},
  {4, 8}, {5, 8}, {4, 9}, {8, 4},
  {8, 5}, {6, 8}, {5, 9}, {4, 10},
  {9, 4}, {8, 6}, {7, 8}, {9, 5},
  {5, 10}, {8, 7}, {6, 9}, {4, 11},
  {10, 4}, {9, 6}, {7, 9}, {8, 8},
  {10, 5}, {6, 10}, {5, 11}, {9, 7},
  {8, 9}, {10, 6}, {7, 10}, {4, 12},
  {11, 4}, {9, 8}, {6, 11}, {10, 7},
  {11, 5}, {5, 12}, {8, 10}, {7, 11},
  {9, 9}, {4, 13}, {10, 8}, {11, 6},
  {11, 7}, {6, 12}, {8, 11}, {9, 10},
  {12, 4}, {5, 13}, {10, 9}, {12, 5},
  {7, 12}, {11, 8}, {4, 14}, {6, 13},
  {10, 10}, {9, 11}, {12, 6}, {13, 4},
  {11, 9}, {8, 12}, {5, 14}, {12, 7},
  {7, 13}, {4, 15}, {13, 5}, {10, 11},
  {11, 10}, {9, 12}, {13, 6}, {12, 8},
  {6, 14}, {8, 13}, {5, 15}, {13, 7},
  {14, 4}, {12, 9}, {7, 14}, {11, 11},
  {10, 12}, {9, 13}, {14, 5}, {6, 15},
  {13, 8}, {8, 14}, {12, 10}, {14, 6},
  {7, 15}, {13, 9}, {15, 4}, {10, 13},
  {11, 12}, {14, 7}, {9, 14}, {12, 11},
  {8, 15}, {15, 5}, {13, 10}, {14, 8},
  {11, 13}, {15, 6}, {9, 15}, {10, 14},
  {14, 9}, {15, 7}, {13, 11}, {12, 12},
  {10, 15}, {11, 14}, {15, 8}, {14, 10},
  {12, 13}, {13, 12}, {15, 9}, {11, 15},
  {14, 11}, {13, 13}, {15, 10}, {12, 14},
  {13, 14}, {15, 11}, {14, 12}, {12, 15},
  {14, 13}, {13, 15}, {15, 12}, {14, 14},
  {15, 13}, {14, 15}, {15, 14}, {15, 15}
  };

OD_EXTERN const unsigned char OD_ZIGZAG16_ADST_DCT[192][2] = {
  {8, 0}, {9, 0}, {10, 0}, {8, 1},
  {11, 0}, {9, 1}, {8, 2}, {12, 0},
  {10, 1}, {9, 2}, {8, 3}, {13, 0},
  {11, 1}, {10, 2}, {9, 3}, {14, 0},
  {12, 1}, {10, 3}, {15, 0}, {11, 2},
  {13, 1}, {11, 3}, {12, 2}, {14, 1},
  {12, 3}, {13, 2}, {15, 1}, {13, 3},
  {14, 2}, {14, 3}, {15, 2}, {15, 3},
  {0, 8}, {1, 8}, {2, 8}, {0, 9},
  {3, 8}, {1, 9}, {2, 9}, {0, 10},
  {3, 9}, {1, 10}, {2, 10}, {0, 11},
  {3, 10}, {1, 11}, {2, 11}, {0, 12},
  {3, 11}, {1, 12}, {2, 12}, {0, 13},
  {3, 12}, {1, 13}, {0, 14}, {2, 13},
  {0, 15}, {1, 14}, {3, 13}, {2, 14},
  {1, 15}, {3, 14}, {2, 15}, {3, 15},
  {8, 4}, {9, 4}, {8, 5}, {4, 8},
  {10, 4}, {9, 5}, {5, 8}, {8, 6},
  {4, 9}, {10, 5}, {9, 6}, {6, 8},
  {8, 7}, {11, 4}, {7, 8}, {5, 9},
  {9, 7}, {11, 5}, {10, 6}, {4, 10},
  {6, 9}, {8, 8}, {5, 10}, {7, 9},
  {12, 4}, {10, 7}, {9, 8}, {11, 6},
  {8, 9}, {4, 11}, {6, 10}, {7, 10},
  {12, 5}, {5, 11}, {10, 8}, {11, 7},
  {9, 9}, {4, 12}, {13, 4}, {8, 10},
  {6, 11}, {12, 6}, {5, 12}, {10, 9},
  {7, 11}, {9, 10}, {11, 8}, {13, 5},
  {8, 11}, {4, 13}, {6, 12}, {10, 10},
  {12, 7}, {11, 9}, {7, 12}, {14, 4},
  {5, 13}, {9, 11}, {13, 6}, {8, 12},
  {4, 14}, {12, 8}, {6, 13}, {11, 10},
  {10, 11}, {12, 9}, {5, 14}, {13, 7},
  {14, 5}, {9, 12}, {4, 15}, {7, 13},
  {8, 13}, {6, 14}, {13, 8}, {11, 11},
  {10, 12}, {15, 4}, {12, 10}, {14, 6},
  {13, 9}, {5, 15}, {9, 13}, {7, 14},
  {15, 5}, {6, 15}, {8, 14}, {14, 7},
  {11, 12}, {7, 15}, {9, 14}, {13, 10},
  {10, 13}, {14, 8}, {15, 6}, {14, 9},
  {12, 11}, {8, 15}, {15, 7}, {10, 14},
  {11, 13}, {9, 15}, {13, 11}, {12, 12},
  {15, 8}, {14, 10}, {15, 9}, {10, 15},
  {11, 14}, {13, 12}, {12, 13}, {15, 10},
  {14, 11}, {11, 15}, {13, 13}, {15, 11},
  {14, 12}, {12, 14}, {15, 12}, {13, 14},
  {12, 15}, {14, 13}, {13, 15}, {15, 13},
  {14, 14}, {15, 14}, {14, 15}, {15, 15}
  };

OD_EXTERN const unsigned char OD_ZIGZAG16_DCT_ADST[192][2] = {
  {8, 0}, {8, 1}, {8, 2}, {8, 3},
  {9, 0}, {9, 1}, {9, 2}, {9, 3},
  {10, 0}, {10, 1}, {10, 2}, {10, 3},
  {11, 0}, {11, 1}, {11, 2}, {11, 3},
  {12, 0}, {12, 1}, {12, 2}, {12, 3},
  {13, 0}, {13, 1}, {13, 2}, {13, 3},
  {14, 0}, {15, 0}, {14, 1}, {14, 2},
  {14, 3}, {15, 1}, {15, 2}, {15, 3},
  {0, 8}, {0, 9}, {0, 10}, {1, 8},
  {0, 11}, {1, 9}, {2, 8}, {0, 12},
  {1, 10}, {2, 9}, {0, 13}, {1, 11},
  {3, 8}, {2, 10}, {0, 14}, {1, 12},
  {3, 9}, {0, 15}, {2, 11}, {3, 10},
  {1, 13}, {2, 12}, {3, 11}, {1, 14},
  {2, 13}, {1, 15}, {3, 12}, {2, 14},
  {3, 13}, {2, 15}, {3, 14}, {3, 15},
  {4, 8}, {4, 9}, {5, 8}, {4, 10},
  {5, 9}, {4, 11}, {6, 8}, {5, 10},
  {8, 4}, {6, 9}, {4, 12}, {5, 11},
  {8, 5}, {6, 10}, {7, 8}, {8, 6},
  {4, 13}, {7, 9}, {5, 12}, {8, 7},
  {9, 4}, {6, 11}, {8, 8}, {7, 10},
  {5, 13}, {9, 5}, {4, 14}, {9, 6},
  {8, 9}, {6, 12}, {9, 7}, {7, 11},
  {4, 15}, {8, 10}, {9, 8}, {5, 14},
  {10, 4}, {6, 13}, {10, 5}, {9, 9},
  {7, 12}, {8, 11}, {10, 6}, {5, 15},
  {10, 7}, {6, 14}, {9, 10}, {7, 13},
  {8, 12}, {10, 8}, {9, 11}, {6, 15},
  {11, 4}, {11, 5}, {10, 9}, {8, 13},
  {7, 14}, {11, 6}, {9, 12}, {11, 7},
  {10, 10}, {7, 15}, {8, 14}, {12, 4},
  {11, 8}, {12, 5}, {9, 13}, {10, 11},
  {8, 15}, {11, 9}, {12, 6}, {12, 7},
  {10, 12}, {9, 14}, {11, 10}, {13, 4},
  {12, 8}, {9, 15}, {13, 5}, {11, 11},
  {12, 9}, {10, 13}, {13, 6}, {13, 7},
  {12, 10}, {14, 4}, {11, 12}, {13, 8},
  {10, 14}, {14, 5}, {12, 11}, {13, 9},
  {14, 6}, {10, 15}, {11, 13}, {15, 4},
  {14, 7}, {12, 12}, {13, 10}, {14, 8},
  {15, 5}, {13, 11}, {15, 6}, {11, 14},
  {14, 9}, {12, 13}, {11, 15}, {15, 7},
  {14, 10}, {15, 8}, {13, 12}, {12, 14},
  {15, 9}, {14, 11}, {13, 13}, {12, 15},
  {15, 10}, {14, 12}, {13, 14}, {15, 11},
  {13, 15}, {14, 13}, {14, 14}, {15, 12},
  {14, 15}, {15, 13}, {15, 14}, {15, 15}
  };
