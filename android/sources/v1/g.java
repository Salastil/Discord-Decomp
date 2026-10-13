package v1;

import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19165d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f19166e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Throwable f19167i;

    public /* synthetic */ g(h hVar, Throwable th2, int i5) {
        this.f19165d = i5;
        this.f19166e = hVar;
        this.f19167i = th2;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19165d) {
            case 0:
                final h hVar = this.f19166e;
                Executor executor = hVar.f19170g;
                if (executor == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor = null;
                }
                final int i5 = 1;
                final Throwable th2 = this.f19167i;
                executor.execute(new Runnable() { // from class: v1.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i5) {
                            case 0:
                                n1.h hVar2 = hVar.f19169f;
                                if (hVar2 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar2 = null;
                                }
                                hVar2.e(new o1.h(th2.getMessage()));
                                break;
                            default:
                                n1.h hVar3 = hVar.f19169f;
                                if (hVar3 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar3 = null;
                                }
                                hVar3.e(new q1.a(new p1.a(26), th2.getMessage()));
                                break;
                        }
                    }
                });
                break;
            default:
                final h hVar2 = this.f19166e;
                Executor executor2 = hVar2.f19170g;
                if (executor2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor2 = null;
                }
                final int i6 = 0;
                final Throwable th3 = this.f19167i;
                executor2.execute(new Runnable() { // from class: v1.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i6) {
                            case 0:
                                n1.h hVar22 = hVar2.f19169f;
                                if (hVar22 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar22 = null;
                                }
                                hVar22.e(new o1.h(th3.getMessage()));
                                break;
                            default:
                                n1.h hVar3 = hVar2.f19169f;
                                if (hVar3 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar3 = null;
                                }
                                hVar3.e(new q1.a(new p1.a(26), th3.getMessage()));
                                break;
                        }
                    }
                });
                break;
        }
        return Unit.a;
    }
}
