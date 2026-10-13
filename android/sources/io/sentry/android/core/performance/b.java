package io.sentry.android.core.performance;

import android.os.Looper;
import io.sentry.ISpan;
import io.sentry.i4;
import io.sentry.k1;

/* loaded from: classes3.dex */
public final class b {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public i4 f11281b = null;

    /* renamed from: c, reason: collision with root package name */
    public i4 f11282c = null;

    /* renamed from: d, reason: collision with root package name */
    public ISpan f11283d = null;

    /* renamed from: e, reason: collision with root package name */
    public ISpan f11284e = null;

    public b(String str) {
        this.a = str;
    }

    public static ISpan a(ISpan iSpan, String str, i4 i4Var) {
        ISpan c6 = iSpan.c(str, i4Var, k1.SENTRY);
        c6.h(Long.valueOf(Looper.getMainLooper().getThread().getId()), "thread.id");
        c6.h("main", "thread.name");
        Boolean bool = Boolean.TRUE;
        c6.h(bool, "ui.contributes_to_ttid");
        c6.h(bool, "ui.contributes_to_ttfd");
        return c6;
    }
}
