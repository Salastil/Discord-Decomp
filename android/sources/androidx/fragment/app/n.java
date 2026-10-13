package androidx.fragment.app;

import android.util.Log;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class n implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2056d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ y1 f2057e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ q f2058i;

    public /* synthetic */ n(y1 y1Var, q qVar, int i5) {
        this.f2056d = i5;
        this.f2057e = y1Var;
        this.f2058i = qVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f2056d) {
            case 0:
                y1 operation = this.f2057e;
                Intrinsics.checkNotNullParameter(operation, "$operation");
                q this$0 = this.f2058i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "Transition for operation " + operation + " has completed");
                }
                operation.c(this$0);
                break;
            default:
                y1 operation2 = this.f2057e;
                Intrinsics.checkNotNullParameter(operation2, "$operation");
                q this$02 = this.f2058i;
                Intrinsics.checkNotNullParameter(this$02, "this$0");
                if (FragmentManager.M(2)) {
                    Log.v("FragmentManager", "Transition for operation " + operation2 + " has completed");
                }
                operation2.c(this$02);
                break;
        }
    }
}
