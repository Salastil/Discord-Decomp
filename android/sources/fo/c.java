package fo;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.CoroutineContext;

/* loaded from: classes3.dex */
public final class c extends b implements Continuation {

    /* renamed from: d, reason: collision with root package name */
    public ds.y f8805d;

    /* renamed from: e, reason: collision with root package name */
    public Unit f8806e;

    /* renamed from: i, reason: collision with root package name */
    public Continuation f8807i;

    /* renamed from: v, reason: collision with root package name */
    public Object f8808v;

    @Override // kotlin.coroutines.Continuation
    public final CoroutineContext getContext() {
        return kotlin.coroutines.g.f13538d;
    }

    @Override // kotlin.coroutines.Continuation
    public final void resumeWith(Object obj) {
        this.f8807i = null;
        this.f8808v = obj;
    }
}
