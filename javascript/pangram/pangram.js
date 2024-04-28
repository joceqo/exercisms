export const isPangram = (sentence) => {
  const alphabet = [...'abcdefghijklmnopqrstuvwxyz']
  return alphabet.every(letter => sentence.toLowerCase().includes(letter))
};

// export function isPangram(input) {
//   return new Set(input.toLowerCase().match(/[a-z]/g)).size === 26;
// }