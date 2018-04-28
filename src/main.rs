extern {
    fn get() -> u32;
}

fn main() {
    println!("N = {}", unsafe { get() });
}
