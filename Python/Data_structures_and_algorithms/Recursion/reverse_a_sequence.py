def reverse(S, start, stop):
    if start < stop - 1:
        S[start], S[stop - 1] = S[stop - 1], s[start]
        reverse(S, start + 1, stop-1)

