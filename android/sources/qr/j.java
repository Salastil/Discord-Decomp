package qr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class j extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f16995d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ com.margelo.nitro.rive.c f16996e;

    /* renamed from: i, reason: collision with root package name */
    public int f16997i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(com.margelo.nitro.rive.c cVar, Continuation continuation) {
        super(continuation);
        this.f16996e = cVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16995d = obj;
        this.f16997i |= Integer.MIN_VALUE;
        return this.f16996e.emit(null, this);
    }
}
