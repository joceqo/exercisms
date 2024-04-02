/// <reference path="./global.d.ts" />
//
// @ts-check

/**
 * Determine the prize of the pizza given the pizza and optional extras
 *
 * @param {Pizza} pizza name of the pizza to be made
 * @param {Extra[]} extras list of extras
 *
 * @returns {number} the price of the pizza
 */
export function pizzaPrice(pizza, ...extras) {
  const pizzaPrices = {
    Margherita: 7,
    Caprese: 9,
    Formaggio: 10,
  };

  const ExtraSauce = 1;
  const ExtraToppings = 2;

  const sauces = extras.filter((extra) => extra === "ExtraSauce").length;
  const toppings = extras.filter((extra) => extra === "ExtraToppings").length;

  return pizzaPrices[pizza] + sauces * ExtraSauce + toppings * ExtraToppings;
}

/**
 * Calculate the price of the total order, given individual orders
 *
 * @param {PizzaOrder[]} pizzaOrders a list of pizza orders
 * @returns {number} the price of the total order
 */
export function orderPrice(pizzaOrders) {
  return pizzaOrders.reduce((total, pizzaOrder) => {
    return total + pizzaPrice(pizzaOrder.pizza, ...pizzaOrder.extras);
  }, 0);
}
