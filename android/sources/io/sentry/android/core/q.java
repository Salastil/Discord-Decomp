package io.sentry.android.core;

import android.os.SystemClock;
import com.google.android.exoplayer2.PlaybackParameters;
import java.io.File;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class q implements ke.n {

    /* renamed from: d, reason: collision with root package name */
    public boolean f11301d;

    /* renamed from: e, reason: collision with root package name */
    public long f11302e;

    /* renamed from: i, reason: collision with root package name */
    public long f11303i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f11304v;

    /* renamed from: w, reason: collision with root package name */
    public Object f11305w;

    public q(ke.y yVar) {
        this.f11304v = yVar;
        this.f11305w = PlaybackParameters.f5274v;
    }

    @Override // ke.n
    public long a() {
        long j = this.f11302e;
        if (!this.f11301d) {
            return j;
        }
        ((ke.y) this.f11304v).getClass();
        long elapsedRealtime = SystemClock.elapsedRealtime() - this.f11303i;
        return (((PlaybackParameters) this.f11305w).f5275d == 1.0f ? ke.d0.I(elapsedRealtime) : elapsedRealtime * r4.f5277i) + j;
    }

    @Override // ke.n
    public PlaybackParameters b() {
        return (PlaybackParameters) this.f11305w;
    }

    public void c(long j) {
        this.f11302e = j;
        if (this.f11301d) {
            ((ke.y) this.f11304v).getClass();
            this.f11303i = SystemClock.elapsedRealtime();
        }
    }

    @Override // ke.n
    public void d(PlaybackParameters playbackParameters) {
        if (this.f11301d) {
            c(a());
        }
        this.f11305w = playbackParameters;
    }

    public void e() {
        if (this.f11301d) {
            return;
        }
        ((ke.y) this.f11304v).getClass();
        this.f11303i = SystemClock.elapsedRealtime();
        this.f11301d = true;
    }

    public q(long j, long j5, boolean z5, File file, HashMap hashMap) {
        this.f11302e = j;
        this.f11304v = file;
        this.f11303i = j5;
        this.f11305w = hashMap;
        this.f11301d = z5;
    }
}
