package n1;

import java.util.Iterator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class p {
    public final List a;

    public p(List credentialOptions) {
        Intrinsics.checkNotNullParameter(credentialOptions, "credentialOptions");
        this.a = credentialOptions;
        if (credentialOptions.isEmpty()) {
            throw new IllegalArgumentException("credentialOptions should not be empty");
        }
        if (credentialOptions.size() > 1) {
            int i5 = 0;
            if (!credentialOptions.isEmpty()) {
                Iterator it = credentialOptions.iterator();
                while (it.hasNext()) {
                    if ((((i) it.next()) instanceof r) && (i5 = i5 + 1) < 0) {
                        throw new ArithmeticException("Count overflow has happened.");
                    }
                }
            }
            if (i5 > 0 && i5 != this.a.size()) {
                throw new IllegalArgumentException("Digital Credential Option cannot be used with other credential option.");
            }
            for (i iVar : this.a) {
            }
        }
    }
}
