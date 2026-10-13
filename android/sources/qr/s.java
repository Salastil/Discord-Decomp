package qr;

import kotlin.coroutines.Continuation;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class s extends lo.c {

    /* renamed from: d, reason: collision with root package name */
    public /* synthetic */ Object f17027d;

    /* renamed from: e, reason: collision with root package name */
    public int f17028e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ a4.j f17029i;

    /* renamed from: v, reason: collision with root package name */
    public Object f17030v;

    /* renamed from: w, reason: collision with root package name */
    public FlowCollector f17031w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public s(a4.j jVar, Continuation continuation) {
        super(continuation);
        this.f17029i = jVar;
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        this.f17027d = obj;
        this.f17028e |= Integer.MIN_VALUE;
        return this.f17029i.emit(null, this);
    }
}
