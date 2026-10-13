package oa;

/* loaded from: classes3.dex */
public abstract class f extends a {
    public final void finalize() {
        if (isClosed()) {
            return;
        }
        p8.a.x("CloseableImage", "finalize: %s %x still open.", getClass().getSimpleName(), Integer.valueOf(System.identityHashCode(this)));
        try {
            close();
        } finally {
            super.finalize();
        }
    }
}
