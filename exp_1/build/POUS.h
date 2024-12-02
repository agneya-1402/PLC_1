#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// PROGRAM EXP1
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,START)
  __DECLARE_VAR(BOOL,LAMP)

  // PROGRAM private variables - TEMP, private and located variables

} EXP1;

void EXP1_init__(EXP1 *data__, BOOL retain);
// Code part
void EXP1_body__(EXP1 *data__);
#endif //__POUS_H
