@echo off
cls
clipper @%1 /n /rc:\clipper5\helg
rtlink fi %1,insercom LIB clipper,extend,novterm
del %1.obj

