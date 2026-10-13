package qr;

import kotlin.coroutines.Continuation;

/* loaded from: classes3.dex */
public final class n extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public o f17011d;

    /* renamed from: e, reason: collision with root package name */
    public Object f17012e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f17013i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ o f17014v;

    /* renamed from: w, reason: collision with root package name */
    public int f17015w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n(o oVar, Continuation continuation) {
        super(continuation);
        this.f17014v = oVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f17013i = obj;
        this.f17015w |= Integer.MIN_VALUE;
        return this.f17014v.emit(null, this);
    }
}
