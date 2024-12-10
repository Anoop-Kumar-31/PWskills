function validatePasswords(password, confirmPassword) {
  if (password === confirmPassword) {
    console.log("Password Matched. Password validation Successful.");
  } else {
    console.log("Password didn't match. Password validation unsuccessful");
  }
}
const password = prompt("Enter your password:");
const confirmPassword = prompt("Confirm your password:");
validatePasswords(password, confirmPassword);

// function validatePasswords(password, confirmPassword){
//     if (password === confirmPassword)
//       console.log("Password Matched. Password validation Successful.");
//     else
//       console.log("Password didn't match. Password validation unsuccessful");
// }
// const readline = require('readline').createInterface({
//     input: process.stdin,
//     output: process.stdout,
// });

// readline.question(`Enter your password: `, password => {
//     readline.question(`Confirm your password: `, confirmPassword => {
//         validatePasswords(password, confirmPassword);
//         readline.close();
//     });
// });