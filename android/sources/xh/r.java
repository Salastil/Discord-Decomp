package xh;

/* loaded from: classes3.dex */
public final class r {
    public final long a;

    public r(long j) {
        this.a = j;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        return (obj instanceof r) && this.a == ((r) obj).a;
    }

    public final int hashCode() {
        long j = this.a;
        return (((int) ((j >>> 32) ^ j)) ^ 1000003) * (-721379959);
    }

    public final String toString() {
        return a3.e.m(new StringBuilder("PrepareIntegrityTokenRequest{cloudProjectNumber="), this.a, ", webViewRequestMode=0, sessionId=null}");
    }
}
