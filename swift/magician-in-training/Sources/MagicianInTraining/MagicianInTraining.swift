func checkIndex(at index: Int, from stack: [Int]) -> Bool {
    return index >= 0 && index < stack.count
}

func getCard(at index: Int, from stack: [Int]) -> Int {
    return stack[index]
}

func setCard(at index: Int, in stack: [Int], to newCard: Int) -> [Int] {
    if !checkIndex(at: index, from: stack) {
        return stack
    }
    var newStack = stack
    newStack[index] = newCard
    return newStack
}

func insert(_ newCard: Int, atTopOf stack: [Int]) -> [Int] {
    var newStack = stack
    newStack.insert(newCard, at: stack.count)
    return newStack
}

func removeCard(at index: Int, from stack: [Int]) -> [Int] {
    if !checkIndex(at: index, from: stack) {
        return stack
    }
    var newStack = stack
    newStack.remove(at: index)
    return newStack
}

func removeTopCard(_ stack: [Int]) -> [Int] {
    if !checkIndex(at: stack.count - 1, from: stack) {
        return stack
    }
    var newStack = stack
    newStack.remove(at: stack.count - 1)
    return newStack
}

func insert(_ newCard: Int, atBottomOf stack: [Int]) -> [Int] {
    var newStack = stack
    newStack.insert(newCard, at: 0)
    return newStack
}

func removeBottomCard(_ stack: [Int]) -> [Int] {
    var newStack = stack
    newStack.remove(at: 0)
    return newStack
}

func checkSizeOfStack(_ stack: [Int], _ size: Int) -> Bool {
    return stack.count == size
}

func evenCardCount(_ stack: [Int]) -> Int {
    return stack.filter { $0 % 2 == 0 }.count
}
