PROGRAM exp1
  VAR_INPUT
    Start : BOOL;
  END_VAR
  VAR_OUTPUT
    Lamp : BOOL;
  END_VAR

  Lamp := Start;
END_PROGRAM


CONFIGURATION Config0

  RESOURCE Res0 ON PLC
    TASK task0(INTERVAL := T#20ms,PRIORITY := 0);
    PROGRAM instance0 WITH task0 : exp1;
  END_RESOURCE
END_CONFIGURATION
