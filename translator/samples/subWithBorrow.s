# Subtract 0001FFh from 0F00h.

LOAD	4001h
SUB 	4002h
STORE	4003h
LOAD	4004h
SWB		4005h
STORE	4006h
HALT

4001h  	00h
4002h	FFh
4004h	0Fh
4005h	01h
