package v1;

import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19157d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f19158e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ o1.d f19159i;

    public /* synthetic */ d(h hVar, o1.d dVar, int i5) {
        this.f19157d = i5;
        this.f19158e = hVar;
        this.f19159i = dVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19157d) {
            case 0:
                h hVar = this.f19158e;
                Executor executor = hVar.f19170g;
                if (executor == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor = null;
                }
                executor.execute(new c(hVar, this.f19159i, 2));
                break;
            default:
                h hVar2 = this.f19158e;
                Executor executor2 = hVar2.f19170g;
                if (executor2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor2 = null;
                }
                executor2.execute(new c(hVar2, this.f19159i, 0));
                break;
        }
        return Unit.a;
    }
}
