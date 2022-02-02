function [theta, J_history] = gradientDescent(X, y, theta, alpha, num_iters)
    m = length(y); % number of training examples
    J_history = zeros(num_iters, 1);

    for iter = 1:num_iters
        diff = (X * theta) - y;
        theta(1) -= sum(1 / m * diff * alpha);
        theta(2) -= sum(1 / m * alpha * diff.*X(:,2));
        J_history(iter) = computeCost(X, y, theta);

    end

end
