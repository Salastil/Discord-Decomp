package qr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class a extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public rr.v f16944d;

    /* renamed from: e, reason: collision with root package name */
    public /* synthetic */ Object f16945e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ a4.h f16946i;

    /* renamed from: v, reason: collision with root package name */
    public int f16947v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(a4.h hVar, Continuation continuation) {
        super(continuation);
        this.f16946i = hVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f16945e = obj;
        this.f16947v |= Integer.MIN_VALUE;
        return this.f16946i.collect(null, this);
    }
}
