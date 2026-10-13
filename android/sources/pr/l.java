package pr;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends m {
    public final Throwable a;

    public l(Throwable th2) {
        this.a = th2;
    }

    public final boolean equals(Object obj) {
        if (obj instanceof l) {
            return Intrinsics.areEqual(this.a, ((l) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        Throwable th2 = this.a;
        if (th2 != null) {
            return th2.hashCode();
        }
        return 0;
    }

    @Override // pr.m
    public final String toString() {
        return "Closed(" + this.a + ')';
    }
}
