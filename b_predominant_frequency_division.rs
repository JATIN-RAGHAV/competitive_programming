use std::io;

fn solve(){
    let mut n = String::new();
    io::stdin().read_line(&mut n).expect("Can't read");
    let mut n:i32 = n.trim().parse().expect("Cna't parse");
    let mut a = String::new();
    io::stdin().read_line(&mut a).expect("can't read");
    let mut arr = Vec::new();
}   

fn main(){
    let mut str = String::new();
    io::stdin().read_line(&mut str).expect("Can't read");
    let mut t:i32 = str.trim().parse().expect("Can't parse");
    while t > 0{
        solve();
        t-=1;
    }
}

