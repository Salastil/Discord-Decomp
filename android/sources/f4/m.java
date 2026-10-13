package f4;

import java.util.Set;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final w3.e f8351d;

    /* renamed from: e, reason: collision with root package name */
    public final w3.j f8352e;

    /* renamed from: i, reason: collision with root package name */
    public final boolean f8353i;

    /* renamed from: v, reason: collision with root package name */
    public final int f8354v;

    public m(w3.e processor, w3.j token, boolean z5, int i5) {
        Intrinsics.checkNotNullParameter(processor, "processor");
        Intrinsics.checkNotNullParameter(token, "token");
        this.f8351d = processor;
        this.f8352e = token;
        this.f8353i = z5;
        this.f8354v = i5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        boolean d6;
        w3.r b10;
        if (this.f8353i) {
            w3.e eVar = this.f8351d;
            w3.j jVar = this.f8352e;
            int i5 = this.f8354v;
            eVar.getClass();
            String str = jVar.a.a;
            synchronized (eVar.k) {
                b10 = eVar.b(str);
            }
            d6 = w3.e.d(str, b10, i5);
        } else {
            w3.e eVar2 = this.f8351d;
            w3.j jVar2 = this.f8352e;
            int i6 = this.f8354v;
            eVar2.getClass();
            String str2 = jVar2.a.a;
            synchronized (eVar2.k) {
                try {
                    if (eVar2.f19640f.get(str2) != null) {
                        v3.p.d().a(w3.e.f19635l, "Ignored stopWork. WorkerWrapper " + str2 + " is in foreground");
                    } else {
                        Set set = (Set) eVar2.f19642h.get(str2);
                        if (set != null && set.contains(jVar2)) {
                            d6 = w3.e.d(str2, eVar2.b(str2), i6);
                        }
                    }
                    d6 = false;
                } finally {
                }
            }
        }
        v3.p.d().a(v3.p.f("StopWorkRunnable"), "StopWorkRunnable for " + this.f8352e.a.a + "; Processor.stopWork = " + d6);
    }
}
