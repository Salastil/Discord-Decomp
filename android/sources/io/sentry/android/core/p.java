package io.sentry.android.core;

import android.os.SystemClock;
import java.util.Date;

/* loaded from: classes3.dex */
public final class p implements io.sentry.android.core.internal.util.n {
    public float a = 0.0f;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ s f11279b;

    public p(s sVar) {
        this.f11279b = sVar;
    }

    @Override // io.sentry.android.core.internal.util.n
    public final void b(long j, long j5, long j7, long j10, boolean z5, boolean z6, float f2) {
        Date r5 = ki.b.r();
        System.nanoTime();
        long time = r5.getTime() * 1000000;
        long elapsedRealtimeNanos = SystemClock.elapsedRealtimeNanos() + (j5 - System.nanoTime());
        s sVar = this.f11279b;
        long j11 = elapsedRealtimeNanos - sVar.a;
        if (j11 < 0) {
            return;
        }
        if (z6) {
            sVar.j.addLast(new io.sentry.profilemeasurements.b(Long.valueOf(j11), Long.valueOf(j7), time));
        } else if (z5) {
            sVar.f11323i.addLast(new io.sentry.profilemeasurements.b(Long.valueOf(j11), Long.valueOf(j7), time));
        }
        if (f2 != this.a) {
            this.a = f2;
            sVar.f11322h.addLast(new io.sentry.profilemeasurements.b(Long.valueOf(j11), Float.valueOf(f2), time));
        }
    }
}
