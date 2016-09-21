// Global Variables
int var  //

void setup(){

}

void loop(){
  switch (var) {

    // CASE 1: WRITE DOWN THE PURPOSE HERE
    case 1:
      {
      //do something when var equals 1
      int a = 0; // initialize a local variable

      // Tell which case to move to next for the next loop execution
      var = 2;   // next time the loop starts, it will go to case 2
      }
      break;

    // CASE 2: WRITE DOWN THE PURPOSE HERE
    case 2:
        {
        //do something when var equals 1
        int a = 0; // initialize a local variable
        }
        break;

    // DEFAULT CASE: WRITE DOWN THE PURPOSE HERE
    default:
      // if nothing else matches, do the default
        break;
  }
}
