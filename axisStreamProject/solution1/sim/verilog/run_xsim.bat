
call xelab xil_defaultlib.apatb_doGain_top -prj doGain.prj --lib "ieee_proposed=./ieee_proposed" -s doGain 
call xsim --noieeewarnings doGain -tclbatch doGain.tcl

