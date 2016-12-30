/* This test tests that the "enum" in the argument list doesn't cause the
   spurious fontification of "CHECK_NUMBER". */
static Lisp_Object
casify_word (enum case_action flag, Lisp_Object arg)
{
  CHECK_NUMBER (arg);
}
