package t1;

import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import n1.h;
import n1.x;
import o1.l;
import sf.s;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18158d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Executor f18159e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ h f18160i;

    public /* synthetic */ e(Executor executor, h hVar) {
        this.f18159e = executor;
        this.f18160i = hVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f18158d) {
            case 0:
                l e9 = (l) obj;
                Intrinsics.checkNotNullParameter(e9, "e");
                this.f18159e.execute(new g(this.f18160i, e9, 0));
                break;
            default:
                s response = (s) obj;
                Executor executor = this.f18159e;
                h hVar = this.f18160i;
                if (response != null) {
                    Intrinsics.checkNotNullParameter(response, "response");
                    executor.execute(new wl.d(2, hVar, new x()));
                    break;
                } else {
                    executor.execute(new s1.c(hVar, 12));
                    break;
                }
        }
        return Unit.a;
    }

    public /* synthetic */ e(Executor executor, z1.a aVar, h hVar) {
        this.f18159e = executor;
        this.f18160i = hVar;
    }
}
