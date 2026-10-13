package f4;

import android.content.Context;
import androidx.work.impl.WorkDatabase;
import java.util.concurrent.Callable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8343d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f8344e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f8345i;

    public /* synthetic */ f(int i5, int i6, Object obj) {
        this.f8343d = i6;
        this.f8345i = obj;
        this.f8344e = i5;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        switch (this.f8343d) {
            case 0:
                u4.b this$0 = (u4.b) this.f8345i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                WorkDatabase workDatabase = (WorkDatabase) this$0.f18810e;
                Long r5 = workDatabase.l().r("next_job_scheduler_id");
                int i5 = 0;
                int longValue = r5 != null ? (int) r5.longValue() : 0;
                workDatabase.l().u(new e4.d("next_job_scheduler_id", Long.valueOf(longValue == Integer.MAX_VALUE ? 0 : longValue + 1)));
                if (longValue < 0 || longValue > this.f8344e) {
                    workDatabase.l().u(new e4.d("next_job_scheduler_id", Long.valueOf(1)));
                } else {
                    i5 = longValue;
                }
                return Integer.valueOf(i5);
            default:
                l4.h hVar = (l4.h) this.f8345i;
                boolean z5 = hVar.G;
                int i6 = this.f8344e;
                if (!z5) {
                    return l4.m.e(hVar.getContext(), null, i6);
                }
                Context context = hVar.getContext();
                return l4.m.e(context, l4.m.j(context, i6), i6);
        }
    }
}
