<?php

Class Position {
  public $y;
  public $x;

  function __construct(int $y, int $x)
  {
    $this->y = $y || 0;
    $this->x = $x || 0;
  }
}
