// @ts-check

/**
 * Calculates the sum of the two input arrays.
 *
 * @param {number[]} array1
 * @param {number[]} array2
 * @returns {number} sum of the two arrays
 */
export function twoSum(array1, array2) {
  // const [reversedArray1, reversedArray2] = [array1, array2].map((x) => {
  //   return x.reverse();
  // });
  // const maxLength = Math.max(array1.length, array2.length);
  // const newArray = [];
  // let remainder = 0;
  // for (let i = 0; i < maxLength; i++) {
  //   const firstNumber = reversedArray1[i] || 0;
  //   const secondNumber = reversedArray2[i] || 0;
  //   let newNumber = firstNumber + secondNumber + remainder;
  //   const howManyTens = Math.floor(newNumber / 10);
  //   remainder = howManyTens;
  //   newNumber = newNumber % 10;
  //   newArray.unshift(newNumber);
  // }

  // return Number(newArray.join(""));
  return Number(array1.join("")) + Number(array2.join(""));
}
/**
 * Checks whether a number is a palindrome.
 *
 * @param {number} value
 * @returns {boolean} whether the number is a palindrome or not
 */
export function luckyNumber(value) {
  const string = value.toString();
  return string === string.split("").reverse().join("");
}

/**
 * Determines the error message that should be shown to the user
 * for the given input value.
 *
 * @param {string|null|undefined} input
 * @returns {string} error message
 */
export function errorMessage(input) {
  if (!input) {
    return "Required field";
  } else if (isNaN(Number(input)) || input === "0") {
    return "Must be a number besides 0";
  } else {
    return "";
  }
}
