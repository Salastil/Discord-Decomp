package androidx.work.impl.workers;

import a3.o;
import android.content.Context;
import android.database.Cursor;
import androidx.work.Worker;
import androidx.work.WorkerParameters;
import androidx.work.impl.WorkDatabase;
import androidx.work.impl.WorkDatabase_Impl;
import com.facebook.react.devsupport.StackTraceHelper;
import e4.i;
import e4.l;
import e4.p;
import e4.r;
import i4.b;
import java.util.ArrayList;
import java.util.concurrent.TimeUnit;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import nf.e;
import nt.a;
import org.jetbrains.annotations.NotNull;
import v3.f;
import v3.m;
import v3.n;
import v3.q;
import v3.x;
import v3.y;

@Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0006\u0010\u0007¨\u0006\b"}, d2 = {"Landroidx/work/impl/workers/DiagnosticsWorker;", "Landroidx/work/Worker;", "Landroid/content/Context;", "context", "Landroidx/work/WorkerParameters;", "parameters", "<init>", "(Landroid/content/Context;Landroidx/work/WorkerParameters;)V", "work-runtime_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DiagnosticsWorker extends Worker {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public DiagnosticsWorker(@NotNull Context context, @NotNull WorkerParameters parameters) {
        super(context, parameters);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(parameters, "parameters");
    }

    @Override // androidx.work.Worker
    public final n f() {
        o oVar;
        i iVar;
        l lVar;
        r rVar;
        w3.o a = w3.o.a(this.f19206d);
        Intrinsics.checkNotNullExpressionValue(a, "getInstance(applicationContext)");
        WorkDatabase workDatabase = a.f19662c;
        Intrinsics.checkNotNullExpressionValue(workDatabase, "workManager.workDatabase");
        p t5 = workDatabase.t();
        l r5 = workDatabase.r();
        r u5 = workDatabase.u();
        i p3 = workDatabase.p();
        a.f19661b.f19184c.getClass();
        long currentTimeMillis = System.currentTimeMillis() - TimeUnit.DAYS.toMillis(1L);
        t5.getClass();
        o g6 = o.g(1, "SELECT * FROM workspec WHERE last_enqueue_time >= ? AND state IN (2, 3, 5) ORDER BY last_enqueue_time DESC");
        g6.z(1, currentTimeMillis);
        WorkDatabase_Impl workDatabase_Impl = (WorkDatabase_Impl) t5.a;
        workDatabase_Impl.b();
        Cursor D = a.D(workDatabase_Impl, g6);
        try {
            int n6 = e.n(D, StackTraceHelper.ID_KEY);
            int n10 = e.n(D, "state");
            int n11 = e.n(D, "worker_class_name");
            int n12 = e.n(D, "input_merger_class_name");
            int n13 = e.n(D, "input");
            int n14 = e.n(D, "output");
            int n15 = e.n(D, "initial_delay");
            int n16 = e.n(D, "interval_duration");
            int n17 = e.n(D, "flex_duration");
            int n18 = e.n(D, "run_attempt_count");
            int n19 = e.n(D, "backoff_policy");
            oVar = g6;
            try {
                int n20 = e.n(D, "backoff_delay_duration");
                int n21 = e.n(D, "last_enqueue_time");
                int n22 = e.n(D, "minimum_retention_duration");
                int n23 = e.n(D, "schedule_requested_at");
                int n24 = e.n(D, "run_in_foreground");
                int n25 = e.n(D, "out_of_quota_policy");
                int n26 = e.n(D, "period_count");
                int n27 = e.n(D, "generation");
                int n28 = e.n(D, "next_schedule_time_override");
                int n29 = e.n(D, "next_schedule_time_override_generation");
                int n30 = e.n(D, "stop_reason");
                int n31 = e.n(D, "required_network_type");
                int n32 = e.n(D, "requires_charging");
                int n33 = e.n(D, "requires_device_idle");
                int n34 = e.n(D, "requires_battery_not_low");
                int n35 = e.n(D, "requires_storage_not_low");
                int n36 = e.n(D, "trigger_content_update_delay");
                int n37 = e.n(D, "trigger_max_content_delay");
                int n38 = e.n(D, "content_uri_triggers");
                int i5 = n22;
                ArrayList arrayList = new ArrayList(D.getCount());
                while (D.moveToNext()) {
                    byte[] bArr = null;
                    String string = D.isNull(n6) ? null : D.getString(n6);
                    y s2 = e.s(D.getInt(n10));
                    String string2 = D.isNull(n11) ? null : D.getString(n11);
                    String string3 = D.isNull(n12) ? null : D.getString(n12);
                    f a10 = f.a(D.isNull(n13) ? null : D.getBlob(n13));
                    f a11 = f.a(D.isNull(n14) ? null : D.getBlob(n14));
                    long j = D.getLong(n15);
                    long j5 = D.getLong(n16);
                    long j7 = D.getLong(n17);
                    int i6 = D.getInt(n18);
                    v3.a p5 = e.p(D.getInt(n19));
                    long j10 = D.getLong(n20);
                    long j11 = D.getLong(n21);
                    int i10 = i5;
                    long j12 = D.getLong(i10);
                    int i11 = n17;
                    int i12 = n23;
                    long j13 = D.getLong(i12);
                    n23 = i12;
                    int i13 = n24;
                    boolean z5 = D.getInt(i13) != 0;
                    n24 = i13;
                    int i14 = n25;
                    x r7 = e.r(D.getInt(i14));
                    n25 = i14;
                    int i15 = n26;
                    int i16 = D.getInt(i15);
                    n26 = i15;
                    int i17 = n27;
                    int i18 = D.getInt(i17);
                    n27 = i17;
                    int i19 = n28;
                    long j14 = D.getLong(i19);
                    n28 = i19;
                    int i20 = n29;
                    int i21 = D.getInt(i20);
                    n29 = i20;
                    int i22 = n30;
                    int i23 = D.getInt(i22);
                    n30 = i22;
                    int i24 = n31;
                    q q5 = e.q(D.getInt(i24));
                    n31 = i24;
                    int i25 = n32;
                    boolean z6 = D.getInt(i25) != 0;
                    n32 = i25;
                    int i26 = n33;
                    boolean z7 = D.getInt(i26) != 0;
                    n33 = i26;
                    int i27 = n34;
                    boolean z8 = D.getInt(i27) != 0;
                    n34 = i27;
                    int i28 = n35;
                    boolean z10 = D.getInt(i28) != 0;
                    n35 = i28;
                    int i29 = n36;
                    long j15 = D.getLong(i29);
                    n36 = i29;
                    int i30 = n37;
                    long j16 = D.getLong(i30);
                    n37 = i30;
                    int i31 = n38;
                    if (!D.isNull(i31)) {
                        bArr = D.getBlob(i31);
                    }
                    n38 = i31;
                    arrayList.add(new e4.o(string, s2, string2, string3, a10, a11, j, j5, j7, new v3.e(q5, z6, z7, z8, z10, j15, j16, e.e(bArr)), i6, p5, j10, j11, j12, j13, z5, r7, i16, i18, j14, i21, i23));
                    n17 = i11;
                    i5 = i10;
                }
                D.close();
                oVar.i();
                ArrayList i32 = t5.i();
                ArrayList c6 = t5.c();
                if (arrayList.isEmpty()) {
                    iVar = p3;
                    lVar = r5;
                    rVar = u5;
                } else {
                    v3.p d6 = v3.p.d();
                    String str = b.a;
                    d6.e(str, "Recently completed work:\n\n");
                    iVar = p3;
                    lVar = r5;
                    rVar = u5;
                    v3.p.d().e(str, b.a(lVar, rVar, iVar, arrayList));
                }
                if (!i32.isEmpty()) {
                    v3.p d7 = v3.p.d();
                    String str2 = b.a;
                    d7.e(str2, "Running work:\n\n");
                    v3.p.d().e(str2, b.a(lVar, rVar, iVar, i32));
                }
                if (!c6.isEmpty()) {
                    v3.p d8 = v3.p.d();
                    String str3 = b.a;
                    d8.e(str3, "Enqueued work:\n\n");
                    v3.p.d().e(str3, b.a(lVar, rVar, iVar, c6));
                }
                m mVar = new m(f.f19202c);
                Intrinsics.checkNotNullExpressionValue(mVar, "success()");
                return mVar;
            } catch (Throwable th2) {
                th = th2;
                D.close();
                oVar.i();
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            oVar = g6;
        }
    }
}
