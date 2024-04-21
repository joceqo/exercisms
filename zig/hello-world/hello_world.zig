const std = @import("std");

pub fn hello() []const u8 {
    return "Goodbye, Mars!";
}

pub fn main() void {
    std.debug.print("{s}\n", .{hello()});
}
