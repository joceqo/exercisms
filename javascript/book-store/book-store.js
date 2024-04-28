export const cost = (books) => {
  const booksCount = books.reduce((acc, book) => {
    acc[book] = acc[book] ? acc[book] + 1 : 1;
    return acc;
  }, {});

  const keys = [...Object.keys(booksCount)];
  // [1,3,4,5]
}