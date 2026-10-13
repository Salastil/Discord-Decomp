package qr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class l extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f17005d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ m f17006e;

    /* renamed from: i, reason: collision with root package name */
    public int f17007i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(m mVar, Continuation continuation) {
        super(continuation);
        this.f17006e = mVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f17005d = obj;
        this.f17007i |= Integer.MIN_VALUE;
        return this.f17006e.emit(null, this);
    }
}
