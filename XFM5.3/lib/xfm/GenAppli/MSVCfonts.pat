//## 	//## Compute the font of the widget
//## 	//## The full font name is stored in FONTVARNAME,
//## 	//## font properties are in FONTFAMILY, etc.
//## 	//## 
//## 	begin if [ defined(MFC_FONT_FAMILY) && MFC_FONT_FAMILY != "" ]
//## 		set local FONTFAMILY = [ upper MFC_FONT_FAMILY ]
//## 	end if
//## 	begin if [ defined(MFC_FONT_SIZE) && MFC_FONT_SIZE != "" ]
//## 		set local FONTSIZE = MFC_FONT_SIZE
//## 	end if
//## 	begin if [ defined(MFC_FONT_WEIGHT) && MFC_FONT_WEIGHT != "" ]
//## 		set local FONTWEIGHT = [ upper MFC_FONT_WEIGHT ]
//## 	end if
//## 	begin if [ defined(MFC_FONT_ITALIC) && MFC_FONT_ITALIC != "" ]
//## 		set local FONTITALIC = [ upper MFC_FONT_ITALIC ]
//## 	end if
//## 	begin if [ defined(FONTFAMILY) && defined(FONTSIZE) && defined(FONTWEIGHT) && defined(FONTITALIC) ]
//## 		//## 
//## 		//## Look up the X -> MS Windows font table.
//## 		//## 
//## 		set local FIDX = 1
//## 		begin while [ FIDX ]
//## 			set local XFONT = `FONTFAMILY'-`FONTSIZE'-`FONTWEIGHT'
//## 			set local XFONT = [ XFONT ]
//## 			set local FIDX = [ XFONT { XFONTS ]
//## 			begin if [ !FIDX ]
//## 			set local XFONT = `FONTFAMILY'-`FONTSIZE'-`*'
//## 			set local XFONT = [ XFONT ]
//## 			set local FIDX = [ XFONT { XFONTS ]
//## 			begin if [ !FIDX ]
//## 			set local XFONT = `FONTFAMILY'-`*'-`FONTWEIGHT'
//## 			set local XFONT = [ XFONT ]
//## 			set local FIDX = [ XFONT { XFONTS ]
//## 			begin if [ !FIDX ]
//## 			set local XFONT = `*'-`FONTSIZE'-`FONTWEIGHT'
//## 			set local XFONT = [ XFONT ]
//## 			set local FIDX = [ XFONT { XFONTS ]
//## 			begin if [ !FIDX ]
//## 			set local XFONT = `FONTFAMILY'-`*'-`*'
//## 			set local XFONT = [ XFONT ]
//## 			set local FIDX = [ XFONT { XFONTS ]
//## 			begin if [ !FIDX ]
//## 			set local XFONT = `*'-`*'-`FONTWEIGHT'
//## 			set local XFONT = [ XFONT ]
//## 			set local FIDX = [ XFONT { XFONTS ]
//## 			begin if [ !FIDX ]
//## 			set local XFONT = `*'-`FONTSIZE'-`*'
//## 			set local XFONT = [ XFONT ]
//## 			set local FIDX = [ XFONT { XFONTS ]
//## 			end if
//## 			end if
//## 			end if
//## 			end if
//## 			end if
//## 			end if
//## 			begin if [ FIDX ]
//## 				set local WFONT = [ WFONTS [ FIDX ]
//## 				set local F = [ WFONT left "-" ]
//## 				begin if [ F != "" && F != "*" ]
//## 					set local FONTFAMILY = F
//## 				end if
//## 				set local F = [ (WFONT right "-") left "-" ]
//## 				begin if [ F != "" && F != "*" ]
//## 					set local FONTSIZE = F
//## 				end if
//## 				set local F = [ (WFONT right "-") right "-" ]
//## 				begin if [ F != "" && F != "*" ]
//## 					set local FONTWEIGHT = F
//## 				end if
//## 			end if
//## 		end while
//## 		begin if [ FONTWEIGHT left 3 != "FW_ ]
//## 			set local F = FW_`FONTWEIGHT'
//## 			set local F = [ upper F ]
//## 			begin if [ ! (F { WFONTWEIGHTS) ]
//## begin message
//## *** Warning: font weight FONTWEIGHT not found: using FW_NORMAL.
//## end message
//## 				set local FONTWEIGHT = FW_NORMAL
//## 			ifelse
//## 				set local FONTWEIGHT = F
//## 			end if
//## 		end if
//## 		set local FULLFONTNAME = `FONTFAMILY'-`FONTSIZE'-`FONTWEIGHT'-`FONTITALIC'
//## 		set local FULLFONTNAME = [ FULLFONTNAME ]
//## 		set local IDX = [ FULLFONTNAME { FONTNAMES ]
//## 		begin if [ IDX == 0 ]
//## 			set global FONTNAMES = FONTNAMES FULLFONTNAME
//## 			set global FONTINDEX = [ FONTINDEX + 1 ]
//## 			set local FONTVARNAME = font`FONTINDEX'
//## 			set local FONTVARNAME = [ FONTVARNAME ]
//## 		ifelse
//## 			set local IDX = [ IDX - 1 ]
//## 			set local FONTVARNAME = font`IDX'
//## 			set local FONTVARNAME = [ FONTVARNAME ]
//## 		end if
//## 	ifelse
//## 		set local FONTVARNAME = `'
//## 	end if
