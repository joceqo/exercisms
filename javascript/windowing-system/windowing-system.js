// @ts-check

/**
 * Implement the classes etc. that are needed to solve the
 * exercise in this file. Do not forget to export the entities
 * you defined so they are available for the tests.
 */

export class Size {
  constructor(width, height) {
    this.width = width || 80;
    this.height = height || 60;
  }

  resize(width, height) {
    this.width = width;
    this.height = height;
  }
}

export class Position {
  constructor(x, y) {
    this.x = x || 0;
    this.y = y || 0;
  }

  move(x, y) {
    this.x = x;
    this.y = y;
  }
}

export class ProgramWindow {
  constructor() {
    this.screenSize = new Size(800, 600);
    this.size = new Size();
    this.position = new Position();
  }

  resize(newSize) {
    if (newSize.width <= 1 || newSize.height <= 1) {
      this.size = new Size(1, 1);
    } else {
      const newWidth =
        newSize.width > this.screenSize.width - this.position.x
          ? this.screenSize.width - this.position.x
          : newSize.width;
      const newHeight =
        newSize.height > this.screenSize.height - this.position.y
          ? this.screenSize.height - this.position.y
          : newSize.height;
      this.size = new Size(newWidth, newHeight);
    }
  }

  move(newPosition) {
    if (newPosition.x <= 0 || newPosition.y <= 0) {
      this.position = new Position(0, 0);
    } else {
      const newX =
        newPosition.x + this.size.width > this.screenSize.width
          ? this.screenSize.width - this.size.width
          : newPosition.x;
      const newY =
        newPosition.y + this.size.height > this.screenSize.height
          ? this.screenSize.height - this.size.height
          : newPosition.y;
      this.position = new Position(newX, newY);
    }
  }
}

export function changeWindow(window) {
  window.resize(new Size(400, 300));
  window.move(new Position(100, 150));
  return window;
}
