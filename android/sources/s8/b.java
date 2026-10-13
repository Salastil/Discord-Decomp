package s8;

import com.facebook.common.references.CloseableReference;
import o8.h;

/* loaded from: classes3.dex */
public final class b extends CloseableReference {
    @Override // com.facebook.common.references.CloseableReference
    /* renamed from: c */
    public final CloseableReference clone() {
        h.e(r());
        return new b(this.f4409e, this.f4410i, this.f4411v != null ? new Throwable() : null);
    }

    public final void finalize() {
        try {
            synchronized (this) {
                if (this.f4408d) {
                    super.finalize();
                    return;
                }
                Object a = this.f4409e.a();
                p8.a.x("DefaultCloseableReference", "Finalized without closing: %x %x (type = %s)", Integer.valueOf(System.identityHashCode(this)), Integer.valueOf(System.identityHashCode(this.f4409e)), a == null ? null : a.getClass().getName());
                a aVar = this.f4410i;
                if (aVar != null) {
                    aVar.o(this.f4409e, this.f4411v);
                }
                close();
                super.finalize();
            }
        } catch (Throwable th2) {
            super.finalize();
            throw th2;
        }
    }
}
