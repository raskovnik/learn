//defining an enumeration
enum IpAddrKind {
    v4,
    v6,
}

struct IpAddr {
    kind: IpAddrKind,
    address: String,
}
//creating an instance of the enum
let four = IpAddrKind::v4;
let six = IpAddrKind::v6;

fn main() {
    let home = IpAddr {
        kind:: IpAddrKind::v4,
        address: String::from("127.0.0.1"),
    };

    let loopback = IpAddr {
        kind: IpAddrKind::v6,
        address: String::from("::1"),
    };
}

//using enums only
enum IpAddr1 {
    v4(String),
    v6(String),
}

fn enums_ {
    let home = IpAddr1::v4(String::from("127.0.0.1"));

    let loopback = IpAddr1::v6(String::from("::1"));
}

//variants in an enum can have different types and amounts of associated data

enum IpAddr2 {
    v4(u8. u8, u8, u8),
    v6(String),

}

fn enums__ {
    let home = IpAddr2::v4(String::from(127,0,0,1));

    let loopback = IpAddr2::v6(String::from("::1"));

}