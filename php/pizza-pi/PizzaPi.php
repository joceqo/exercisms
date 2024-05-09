<?php

define('PI', 3.14159265359);


class PizzaPi
{
    public function calculateDoughRequirement($pizzas, $persons)
    {
      return $pizzas * ($persons * 20  + 200);
    }

    public function calculateSauceRequirement($pizzas, $canInMl)
    {
      return $pizzas * 125 / $canInMl;
    }

    public function calculateCheeseCubeCoverage($cheeseCubeDimension, $thickness, $pizzaDiameter)
    {
      return floor(pow($cheeseCubeDimension,3) / ($thickness * PI * $pizzaDiameter));
    }

    public function calculateLeftOverSlices($pizzas, $persons)
    {
      return $pizzas * 8 % $persons;
    }
}
