/* $Id: Xnsl.h 237 2006-05-25 09:35:45Z jerome $ */

#if defined(__STDC__) || defined(__cplusplus)
# define _P(s) s
#else
# define _P(s) ()
#endif

extern void TextListScroll();
extern void VerticalScroll();
extern void HorizontalScroll();
extern void WixClearBuffer();
extern char *WixCopyBuffer();

extern void WixInsert _P((WixWidget, char *));

extern void WixRedraw();

extern int TextListWhere();

#undef _P
