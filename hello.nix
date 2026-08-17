# author: walrus137
# message: Yoo!!!

let
    # Check if array 'a' can be divided into k parts with max MEX >= m
    ok = a: m: k:
        let
            n = builtins.length a;

            # Process each element, tracking MEX and partition count
            step = acc: elem:
                let
                    present = acc.present;
                    cm = acc.cm;
                    parts = acc.parts;

                    # Update present set if elem < m
                    newPresent =
                        if elem < m
                            then present // { "${toString elem}" = (present."${toString elem}" or 0) + 1; }
                        else present;

                    # Advance cm while present[cm] exists
                    advanceCm = cur:
                        if (newPresent."${toString cur}" or 0) > 0
                            then advanceCm (cur + 1)
                        else cur;

                    newCm = advanceCm cm;

                    # If MEX reached m, count a new partition and reset
                    reachedM = newCm >= m;
                    resetPresent =
                        builtins.foldl'
                        (p: j: p // { "${toString j}" = 0; })
                        newPresent
                        (builtins.genList (x: x) (builtins.min n m + 1));
                in
                    if reachedM
                    then { present = resetPresent; cm = 0; parts = parts + 1; }
                else { present = newPresent; cm = newCm; parts = parts; };

            init = { present = {}; cm = 0; parts = 0; };
            result = builtins.foldl' step init a;
        in
            result.parts >= k;

    # Binary search for max MEX
    solve = n: k: a:
        let
            maxR = (n / k) + 1;

            # Binary search loop: find largest l where ok(a, l, k) is true
            bsearch = l: r:
                if r - l <= 1
                    then l
                else
                    let
                        m = l + (r - l) / 2;
                    in
                        if ok a m k
                        then bsearch m r
                    else bsearch l m;
        in
            bsearch 0 maxR;

    # Example test cases (replaces stdin)
    testCases = [
        { n = 7; k = 3; a = [ 0 1 2 0 1 2 3 ]; }   # expected: 2
        { n = 5; k = 2; a = [ 0 1 0 1 2 ]; }         # expected: 2
        { n = 4; k = 4; a = [ 0 0 0 0 ]; }            # expected: 1
        { n = 6; k = 2; a = [ 0 1 2 3 4 5 ]; }        # expected: 3
    ];

    results = map (tc: solve tc.n tc.k tc.a) testCases;

in
    results
