package qr;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class i extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public Ref.ObjectRef f16990d;

    /* renamed from: e, reason: collision with root package name */
    public int f16991e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f16992i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Ref.ObjectRef f16993v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ FlowCollector f16994w;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(Continuation continuation, Ref.ObjectRef objectRef, FlowCollector flowCollector) {
        super(2, continuation);
        this.f16993v = objectRef;
        this.f16994w = flowCollector;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        i iVar = new i(continuation, this.f16993v, this.f16994w);
        iVar.f16992i = obj;
        return iVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((i) create(new pr.n(((pr.n) obj).a), (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Type inference failed for: r7v3, types: [T, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r7v7, types: [T, a5.h] */
    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        Ref.ObjectRef objectRef;
        Ref.ObjectRef objectRef2;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.f16991e;
        if (i5 == 0) {
            ki.b.R(obj);
            ?? r7 = ((pr.n) this.f16992i).a;
            boolean z5 = r7 instanceof pr.m;
            objectRef = this.f16993v;
            if (!z5) {
                objectRef.element = r7;
            }
            if (z5) {
                pr.l lVar = r7 instanceof pr.l ? (pr.l) r7 : null;
                Throwable th2 = lVar != null ? lVar.a : null;
                if (th2 != null) {
                    throw th2;
                }
                Object obj2 = objectRef.element;
                if (obj2 != null) {
                    Object obj3 = obj2 != rr.c.f17577b ? obj2 : null;
                    this.f16992i = r7;
                    this.f16990d = objectRef;
                    this.f16991e = 1;
                    if (this.f16994w.emit(obj3, this) == aVar) {
                        return aVar;
                    }
                    objectRef2 = objectRef;
                }
                objectRef.element = rr.c.f17579d;
            }
            return Unit.a;
        }
        if (i5 != 1) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        objectRef2 = this.f16990d;
        ki.b.R(obj);
        objectRef = objectRef2;
        objectRef.element = rr.c.f17579d;
        return Unit.a;
    }
}
