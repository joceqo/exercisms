class ProductionRemoteControlCar implements RemoteControlCar, Comparable<ProductionRemoteControlCar> {
  int distance;
  int numberOfVictories;

  public void drive() {
    distance += 10;
  }

  public int getDistanceTravelled() {
    return distance;
  }

  public int getNumberOfVictories() {
    return numberOfVictories;
  }

  public void setNumberOfVictories(int numberOfVictories) {
    this.numberOfVictories = numberOfVictories;
  }


  public int compareTo(ProductionRemoteControlCar other) {
      return other.numberOfVictories - this.numberOfVictories;
  }
}
