/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */

/**
 * @param {number} time
 * @returns {string} the status of the lasagna
 */
export const cookingStatus = (time) => {
  if (time === undefined) {
    return "You forgot to set the timer.";
  } else if (time === 0) {
    return "Lasagna is done.";
  } else {
    return "Not done, please wait.";
  }
};

/**
 * @param {string[]} layers
 * @param {number} timePerLayer
 * @returns {number} the total time to prepare the lasagna
 */
export const preparationTime = (layers, timePerLayer = 2) => {
  return layers.length * timePerLayer;
};

const NOODLES_PER_LAYER_IN_GRAMS = 50;
const SAUCE_PER_SAUCELAYER_IN_LITER = 0.2;

/**
 * @param {string[]} layers
 * @returns {Object}
 */
export const quantities = (layers) => {
  const saucesLayers = layers.filter((layer) => layer === "sauce").length;
  const noodlesLayers = layers.filter((layer) => layer === "noodles").length;

  return {
    noodles: noodlesLayers * NOODLES_PER_LAYER_IN_GRAMS,
    sauce: saucesLayers * SAUCE_PER_SAUCELAYER_IN_LITER,
  };
};

/**
 * @param {string[]} friendsList
 * @param {string[]} myList
 * @returns {void}
 */
export const addSecretIngredient = (friendsList, myList) => {
  myList.push(friendsList[friendsList.length - 1]);
};

/**
 * @param {object} recipe
 * @param {number} quantity
 * @returns {object}
 */
export const scaleRecipe = (recipe, quantity) => {
  return Object.fromEntries(
    Object.entries(recipe).map(([key, value]) => [key, value * (quantity / 2)]),
  );
};
