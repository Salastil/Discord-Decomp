package qr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class d extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f16963d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e f16964e;

    /* renamed from: i, reason: collision with root package name */
    public int f16965i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(e eVar, Continuation continuation) {
        super(continuation);
        this.f16964e = eVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16963d = obj;
        this.f16965i |= Integer.MIN_VALUE;
        return this.f16964e.emit(null, this);
    }
}
