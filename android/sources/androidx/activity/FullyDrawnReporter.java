package androidx.activity;

import androidx.activity.ComponentActivity;
import e.h;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class FullyDrawnReporter {
    public final Executor a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f737b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f738c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f739d;

    public FullyDrawnReporter(ComponentActivity.ReportFullyDrawnExecutor executor, h reportFullyDrawn) {
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(reportFullyDrawn, "reportFullyDrawn");
        this.a = executor;
        this.f737b = new Object();
        this.f739d = new ArrayList();
    }

    public final void a() {
        synchronized (this.f737b) {
            try {
                this.f738c = true;
                Iterator it = this.f739d.iterator();
                while (it.hasNext()) {
                    ((Function0) it.next()).invoke();
                }
                this.f739d.clear();
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }
}
