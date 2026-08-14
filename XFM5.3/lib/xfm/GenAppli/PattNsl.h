//## begin pattern interface
//## #ifndef _`NAME'_H_
//## #define _`NAME'_H_
//## end pattern interface

//## begin pattern cxxclass
//## #include <BASEINCLUDE>
//## end pattern cxxclass

//## begin pattern interface
//## class NAME 
//## end pattern interface
//## begin pattern cxxclass
//##   : public BASECLASS  
//## end pattern cxxclass
//## begin pattern interface
//## {
//## public:
//## 
//##   // Constructors and destructor
//##   NAME (String name, Widget parent, Arg *args = 0, Cardinal num_args = 0, Boolean managed = False);
//##   NAME (String name, NslUIC& parent, Arg *args = 0, Cardinal num_args = 0, Boolean managed = False);
//## 
//##   virtual ~`NAME'();
//## end pattern interface

  // public member functions

//## begin pattern active_value SCOPE = AV_PUBLIC STORAGE = AV_NONE
//##   virtual CRETTYPE	NAME($$CARGTYPES ARGNAMES$, $);
//## end pattern active_value
 
  // access functions to  data members

//## begin pattern active_value STORAGE = AV_OBJECT GENFUN = 1
//##   CTYPE get`UCNAME'();
//##   void set`UCNAME'(CTYPE);
//## end pattern active_value

  // public data members

//## begin pattern active_value SCOPE = AV_PUBLIC STORAGE = AV_OBJECT IMMEDIATE = 0 
//##   CTYPE NAME;
//## end pattern active_value	


protected:

  // protected member functions

//## begin pattern active_value SCOPE = AV_PROTECTED STORAGE = AV_NONE
//##   virtual CRETTYPE	NAME($$CARGTYPES ARGNAMES$, $);
//## end pattern active_value

  // protected data members

//## begin pattern active_value SCOPE = AV_PROTECTED STORAGE = AV_OBJECT IMMEDIATE = 0 
//##   CTYPE NAME;
//## end pattern active_value	

private:

  void initialize(String name, Widget parent, Arg *args, Cardinal num_args, Boolean managed);

  // private member functions

//## begin pattern active_value SCOPE = AV_PRIVATE STORAGE = AV_NONE
//##   virtual CRETTYPE	NAME($$CARGTYPES ARGNAMES$, $);
//## end pattern active_value

  // private data members

//## begin pattern active_value  SCOPE = AV_PRIVATE STORAGE = AV_OBJECT IMMEDIATE = 0 
//##   CTYPE NAME;
//## end pattern active_value

}; // end of class

#endif


