male(jack).
male(oliver).
# male(all).
male(james).
male(shaw).
male(harry).
female(hellen).
female(sophie).
female(lily).
female(jess).
parent(jack, jess).
parent(jack, lily).
parent(jack, james).
parent(hellen, jess).
parent(hellen, lily).
parent(oliver, james).
# parent(sophie, james).
parent(jess, simon).
# parent(all, simon).
parent(lily, harry).
parent(jess, harry).

father_of(X, Y) :- male(X), parent(X, Y).
mother_of(X, Y) :- female(X), parent(X, Y).
g_father(X, Y) :- male(X), parent(X, Z), parent(Z, Y).
g_mother(X, Y) :- female(X), parent(X, Z), parent(Z, Y).

sister_of(X, Y) :- female(X), parent(Z, X), parent(Z, Y), male(Y); female(X), female(Y), X\==Y, parent(Z, X), parent(Z, Y).
brother_of(X, Y) :- male(X), parent(Z, X), parent(Z, Y), male(Y), X\==Y; male(X), female(Y), parent(Z, X), parent(Z, Y).
