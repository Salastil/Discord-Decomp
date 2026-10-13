package com.google.android.gms.net;

import android.content.Context;
import android.os.SystemClock;
import bf.g;
import bf.j;
import java.util.Arrays;
import java.util.concurrent.ThreadLocalRandom;
import java.util.concurrent.atomic.AtomicLong;

/* loaded from: classes3.dex */
public final class c implements AutoCloseable {

    /* renamed from: i, reason: collision with root package name */
    public final int f5907i;

    /* renamed from: v, reason: collision with root package name */
    public final Context f5908v;

    /* renamed from: w, reason: collision with root package name */
    public final float f5909w;

    /* renamed from: x, reason: collision with root package name */
    public int f5910x = 13;

    /* renamed from: d, reason: collision with root package name */
    public final long f5905d = System.currentTimeMillis();

    /* renamed from: e, reason: collision with root package name */
    public final long f5906e = SystemClock.uptimeMillis();

    public c(Context context, int i5, float f2) {
        this.f5907i = i5;
        this.f5908v = context;
        this.f5909w = f2;
    }

    @Override // java.lang.AutoCloseable
    public final void close() {
        Context context = this.f5908v;
        if (b.f5902c == null) {
            synchronized (b.f5903d) {
                try {
                    if (b.f5902c == null) {
                        b.f5902c = new b(context);
                    }
                } finally {
                }
            }
        }
        b bVar = b.f5902c;
        int i5 = this.f5910x;
        long currentTimeMillis = System.currentTimeMillis();
        long uptimeMillis = SystemClock.uptimeMillis() - this.f5906e;
        if (ThreadLocalRandom.current().nextFloat() < this.f5909w) {
            int i6 = (int) uptimeMillis;
            long j = this.f5905d;
            int i10 = this.f5907i;
            synchronized (bVar) {
                AtomicLong atomicLong = bVar.f5904b;
                if (atomicLong.get() != -1 && SystemClock.uptimeMillis() - atomicLong.get() <= 1800000) {
                    return;
                }
                bVar.a.c(new j(0, Arrays.asList(new g(i10, i5, -1, j, currentTimeMillis, null, null, 368, i6)))).o(new u4.c(bVar));
            }
        }
    }
}
