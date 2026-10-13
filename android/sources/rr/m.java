package rr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class m extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f17599d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ n f17600e;

    /* renamed from: i, reason: collision with root package name */
    public int f17601i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(n nVar, Continuation continuation) {
        super(continuation);
        this.f17600e = nVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f17599d = obj;
        this.f17601i |= Integer.MIN_VALUE;
        return this.f17600e.emit(null, this);
    }
}
