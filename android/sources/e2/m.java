package e2;

import com.margelo.nitro.rive.f1;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;
import qr.c0;

/* loaded from: classes.dex */
public final class m extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7858d;

    /* renamed from: e, reason: collision with root package name */
    public int f7859e;

    /* renamed from: i, reason: collision with root package name */
    public /* synthetic */ Object f7860i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ z f7861v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ m(z zVar, Continuation continuation, int i5) {
        super(2, continuation);
        this.f7858d = i5;
        this.f7861v = zVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f7858d) {
            case 0:
                m mVar = new m(this.f7861v, continuation, 0);
                mVar.f7860i = obj;
                return mVar;
            default:
                m mVar2 = new m(this.f7861v, continuation, 1);
                mVar2.f7860i = obj;
                return mVar2;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        switch (this.f7858d) {
            case 0:
                return ((m) create((j) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            default:
                return ((m) create((FlowCollector) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:37:? A[RETURN, SYNTHETIC] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Object obj2;
        switch (this.f7858d) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i5 = this.f7859e;
                if (i5 == 0) {
                    ki.b.R(obj);
                    j jVar = (j) this.f7860i;
                    boolean z5 = jVar instanceof h;
                    z zVar = this.f7861v;
                    if (z5) {
                        h hVar = (h) jVar;
                        this.f7859e = 1;
                        a0 a0Var = (a0) zVar.f7926f.getValue();
                        if (!(a0Var instanceof b)) {
                            if (a0Var instanceof f) {
                                if (a0Var == hVar.a) {
                                    obj2 = zVar.e(this);
                                    if (obj2 != aVar) {
                                        obj2 = Unit.a;
                                    }
                                    if (obj2 == aVar) {
                                        return aVar;
                                    }
                                }
                            } else if (Intrinsics.areEqual(a0Var, b0.a)) {
                                obj2 = zVar.e(this);
                                if (obj2 != aVar) {
                                    obj2 = Unit.a;
                                }
                                if (obj2 == aVar) {
                                }
                            } else if (a0Var instanceof e) {
                                throw new IllegalStateException("Can't read in final state.");
                            }
                        }
                        obj2 = Unit.a;
                        if (obj2 == aVar) {
                        }
                    } else if (jVar instanceof i) {
                        this.f7859e = 2;
                        if (z.a(zVar, (i) jVar, this) == aVar) {
                            return aVar;
                        }
                    }
                } else {
                    if (i5 != 1 && i5 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                }
                return Unit.a;
            default:
                z zVar2 = this.f7861v;
                c0 c0Var = zVar2.f7926f;
                ko.a aVar2 = ko.a.f13464d;
                int i6 = this.f7859e;
                if (i6 != 0) {
                    if (i6 != 1) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    return Unit.a;
                }
                ki.b.R(obj);
                FlowCollector flowCollector = (FlowCollector) this.f7860i;
                a0 a0Var2 = (a0) c0Var.getValue();
                if (!(a0Var2 instanceof b)) {
                    zVar2.f7928h.E(new h(a0Var2));
                }
                n nVar = new n(a0Var2, null);
                this.f7859e = 1;
                c0Var.collect(new qr.o(new Ref.BooleanRef(), new f1(flowCollector, 3), nVar), this);
                return aVar2;
        }
    }
}
