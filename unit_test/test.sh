describe "My test"

it_displays_1(){
 usage=$(./calc Divider 50 2)
 test "$usage" = "25"
}
it_displays_2(){
 usage=$(./calc Divider 2 50)
 test "$usage" = "0.04"
}
it_displays_3(){
 usage=$(./calc Divider 50)
 test "$usage" = "50"
}

it_displays_4(){
 usage=$(./calc Divider 2)
 test "$usage" = "2"
}
it_displays_5(){
 usage=$(./calc Divider input 1.txt)
 test "$usage" = "25"
}
it_displays_6(){
 usage=$(./calc Divider input 2.txt)
 test "$usage" = "0.04"
}
it_displays_7(){
 usage=$(./calc Divider input 1.txt 2.txt)
 test "$usage" = "0.25"
}
it_displays_8(){
 usage=$(./calc Divider input 3.txt)
 test "$usage" = "50"
}
it_displays_9(){
 usage=$(./calc Divider input 1.txt 2.txt 3.txt)
 test "$usage" = "0.005"
}
it_displays_10(){
 usage=$(./calc Add 10 2)
 test "$usage" = "Invalid Engine!
Illegal Inputs!"
}
it_displays_11(){
  usage=$(./calc)
  test "$usage" = "Not enough arguments!
Illegal Inputs!"
}
it_displays_12(){
  usage=$(./calc Divider)
  test "$usage" = "Not enough arguments!
Illegal Inputs!"
}
it_displays_13(){
  usage=$(./calc Divider input 10)
  test "$usage" = "Illegal files input!
Illegal Inputs!"
}
it_displays_14(){
  usage=$(./calc Divider input a.txt)
  test "$usage" = "Illegal Inputs!"
}
it_displays_15(){
  usage=$(./calc Divider 10 0)
  test "$usage" = "Inputs contain ZERO dividor!"
}
it_displays_16(){
  usage=$(./calc Divider 10 a)
  test "$usage" = "Illegal integers inputs!
Illegal Inputs!"
}
