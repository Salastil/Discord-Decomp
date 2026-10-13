package b4;

import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class b extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ e f2735d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ c f2736e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(e eVar, c cVar) {
        super(0);
        this.f2735d = eVar;
        this.f2736e = cVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        c4.f fVar = this.f2735d.a;
        c listener = this.f2736e;
        fVar.getClass();
        Intrinsics.checkNotNullParameter(listener, "listener");
        synchronized (fVar.f3305c) {
            if (fVar.f3306d.remove(listener) && fVar.f3306d.isEmpty()) {
                fVar.d();
            }
        }
        return Unit.a;
    }
}
