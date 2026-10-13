package wr;

import java.util.concurrent.atomic.AtomicReferenceArray;
import kotlin.coroutines.CoroutineContext;
import sr.u;

/* loaded from: classes3.dex */
public final class h extends u {

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ AtomicReferenceArray f20057w;

    public h(long j, h hVar, int i5) {
        super(j, hVar, i5);
        this.f20057w = new AtomicReferenceArray(g.f20056f);
    }

    @Override // sr.u
    public final int g() {
        return g.f20056f;
    }

    @Override // sr.u
    public final void h(int i5, CoroutineContext coroutineContext) {
        this.f20057w.set(i5, g.f20055e);
        i();
    }

    public final String toString() {
        return "SemaphoreSegment[id=" + this.f18127i + ", hashCode=" + hashCode() + ']';
    }
}
