// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include <stdint.h>
#include <stdlib.h>

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t len) {
  int cnt = 0;

  if (len != 5) {
    return 0;
  }

  if (data[0] == 'H') {
    if (data[1] == 'e') {
      if (data[2] == 'l') {
        if (data[3] == 'l') {
          if (data[4] == 'o') {
            int *p = NULL; *p = 123;
          }
        }
      }
    }
  }
  return 0;
}