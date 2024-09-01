func dailyRateFrom(hourlyRate: Int) -> Double {
    return Double(hourlyRate * 8)
}

func monthlyRateFrom(hourlyRate: Int, withDiscount discount: Double) -> Double {
    let dailyRate = dailyRateFrom(hourlyRate: hourlyRate)
    let monthlyRate = dailyRate * 22
    return (monthlyRate * (1 - discount / 100)).rounded()
}

func workdaysIn(budget: Double, hourlyRate: Int, withDiscount discount: Double) -> Double {
    let monthlyRate = monthlyRateFrom(hourlyRate: hourlyRate, withDiscount: discount)
    let workdays = budget / monthlyRate * 22
    return workdays.rounded(.down)
}