#include <Xm/Xm.h>
#include <Xm/XmP.h>

#if XmVersion >= 1002
#include <Xm/PrimitiveP.h>
#endif

#include "Wix.h"

typedef struct {
	unsigned char	*addr;
	caddr_t		data;
} mark;

typedef struct {
	XFontStruct	*f_info;	/* structure X */
	char		*f_width;	/* table des largeurs des caracteres */
	int		f_height;	/* hauteur de la fonte */
} XnslFontInfo;

#define DEF_BUFSIZE	1024		/* taille d'un buffer par defaut */
#define DEF_INCR	20480		/* increment par defaut */
#define NUM_MARKS	256		/* nombre de marques initialement */
#define MAX_ACTIONS	256		/* nombre max d'actions */
#define MAX_FUNCTIONS	1024		/* nombre max de fonctions */

#define Bfree(w) (w -> wix.b_cursor_e - w -> wix.b_cursor_b)
#define Width(c,fp) (fp -> f_width [(unsigned)(c)])

#if defined(__STDC__) || defined(__cplusplus)
#define _PROTO(x)	x
#else
#define _PROTO(x)	()
#endif

/*
 *	Definition de la classe Wix.
 */

typedef struct {
	XtActionProc	(*get_action_proc)();
} WixClassPart;

typedef struct _WixClassRec {
	CoreClassPart		core_class;
	XmPrimitiveClassPart	primitive_class;
	WixClassPart		wix_class;
} WixClassRec;

extern WixClassRec wixClassRec;

typedef struct _WixPart {
	int		margin;
	XtCallbackList	modify_callback;
	XtCallbackList	verify_modify_callback;
	XtCallbackList	execute;
	XtCallbackList	def_action;
	XtCallbackList	vscroll_pos;
	XtCallbackList	vscroll_size;
	XtCallbackList	hscroll_pos;
	XtCallbackList	hscroll_size;
	XtActionProc	undoFunction;
	WixMsgProc	messageFunction;

	GC		text_GC;
	GC		line_GC;
	Cursor		cursor;
	Cursor		motion_cursor;
	XFontStruct*	fp;
	XnslFontInfo*	font;

	alias*		alias_table;	/* table d'alias du widget */
	Trans*		trans_table;	/* table de translation */
	Trans*		prev_trans;	/* l'etape precedente (pour les prefixes) */

	int		hsb_pos;	/* position de la scrollbar */
	int		hsb_size;	/* taille de la scrollbar */
	int		sb_pos;		/* position de la scrollbar */
	int		sb_size;	/* taille de la scrollbar */
	int		slider_max;	/* SliderMax */

	int		nb_page;	/* taille de scroll horizontal */
	int		num_cols;       /* nombre de colonnes */
	int		num_lines;	/* nombre de lignes */
	int		tab_size;	/* largeur d'un tab en pixels */
	int		tab_equiv;	/* largeur d'un tab en caracteres */
	int		cur_x;		/* X-coord du curseur */
	int		cur_col;	/* colonne du curseur */
	int		cur_y;		/* Y-coord du curseur */

	Boolean		fresh_selection;
	int		prev_y;

	int		refresh_from;	/* a partir d'ou */
	int		refresh_to;	/* et jusqu'a ou reafficher */

	int		need_hpos;	/* faut il recalculer cur_x ? */
	int		hor_scroll;	/* decalage horizontal */
	int		top_scroll;	/* numero de ligne pour le scroll */
	int		bot_scroll;	/* numero de ligne pour le scroll */
	int		lineno;		/* numero de la ligne courante */
	int		nolines;	/* nombre de lignes du buffer */
	int		prev_firstline;	/* numero de la ligne courante */
	int		prev_nolines;	/* nombre de lignes du buffer */

	unsigned char	*b_cursor_b;	/* curseur dans le buffer */
	unsigned char	*b_cursor_e;	/* curseur dans le buffer */
	unsigned char	*beginning;	/* debut du buffer */
	unsigned char	*end;		/* fin du buffer */
	mark		*b_marks;	/* les marques */
	int		num_marks;	/* leur nombre */

	char		crypt_key [16];	/* la clef d'encryptage */

	int		was_modified;
	int		is_modified;
	int		hscroll;
	Boolean		read_only;
	Boolean		no_cursor;
	Boolean		block_cursor;
	int		focus_in;
	Boolean		wrap;
	Boolean		macro_learn;	/* en phase d'apprentissage de macro */
	Boolean		bin_mode;	/* edition binaire */
	Boolean		mono;		/* edition monoligne */
	String		value;
} WixPart;

typedef struct _WixRec {
	CorePart	core;
	XmPrimitivePart	primitive;
	WixPart		wix;
} WixRec;

extern Display*	dpy;
extern Window	root;
extern Screen*	screen;

#define	C	w -> core
#define	P	w -> primitive
#define	W	w -> wix

extern void	KInsertChar _PROTO((WixWidget,unsigned char));
extern void	KInsertString _PROTO((WixWidget,unsigned char *,int));
extern int	KDeleteChar _PROTO((WixWidget,int,int));
extern int	KForwardChar _PROTO((WixWidget,int));
extern int	KBackwardChar _PROTO((WixWidget,int));
extern void	ToHpos _PROTO((WixWidget));

#undef	_PROTO
