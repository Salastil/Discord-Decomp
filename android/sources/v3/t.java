package v3;

/* loaded from: classes.dex */
public final class t extends zk.a {
    public final Throwable j;

    public t(Throwable th2) {
        this.j = th2;
    }

    public final String toString() {
        return "FAILURE (" + this.j.getMessage() + ")";
    }
}
