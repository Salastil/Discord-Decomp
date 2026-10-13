package androidx.work.impl.workers;

import a4.b;
import a4.c;
import a4.e;
import android.content.Context;
import android.os.Build;
import androidx.work.WorkerParameters;
import com.google.firebase.messaging.s;
import g4.j;
import i4.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import v3.o;
import v3.p;

@Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0007\u0018\u00002\u00020\u00012\u00020\u0002B\u0017\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\b¨\u0006\t"}, d2 = {"Landroidx/work/impl/workers/ConstraintTrackingWorker;", "Lv3/o;", "La4/e;", "Landroid/content/Context;", "appContext", "Landroidx/work/WorkerParameters;", "workerParameters", "<init>", "(Landroid/content/Context;Landroidx/work/WorkerParameters;)V", "work-runtime_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nConstraintTrackingWorker.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ConstraintTrackingWorker.kt\nandroidx/work/impl/workers/ConstraintTrackingWorker\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,167:1\n1#2:168\n*E\n"})
/* loaded from: classes.dex */
public final class ConstraintTrackingWorker extends o implements e {
    public final j E;
    public o F;

    /* renamed from: w, reason: collision with root package name */
    public final WorkerParameters f2596w;

    /* renamed from: x, reason: collision with root package name */
    public final Object f2597x;

    /* renamed from: y, reason: collision with root package name */
    public volatile boolean f2598y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ConstraintTrackingWorker(@NotNull Context appContext, @NotNull WorkerParameters workerParameters) {
        super(appContext, workerParameters);
        Intrinsics.checkNotNullParameter(appContext, "appContext");
        Intrinsics.checkNotNullParameter(workerParameters, "workerParameters");
        this.f2596w = workerParameters;
        this.f2597x = new Object();
        this.E = new j();
    }

    @Override // a4.e
    public final void b(e4.o workSpec, c state) {
        Intrinsics.checkNotNullParameter(workSpec, "workSpec");
        Intrinsics.checkNotNullParameter(state, "state");
        p.d().a(a.a, "Constraints changed for " + workSpec);
        if (state instanceof b) {
            synchronized (this.f2597x) {
                this.f2598y = true;
                Unit unit = Unit.a;
            }
        }
    }

    @Override // v3.o
    public final void c() {
        o oVar = this.F;
        if (oVar == null || oVar.f19208i != -256) {
            return;
        }
        oVar.e(Build.VERSION.SDK_INT >= 31 ? this.f19208i : 0);
    }

    @Override // v3.o
    public final j d() {
        this.f19207e.f2566c.execute(new s(17, this));
        j future = this.E;
        Intrinsics.checkNotNullExpressionValue(future, "future");
        return future;
    }
}
