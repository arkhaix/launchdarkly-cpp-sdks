#pragma once

#include <launchdarkly/export.h>

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

LD_EXPORT(bool) launchdarkly_foo(int32_t *out_result);

#ifdef __cplusplus
}
#endif
