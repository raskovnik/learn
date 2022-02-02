function [X_norm, mu, sigma] = featureNormalize(X)
X_norm = X;
mu = zeros(1, size(X, 2));
sigma = zeros(1, size(X, 2));

for i = 1:length(mu)
    mu(i) = mean(X(:, i));
    sigma(i) = std(X(:, i));
end

for j = 1:size((X_norm), 1)
    for i = 1: size((X_norm), 2)
    X_norm(j,i) = (X(j, i) - mu(1,i) )/ sigma(1,i);
    end
end
