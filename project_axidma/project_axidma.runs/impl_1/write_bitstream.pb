
q
Command: %s
1870*	planAhead2?
+open_checkpoint design_1_wrapper_routed.dcp2default:defaultZ12-2866h px
�
&Problem parsing board_part file - %s%s4*board2b
NA:/Vivado/Vivado/2014.2/data/boards/board_parts/artix7/arty/C.0/board_part.xml2default:default2\
H, The board part 'xc7a35ticsg324-1L' is either not supported or invalid.2default:defaultZ49-4h px
d
-Analyzing %s Unisim elements for replacement
17*netlist2
1152default:defaultZ29-17h px
g
2Unisim Transformation completed in %s CPU seconds
28*netlist2
02default:defaultZ29-28h px
u
Netlist was created with %s %s291*project2
Vivado2default:default2
2014.22default:defaultZ1-479h px
�
Loading clock regions from %s
13*device2_
KA:/Vivado/Vivado/2014.2/data\parts/xilinx/zynq/zynq/xc7z020/ClockRegion.xml2default:defaultZ21-13h px
�
Loading clock buffers from %s
11*device2`
LA:/Vivado/Vivado/2014.2/data\parts/xilinx/zynq/zynq/xc7z020/ClockBuffers.xml2default:defaultZ21-11h px
�
&Loading clock placement rules from %s
318*place2W
CA:/Vivado/Vivado/2014.2/data/parts/xilinx/zynq/ClockPlacerRules.xml2default:defaultZ30-318h px
�
)Loading package pin functions from %s...
17*device2S
?A:/Vivado/Vivado/2014.2/data\parts/xilinx/zynq/PinFunctions.xml2default:defaultZ21-17h px
�
Loading package from %s
16*device2b
NA:/Vivado/Vivado/2014.2/data\parts/xilinx/zynq/zynq/xc7z020/clg484/Package.xml2default:defaultZ21-16h px
�
Loading io standards from %s
15*device2T
@A:/Vivado/Vivado/2014.2/data\./parts/xilinx/zynq/IOStandards.xml2default:defaultZ21-15h px
�
Parsing XDC File [%s]
179*designutils2�
xA:/FYP/HLSTutorials/project_axidma/project_axidma.runs/impl_1/.Xil/Vivado-9428-Dulanga-PC/dcp/design_1_wrapper_early.xdc2default:defaultZ20-179h px
�
Finished Parsing XDC File [%s]
178*designutils2�
xA:/FYP/HLSTutorials/project_axidma/project_axidma.runs/impl_1/.Xil/Vivado-9428-Dulanga-PC/dcp/design_1_wrapper_early.xdc2default:defaultZ20-178h px
�
Parsing XDC File [%s]
179*designutils2�
wA:/FYP/HLSTutorials/project_axidma/project_axidma.runs/impl_1/.Xil/Vivado-9428-Dulanga-PC/dcp/design_1_wrapper_late.xdc2default:defaultZ20-179h px
�
Finished Parsing XDC File [%s]
178*designutils2�
wA:/FYP/HLSTutorials/project_axidma/project_axidma.runs/impl_1/.Xil/Vivado-9428-Dulanga-PC/dcp/design_1_wrapper_late.xdc2default:defaultZ20-178h px
<
Reading XDEF placement.
206*designutilsZ20-206h px
:
Reading XDEF routing.
207*designutilsZ20-207h px
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2$
Read XDEF File: 2default:default2
00:00:022default:default2
00:00:022default:default2
524.0552default:default2
6.6332default:defaultZ17-268h px
9
Restoring placement.
754*designutilsZ20-754h px
�
ORestored %s out of %s XDEF sites from archive | CPU: %s secs | Memory: %s MB |
403*designutils2
21042default:default2
21042default:default2
4.0000002default:default2
0.0000002default:defaultZ20-403h px
r
)Pushed %s inverter(s) to %s load pin(s).
98*opt2
02default:default2
02default:defaultZ31-138h px
�
!Unisim Transformation Summary:
%s111*project2�
�  A total of 5 instances were transformed.
  RAM32M => RAM32M (RAMD32, RAMD32, RAMD32, RAMD32, RAMD32, RAMD32, RAMS32, RAMS32): 4 instances
  RAM32X1D => RAM32X1D (RAMD32, RAMD32): 1 instances
2default:defaultZ1-111h px
_
$Checkpoint was created with build %s293*project2
9326372default:defaultZ1-484h px
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2%
open_checkpoint: 2default:default2
00:00:182default:default2
00:00:342default:default2
530.3792default:default2
355.0702default:defaultZ17-268h px
�
@Attempting to get a license for feature '%s' and/or device '%s'
308*common2"
Implementation2default:default2
xc7z0202default:defaultZ17-347h px
�
0Got license for feature '%s' and/or device '%s'
310*common2"
Implementation2default:default2
xc7z0202default:defaultZ17-349h px
u
,Running DRC as a precondition to command %s
1349*	planAhead2#
write_bitstream2default:defaultZ12-1349h px
M
Running DRC with %s threads
24*drc2
22default:defaultZ23-27h px
c
DRC finished with %s
1905*	planAhead2(
0 Errors, 2 Warnings2default:defaultZ12-3199h px
f
BPlease refer to the DRC report (report_drc) for more information.
1906*	planAheadZ12-3200h px
<
Loading data files...
1271*designutilsZ12-1165h px
;
Loading site data...
1273*designutilsZ12-1167h px
<
Loading route data...
1272*designutilsZ12-1166h px
<
Processing options...
1362*designutilsZ12-1514h px
9
Creating bitmap...
1249*designutilsZ12-1141h px
4
Creating bitstream...
7*	bitstreamZ40-7h px
d
Writing bitstream %s...
11*	bitstream2*
./design_1_wrapper.bit2default:defaultZ40-11h px
C
Bitgen Completed Successfully.
1606*	planAheadZ12-1842h px
p
QWebTalk data collection is enabled (User setting is ON. Install Setting is ON.).
118*projectZ1-118h px
y
ZWebTalk report has not been sent to Xilinx. Please check your network and proxy settings.
185*commonZ17-185h px
W
Releasing license: %s
83*common2"
Implementation2default:defaultZ17-83h px
�
I%sTime (s): cpu = %s ; elapsed = %s . Memory (MB): peak = %s ; gain = %s
268*common2%
write_bitstream: 2default:default2
00:01:132default:default2
00:01:242default:default2
898.0862default:default2
367.7072default:defaultZ17-268h px


End Record