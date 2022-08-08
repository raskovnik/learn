function [J, grad] = costFunctionReg(theta, X, y, lambda)
    m = length(y);
    J = costFunction(theta, X, y) + (lambda / (2 * m)) * sum([0; theta(2:size(theta))].^2);
    grad = zeros(size(theta));
    grad = (1 / m) * (X' *(sigmoid(X * theta) - y)) + (lambda / m)*[0; theta(2:size(theta))];

end
