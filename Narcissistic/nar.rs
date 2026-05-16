use std::io;

fn is_narcissistic(mut temp: i32) -> bool {
    let origin = temp;
    let num_digit = origin.to_string().len() as i32;
    let mut sum = 0;

    while temp > 0 {
        let digit = temp % 10;
        sum += digit.pow(num_digit as u32);
        temp /= 10;
    }
    sum == origin
}

fn find_nums(min: i32, max: i32) -> Vec<i32> {
    (min..=max).filter(|&num| is_narcissistic(num)).collect()
}

fn main() {
    let mut input = String::new();
    
    io::stdin().read_line(&mut input).expect("Failed to read input");
    let start: i32 = input.trim().parse().expect("Please enter a valid number");
    
    input.clear();
    io::stdin().read_line(&mut input).expect("Failed to read input");
    let end: i32 = input.trim().parse().expect("Please enter a valid number");
    
    let result = find_nums(start, end);
    for num in result {
        println!("{}", num);
    }
}