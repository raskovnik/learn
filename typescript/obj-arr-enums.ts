const person: {
    name : string;
    age: number;
    hobbies: string[];
    role: [number, string];
} = {
    name: "foo", 
    age: 20,
    hobbies: ["sports", "Cooking"],
    role: [2, "Author"]
};

enum Role {ADMIN, READ_ONLY, AUTHOR};

const personclone = {
    name: "foo",
    age: 30,
    hobbies: ["sports", "cooking"],
    role: Role.ADMIN
}
console.log(person.name);

for (const hobby of person.hobbies) {
    console.log(hobby);
}

if (personclone.role == Role.ADMIN){
        console.log("The role is admin");
    }
