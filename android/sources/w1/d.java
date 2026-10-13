package w1;

import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import n1.h;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19613d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e f19614e;

    public /* synthetic */ d(e eVar, int i5) {
        this.f19613d = i5;
        this.f19614e = eVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19613d) {
            case 0:
                final e eVar = this.f19614e;
                Executor executor = eVar.f19617g;
                if (executor == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor = null;
                }
                final int i5 = 0;
                executor.execute(new Runnable() { // from class: w1.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i5) {
                            case 0:
                                h hVar = eVar.f19616f;
                                if (hVar == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar = null;
                                }
                                hVar.e(new o1.h("No provider data returned."));
                                break;
                            default:
                                h hVar2 = eVar.f19616f;
                                if (hVar2 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar2 = null;
                                }
                                hVar2.e(new o1.h("Failed to launch the selector UI. Hint: ensure the `context` parameter is an Activity-based context."));
                                break;
                        }
                    }
                });
                break;
            default:
                final e eVar2 = this.f19614e;
                Executor executor2 = eVar2.f19617g;
                if (executor2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor2 = null;
                }
                final int i6 = 1;
                executor2.execute(new Runnable() { // from class: w1.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i6) {
                            case 0:
                                h hVar = eVar2.f19616f;
                                if (hVar == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar = null;
                                }
                                hVar.e(new o1.h("No provider data returned."));
                                break;
                            default:
                                h hVar2 = eVar2.f19616f;
                                if (hVar2 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar2 = null;
                                }
                                hVar2.e(new o1.h("Failed to launch the selector UI. Hint: ensure the `context` parameter is an Activity-based context."));
                                break;
                        }
                    }
                });
                break;
        }
        return Unit.a;
    }
}
