@echo off
cls
clipper @HRBFUN /n /i /m
clipper @SMED /n /i /m
clipper @SMED1 /n /i /m
clipper @SMED2 /n /i /m
clipper @SMED3 /n /i /m
REM rtlink /FREE FI SMED,SMED1,SMED2,insercom,amdk6 LIB clipper,extend,dbfcdx,novterm,helg,gaspro52,CT
BLINKER FI @SMED
REM rtlink /FREE FI SMED,SMED1,SMED2,HRBFUN,AMDK6,TIMESLIC,__WAIT LIB clipper,extend,dbfcdx,novterm,gaspro52,CT,OSLIB
del SMED.obj
del SMED1.obj

