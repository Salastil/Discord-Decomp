package u;

import kotlin.coroutines.CoroutineContext;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class q implements o, l {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ l f18768d;

    /* renamed from: e, reason: collision with root package name */
    public final CoroutineContext f18769e;

    public q(l lVar, CoroutineContext coroutineContext) {
        this.f18768d = lVar;
        this.f18769e = coroutineContext;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0035  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x0021  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(Function0 function0, lo.c cVar) {
        p frame;
        int i5;
        try {
            if (cVar instanceof p) {
                frame = (p) cVar;
                int i6 = frame.f18767v;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    frame.f18767v = i6 - Integer.MIN_VALUE;
                    Object obj = frame.f18765e;
                    ko.a aVar = ko.a.f13464d;
                    i5 = frame.f18767v;
                    if (i5 != 0) {
                        ki.b.R(obj);
                        frame.f18764d = (Lambda) function0;
                        frame.f18767v = 1;
                        nr.j jVar = new nr.j(1, ko.f.b(frame));
                        jVar.t();
                        Object r5 = jVar.r();
                        if (r5 == aVar) {
                            Intrinsics.checkNotNullParameter(frame, "frame");
                        }
                        if (r5 == aVar) {
                            return;
                        }
                    } else {
                        if (i5 != 1) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        function0 = (Function0) frame.f18764d;
                        ki.b.R(obj);
                    }
                    throw new fo.h();
                }
            }
            if (i5 != 0) {
            }
            throw new fo.h();
        } catch (Throwable th2) {
            function0.invoke();
            throw th2;
        }
        frame = new p(this, cVar);
        Object obj2 = frame.f18765e;
        ko.a aVar2 = ko.a.f13464d;
        i5 = frame.f18767v;
    }

    @Override // kotlinx.coroutines.CoroutineScope
    public final CoroutineContext getCoroutineContext() {
        return this.f18769e;
    }

    @Override // u.x
    public final Object getValue() {
        return this.f18768d.getValue();
    }

    @Override // u.l
    public final void setValue(Object obj) {
        this.f18768d.setValue(obj);
    }
}
