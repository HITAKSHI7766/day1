// IIFE Function

(function(){
    let username = "john";

    function welcome(){
        console.log("welcome " + username);

    welcome();
    }
})();

// Arrow function

const calculateTotal = (price, gst) => {
  let total = price + (price * gst) / 100;
  return total;
};

console.log(calculateTotal(1000, 18));

// Inner and Outer function

function studentresult(marks) {
  function checkresult() {
    if (marks >= 35) {
      console.log("pass");
    } else {
      console.log("fail");
    }
  }

  console.log("checking result...");
  checkresult();
}
studentresult(40);


// Clouser Function

function Outer(){
    let count = 0;

    return function inner() {
    count++;
    console.log(count);
   };
}

let myFunc = Outer();

myFunc();
myFunc();
myFunc();

