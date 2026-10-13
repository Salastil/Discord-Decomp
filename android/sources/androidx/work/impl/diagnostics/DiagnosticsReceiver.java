package androidx.work.impl.diagnostics;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import androidx.work.impl.workers.DiagnosticsWorker;
import java.util.Collections;
import java.util.List;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import v3.p;
import w3.k;
import w3.o;

/* loaded from: classes.dex */
public class DiagnosticsReceiver extends BroadcastReceiver {
    public static final String a = p.f("DiagnosticsRcvr");

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        if (intent == null) {
            return;
        }
        p d6 = p.d();
        String str = a;
        d6.a(str, "Requesting diagnostics");
        try {
            o a10 = o.a(context);
            Intrinsics.checkNotNullParameter(DiagnosticsWorker.class, "workerClass");
            List singletonList = Collections.singletonList(new r(DiagnosticsWorker.class).j());
            if (singletonList.isEmpty()) {
                throw new IllegalArgumentException("enqueue needs at least one WorkRequest.");
            }
            new k(a10, null, 2, singletonList).S();
        } catch (IllegalStateException e9) {
            p.d().c(str, "WorkManager is not initialized", e9);
        }
    }
}
