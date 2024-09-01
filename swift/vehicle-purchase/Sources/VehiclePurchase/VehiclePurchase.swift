func canIBuy(vehicle: String, price: Double, monthlyBudget: Double) -> String {
let monthlyPrice: Double = price / (5.0 * 12.0)
  if price < 9 * monthlyBudget  {
    return "Yes! I'm getting a \(vehicle)"
  }
  else if  abs(monthlyBudget - monthlyPrice) <= 10.0 {
    return "I'll have to be frugal if I want a \(vehicle)"
  }else{
    
    return "Darn! No \(vehicle) for me"
  }
}

func licenseType(numberOfWheels wheels: Int) -> String {
 if(wheels == 2 || wheels == 3){
  return "You will need a motorcycle license for your vehicle"
 }
 else if(wheels == 4 || wheels == 6){
  return "You will need an automobile license for your vehicle"
 }
 else if(wheels == 18){
  return "You will need a commercial trucking license for your vehicle"
 }
 else{
  return "We do not issue licenses for those types of vehicles"
 }
}

func registrationFee(msrp: Int, yearsOld: Int) -> Int {
  if(yearsOld > 10){
    return 200
  }
  
  let base = msrp > 25_000 ? 25_000 : msrp

  let fee = Int(Double(base) * (1 - 0.1 * Double(yearsOld)))

  return Int(fee / 100)
}


func calculateResellPrice(originalPrice price:Double, yearsOld:Int) -> Double {
  if(yearsOld >= 10){
    return price * 0.5
  }
  else if(yearsOld >= 3){
    return price * 0.7
  }
  else{
    return price * 0.8
  }
}