@echo off
call d:\home\omnetpp\setenv-vc71.bat

call opp_nmakemake -f -N
nmake -f makefile.vc %*
