package wr;

import com.discord.chat.presentation.message.k;
import com.facebook.react.runtime.r;
import java.util.concurrent.atomic.AtomicReferenceFieldUpdater;
import kotlin.Unit;
import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function3;
import kotlinx.coroutines.CancellableContinuation;
import nr.j;
import nr.v1;
import sr.u;

/* loaded from: classes3.dex */
public final class a implements CancellableContinuation, v1 {

    /* renamed from: d, reason: collision with root package name */
    public final j f20042d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b f20043e;

    public a(b bVar, j jVar) {
        this.f20043e = bVar;
        this.f20042d = jVar;
    }

    @Override // nr.v1
    public final void a(u uVar, int i5) {
        this.f20042d.a(uVar, i5);
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final boolean c() {
        return this.f20042d.c();
    }

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return this.f20042d.f15628w;
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final a5.h h(Object obj, Function3 function3) {
        b bVar = this.f20043e;
        k kVar = new k(bVar, this);
        a5.h E = this.f20042d.E((Unit) obj, kVar);
        if (E != null) {
            b.f20044g.set(bVar, null);
        }
        return E;
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final void j(Object obj, Function3 function3) {
        AtomicReferenceFieldUpdater atomicReferenceFieldUpdater = b.f20044g;
        b bVar = this.f20043e;
        atomicReferenceFieldUpdater.set(bVar, null);
        r rVar = new r(bVar, this);
        j jVar = this.f20042d;
        jVar.B((Unit) obj, jVar.f15613i, new k(2, rVar));
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final boolean m(Throwable th2) {
        return this.f20042d.m(th2);
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        this.f20042d.resumeWith(obj);
    }

    @Override // kotlinx.coroutines.CancellableContinuation
    public final void s(Object obj) {
        this.f20042d.s(obj);
    }
}
