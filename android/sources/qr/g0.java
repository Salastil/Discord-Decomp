package qr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class g0 extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f16982d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h0 f16983e;

    /* renamed from: i, reason: collision with root package name */
    public int f16984i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g0(h0 h0Var, Continuation continuation) {
        super(continuation);
        this.f16983e = h0Var;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16982d = obj;
        this.f16984i |= Integer.MIN_VALUE;
        this.f16983e.collect(null, this);
        return ko.a.f13464d;
    }
}
