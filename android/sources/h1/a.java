package h1;

import a4.j;
import kotlin.coroutines.Continuation;

/* loaded from: classes.dex */
public final class a extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f9469d;

    /* renamed from: e, reason: collision with root package name */
    public int f9470e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ j f9471i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(j jVar, Continuation continuation) {
        super(continuation);
        this.f9471i = jVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f9469d = obj;
        this.f9470e |= Integer.MIN_VALUE;
        return this.f9471i.emit(null, this);
    }
}
