//## begin pattern interface
//## #ifndef _`NAME'_H_
//## #define _`NAME'_H_
//## end pattern interface

//## begin pattern cxxclass
//## #include <rw/Xrw/`BASEINCLUDE'>
//## end pattern cxxclass

//## begin pattern interface
//## class NAME 
//## end pattern interface

//## begin pattern cxxclass
//## : public BASECLASS 
//## end pattern cxxclass

//## begin pattern interface
//## {
//## public:
//## 
//##   // constructors
//## 
//##   NAME(int argc, char ** argv, XtAppContext * app_context = 0);
//##   NAME(const RWCString &application_class, int argc, char ** argv, XtAppContext * app_context = 0);
//##   NAME(const RWCString &application_name, const RWCString &application_class, int argc, char **argv, XtAppContext * app_context = 0);
//##   NAME(const RWCString &application_name, const RWCString &application_class, Display *display, ArgList args, int argcnt);
//##   NAME(const RWCString &application_name, int argc, char **argv, XtAppContext *app_context, XrmOptionDescList options, int num_options = 0, String * fallbacks = 0);
//## end pattern interface

  // public member functions

//## begin pattern active_value SCOPE = AV_PUBLIC STORAGE = AV_NONE
//##   virtual CRETTYPE NAME($$CARGTYPES ARGNAMES$, $);
//## end pattern active_value

  // access functions to  data members

//## begin pattern active_value STORAGE = AV_OBJECT GENFUN = 1
//##   void	set`UCNAME'(CTYPE);
//##   CTYPE 	get`UCNAME'(CTYPE* val = 0);
//## end pattern active_value

  // public data members

//## begin pattern active_value SCOPE = AV_PUBLIC STORAGE = AV_OBJECT IMMEDIATE = 0 
//##   CTYPE	NAME;
//## end pattern active_value	

protected:

  // protected member functions

//## begin pattern active_value SCOPE = AV_PROTECTED STORAGE = AV_NONE 
//##   virtual CRETTYPE	NAME($$CARGTYPES ARGNAMES$, $);
//## end pattern active_value

  // protected data members

//## begin pattern active_value SCOPE = AV_PROTECTED STORAGE = AV_OBJECT IMMEDIATE = 0 
//##   CTYPE	NAME;
//## end pattern active_value

private:

  void initialize(const RWCString& name);

  // private member functions

//## begin pattern active_value SCOPE = AV_PRIVATE STORAGE = AV_NONE
//##   virtual CRETTYPE NAME($$CARGTYPES ARGNAMES$, $);
//## end pattern active_value

  // private data members

//## begin pattern active_value SCOPE = AV_PRIVATE STORAGE = AV_OBJECT IMMEDIATE = 0 
//##   CTYPE NAME;
//## end pattern active_value

};
#endif

