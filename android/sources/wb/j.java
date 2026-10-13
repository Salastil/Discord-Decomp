package wb;

import java.io.Closeable;
import javax.inject.Provider;
import rd.u;

/* loaded from: classes3.dex */
public final class j implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public Provider f19706d;

    /* renamed from: e, reason: collision with root package name */
    public u f19707e;

    /* renamed from: i, reason: collision with root package name */
    public Provider f19708i;

    /* renamed from: v, reason: collision with root package name */
    public ve.i f19709v;

    /* renamed from: w, reason: collision with root package name */
    public Provider f19710w;

    /* renamed from: x, reason: collision with root package name */
    public Provider f19711x;

    /* renamed from: y, reason: collision with root package name */
    public Provider f19712y;

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        ((dc.h) ((dc.d) this.f19711x.get())).close();
    }
}
