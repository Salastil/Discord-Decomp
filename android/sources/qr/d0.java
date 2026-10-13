package qr;

import java.util.concurrent.atomic.AtomicReference;
import kotlin.Result;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d0 extends rr.d {
    public final AtomicReference a = new AtomicReference(null);

    @Override // rr.d
    public final boolean a(rr.b bVar) {
        AtomicReference atomicReference = this.a;
        if (atomicReference.get() != null) {
            return false;
        }
        atomicReference.set(y.f17047b);
        return true;
    }

    @Override // rr.d
    public final Continuation[] b(rr.b bVar) {
        this.a.set(null);
        return rr.c.a;
    }

    public final Object c(b0 frame) {
        nr.j jVar = new nr.j(1, ko.f.b(frame));
        jVar.t();
        a5.h hVar = y.f17047b;
        while (true) {
            AtomicReference atomicReference = this.a;
            if (atomicReference.compareAndSet(hVar, jVar)) {
                break;
            }
            if (atomicReference.get() != hVar) {
                fo.q qVar = Result.f13476e;
                jVar.resumeWith(Unit.a);
                break;
            }
        }
        Object r5 = jVar.r();
        ko.a aVar = ko.a.f13464d;
        if (r5 == aVar) {
            Intrinsics.checkNotNullParameter(frame, "frame");
        }
        return r5 == aVar ? r5 : Unit.a;
    }
}
