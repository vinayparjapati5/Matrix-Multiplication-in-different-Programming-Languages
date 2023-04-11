N = 10; % matrix size
M = 50000; % number of matrices to multiply

% Initialize matrices A and B with random values
A = rand(N);
B = rand(N);

% Multiply matrices B and A M times and time the operation
tic
for i = 1:M
    C = B * A;
    B = C;
end
elapsed_time = toc;

% Print the execution time
fprintf('Matrix multiplication of %d matrices of size %dx%d took %.2f seconds\n', M, N, N, elapsed_time);
