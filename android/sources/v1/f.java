package v1;

import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import org.json.JSONException;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19162d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f19163e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ JSONException f19164i;

    public /* synthetic */ f(h hVar, JSONException jSONException, int i5) {
        this.f19162d = i5;
        this.f19163e = hVar;
        this.f19164i = jSONException;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19162d) {
            case 0:
                final h hVar = this.f19163e;
                Executor executor = hVar.f19170g;
                if (executor == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor = null;
                }
                final int i5 = 0;
                final JSONException jSONException = this.f19164i;
                executor.execute(new Runnable() { // from class: v1.a
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i5) {
                            case 0:
                                n1.h hVar2 = hVar.f19169f;
                                if (hVar2 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar2 = null;
                                }
                                hVar2.e(new q1.a(new p1.a(4), jSONException.getMessage()));
                                break;
                            default:
                                n1.h hVar3 = hVar.f19169f;
                                if (hVar3 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar3 = null;
                                }
                                String message = jSONException.getMessage();
                                hVar3.e((message == null || message.length() <= 0) ? new q1.a(new p1.a(4), "Unknown error") : new q1.a(new p1.a(4), message));
                                break;
                        }
                    }
                });
                break;
            default:
                final h hVar2 = this.f19163e;
                Executor executor2 = hVar2.f19170g;
                if (executor2 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                    executor2 = null;
                }
                final int i6 = 1;
                final JSONException jSONException2 = this.f19164i;
                executor2.execute(new Runnable() { // from class: v1.a
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i6) {
                            case 0:
                                n1.h hVar22 = hVar2.f19169f;
                                if (hVar22 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar22 = null;
                                }
                                hVar22.e(new q1.a(new p1.a(4), jSONException2.getMessage()));
                                break;
                            default:
                                n1.h hVar3 = hVar2.f19169f;
                                if (hVar3 == null) {
                                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                                    hVar3 = null;
                                }
                                String message = jSONException2.getMessage();
                                hVar3.e((message == null || message.length() <= 0) ? new q1.a(new p1.a(4), "Unknown error") : new q1.a(new p1.a(4), message));
                                break;
                        }
                    }
                });
                break;
        }
        return Unit.a;
    }
}
