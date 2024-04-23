//
// This is only a SKELETON file for the 'Resistor Color Duo' exercise. It's been provided as a
// convenience to get you started writing code faster.
//
const COLORS = ['black','brown','red','orange','yellow','green','blue','violet','grey','white'];

export const decodedValue = (duo) => {
	const [color1,color2] = duo
	return parseInt(COLORS.indexOf(color1)+ "" + COLORS.indexOf(color2))
};
