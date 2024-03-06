// @ts-check
//
// The line above enables type checking for this file. Various IDEs interpret
// the @ts-check directive. It will give you helpful autocompletion when
// implementing this exercise.

/**
 * Determines whether or not you need a license to operate a certain kind of vehicle.
 *
 * @param {string} kind
 * @returns {boolean} whether a license is required
 */
export function needsLicense(kind) {
  return ["truck", "car"].includes(kind);
}

/**
 * Helps choosing between two options by recommending the one that
 * comes first in dictionary order.
 *
 * @param {string} option1
 * @param {string} option2
 * @returns {string} a sentence of advice which option to choose
 */
export function chooseVehicle(option1, option2) {
  const vehicles = [
    "Bugatti Veyron",
    "Ford Pinto",
    "Chery EQ",
    "Kia Niro Elektro",
    "2018 Bergamont City",
    "2020 Gazelle Medeo",
  ];
  const indexes = [option1, option2].map((vehicle) =>
    vehicles.indexOf(vehicle),
  );

  if (indexes[0] < indexes[1]) {
    return option1 + " is clearly the better choice.";
  } else {
    return option2 + " is clearly the better choice.";
  }
}

/**
 * Calculates an estimate for the price of a used vehicle in the dealership
 * based on the original price and the age of the vehicle.
 *
 * @param {number} originalPrice
 * @param {number} age
 * @returns {number} expected resell price in the dealership
 */
export function calculateResellPrice(originalPrice, age) {
  const discounts = {
    3: 0.8,
    10: 0.7,
    Infinity: 0.5,
  };

  for (const [years, discount] of Object.entries(discounts)) {
    if (age < Number(years) || (age === 10 && years === "10")) {
      return originalPrice * discount;
    }
  }
}
