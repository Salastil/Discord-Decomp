package pr;

import java.util.concurrent.CancellationException;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;
import kotlinx.coroutines.channels.Channel;
import kotlinx.coroutines.channels.ProducerScope;
import nr.c1;
import nr.e1;
import nr.w0;
import nr.x;

/* loaded from: classes3.dex */
public final class s extends nr.a implements ProducerScope, Channel {

    /* renamed from: v, reason: collision with root package name */
    public final h f16514v;

    public s(CoroutineContext coroutineContext, h hVar) {
        super(coroutineContext, true);
        this.f16514v = hVar;
    }

    @Override // pr.u
    public final Object a(lo.c cVar) {
        h hVar = this.f16514v;
        hVar.getClass();
        Object E = h.E(hVar, cVar);
        ko.a aVar = ko.a.f13464d;
        return E;
    }

    @Override // pr.u
    public final com.google.firebase.messaging.r b() {
        return this.f16514v.b();
    }

    @Override // pr.v
    public final void e(com.margelo.nitro.playagerangedeclaration.c cVar) {
        this.f16514v.e(cVar);
    }

    @Override // nr.e1, kotlinx.coroutines.Job
    public final void f(CancellationException cancellationException) {
        Object obj = e1.f15614d.get(this);
        if (obj instanceof nr.q) {
            return;
        }
        if ((obj instanceof c1) && ((c1) obj).e()) {
            return;
        }
        if (cancellationException == null) {
            cancellationException = new w0(D(), null, this);
        }
        z(cancellationException);
    }

    @Override // pr.u
    public final Object g() {
        return this.f16514v.g();
    }

    @Override // pr.v
    public final boolean k(Throwable th2) {
        return this.f16514v.l(th2, false);
    }

    @Override // nr.a
    public final void l0(Throwable th2, boolean z5) {
        if (this.f16514v.l(th2, false) || z5) {
            return;
        }
        x.q(th2, this.f15590i);
    }

    @Override // nr.a
    public final void m0(Object obj) {
        this.f16514v.k(null);
    }

    @Override // pr.v
    public final Object n(Object obj) {
        return this.f16514v.n(obj);
    }

    @Override // pr.v
    public final Object p(Object obj, Continuation continuation) {
        return this.f16514v.p(obj, continuation);
    }

    @Override // pr.v
    public final boolean q() {
        return this.f16514v.q();
    }

    @Override // nr.e1
    public final void z(CancellationException cancellationException) {
        this.f16514v.l(cancellationException, true);
        y(cancellationException);
    }

    @Override // kotlinx.coroutines.channels.ProducerScope
    public final s d() {
        return this;
    }
}
