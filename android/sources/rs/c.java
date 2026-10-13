package rs;

import et.i;
import kotlin.Unit;

/* loaded from: classes3.dex */
public final class c extends i {

    /* renamed from: d, reason: collision with root package name */
    public boolean f17634d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ g f17635e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ d f17636i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(et.c cVar, g gVar, d dVar) {
        super(cVar);
        this.f17635e = gVar;
        this.f17636i = dVar;
    }

    @Override // et.i, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        super.close();
        if (this.f17634d) {
            return;
        }
        this.f17634d = true;
        g gVar = this.f17635e;
        d dVar = this.f17636i;
        synchronized (gVar) {
            try {
                int i5 = dVar.f17643h - 1;
                dVar.f17643h = i5;
                if (i5 == 0 && dVar.f17641f) {
                    gVar.C(dVar);
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
