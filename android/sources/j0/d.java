package j0;

import af.h0;
import android.os.Handler;
import android.view.Choreographer;
import fo.l;
import fo.u;
import java.util.ArrayList;
import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineDispatcher;

/* loaded from: classes.dex */
public final class d extends CoroutineDispatcher {
    public static final u J = l.a(a.E);
    public boolean F;
    public boolean G;
    public final f I;

    /* renamed from: i, reason: collision with root package name */
    public final Choreographer f12362i;

    /* renamed from: v, reason: collision with root package name */
    public final Handler f12363v;

    /* renamed from: w, reason: collision with root package name */
    public final Object f12364w = new Object();

    /* renamed from: x, reason: collision with root package name */
    public final ArrayDeque f12365x = new ArrayDeque();

    /* renamed from: y, reason: collision with root package name */
    public ArrayList f12366y = new ArrayList();
    public ArrayList E = new ArrayList();
    public final c H = new c(this);

    static {
        new h0(3);
    }

    public d(Choreographer choreographer, Handler handler) {
        this.f12362i = choreographer;
        this.f12363v = handler;
        this.I = new f(choreographer, this);
    }

    public static final void p0(d dVar) {
        Runnable runnable;
        boolean z5;
        do {
            synchronized (dVar.f12364w) {
                ArrayDeque arrayDeque = dVar.f12365x;
                runnable = (Runnable) (arrayDeque.isEmpty() ? null : arrayDeque.removeFirst());
            }
            while (runnable != null) {
                runnable.run();
                synchronized (dVar.f12364w) {
                    ArrayDeque arrayDeque2 = dVar.f12365x;
                    runnable = (Runnable) (arrayDeque2.isEmpty() ? null : arrayDeque2.removeFirst());
                }
            }
            synchronized (dVar.f12364w) {
                if (dVar.f12365x.isEmpty()) {
                    z5 = false;
                    dVar.F = false;
                } else {
                    z5 = true;
                }
            }
        } while (z5);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext context, Runnable block) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(block, "block");
        synchronized (this.f12364w) {
            try {
                this.f12365x.addLast(block);
                if (!this.F) {
                    this.F = true;
                    this.f12363v.post(this.H);
                    if (!this.G) {
                        this.G = true;
                        this.f12362i.postFrameCallback(this.H);
                    }
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
