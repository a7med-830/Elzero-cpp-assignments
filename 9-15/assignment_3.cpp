/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Not Valid ]             => Reason : starts with a number
  __name      [ Valid | Good Practice ]
  name@name   [ Not Valid ]             => Reason : Has a special characther
  name10name  [ Valid | Bad Practice ]
  name!name   [ Not Valid ]             => Reason : Has a special characther
  first_NAME  [ Valid | Bad Practice ]
  first_name  [ Valid | Good Practice ]
  firstName   [ Valid | Good Practice ]
  first name  [ Not Valid ]             => Reason : Has a white space
  fn          [ Valid | Bad Practice ]  => Reason : not understandable
  public      [ Not Valid ]             => Reason : Key word
  Public      [ Valid | Bad Practice ]
*/
