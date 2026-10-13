package or;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.CancellationException;
import jc.b0;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineDispatcher;
import kotlinx.coroutines.Job;
import nr.a0;
import nr.g0;
import nr.i0;
import nr.i1;
import nr.j;
import nr.t;
import sr.q;

/* loaded from: classes3.dex */
public final class d extends CoroutineDispatcher implements a0 {

    /* renamed from: i, reason: collision with root package name */
    public final Handler f16183i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f16184v;

    /* renamed from: w, reason: collision with root package name */
    public final d f16185w;

    public d(Handler handler, boolean z5) {
        this.f16183i = handler;
        this.f16184v = z5;
        this.f16185w = z5 ? this : new d(handler, true);
    }

    @Override // nr.a0
    public final i0 Q(long j, final Runnable runnable, CoroutineContext coroutineContext) {
        if (j > 4611686018427387903L) {
            j = 4611686018427387903L;
        }
        if (this.f16183i.postDelayed(runnable, j)) {
            return new i0() { // from class: or.c
                @Override // nr.i0
                public final void dispose() {
                    d.this.f16183i.removeCallbacks(runnable);
                }
            };
        }
        p0(coroutineContext, runnable);
        return i1.f15624d;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        return dVar.f16183i == this.f16183i && dVar.f16184v == this.f16184v;
    }

    public final int hashCode() {
        return System.identityHashCode(this.f16183i) ^ (this.f16184v ? 1231 : 1237);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final void l0(CoroutineContext coroutineContext, Runnable runnable) {
        if (this.f16183i.post(runnable)) {
            return;
        }
        p0(coroutineContext, runnable);
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final boolean n0(CoroutineContext coroutineContext) {
        return (this.f16184v && Intrinsics.areEqual(Looper.myLooper(), this.f16183i.getLooper())) ? false : true;
    }

    public final void p0(CoroutineContext coroutineContext, Runnable runnable) {
        CancellationException cancellationException = new CancellationException("The task was rejected, the handler underlying the dispatcher '" + this + "' was closed");
        Job job = (Job) coroutineContext.o(t.f15661e);
        if (job != null) {
            job.f(cancellationException);
        }
        ur.e eVar = g0.a;
        ur.d.f19093i.l0(coroutineContext, runnable);
    }

    @Override // nr.a0
    public final void q(long j, j jVar) {
        b0 b0Var = new b0(12, jVar, this);
        if (j > 4611686018427387903L) {
            j = 4611686018427387903L;
        }
        if (this.f16183i.postDelayed(b0Var, j)) {
            jVar.v(new com.discord.permissions.b(11, this, b0Var));
        } else {
            p0(jVar.f15628w, b0Var);
        }
    }

    @Override // kotlinx.coroutines.CoroutineDispatcher
    public final String toString() {
        d dVar;
        String str;
        ur.e eVar = g0.a;
        d dVar2 = q.a;
        if (this == dVar2) {
            str = "Dispatchers.Main";
        } else {
            try {
                dVar = dVar2.f16185w;
            } catch (UnsupportedOperationException unused) {
                dVar = null;
            }
            str = this == dVar ? "Dispatchers.Main.immediate" : null;
        }
        if (str != null) {
            return str;
        }
        String handler = this.f16183i.toString();
        return this.f16184v ? k0.d.k(handler, ".immediate") : handler;
    }
}
