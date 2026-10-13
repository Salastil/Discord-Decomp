package io.sentry.util;

import java.io.Serializable;
import java.util.concurrent.atomic.AtomicLong;

/* loaded from: classes3.dex */
public final class i implements Serializable {

    /* renamed from: i, reason: collision with root package name */
    public static final AtomicLong f12042i = new AtomicLong(System.nanoTime());

    /* renamed from: d, reason: collision with root package name */
    public long f12043d;

    /* renamed from: e, reason: collision with root package name */
    public final long f12044e;

    public i() {
        long a = a();
        long a10 = (a() << 1) | 1;
        this.f12044e = a10;
        this.f12043d = a10 + a;
    }

    public static long a() {
        AtomicLong atomicLong;
        long j;
        long j5;
        do {
            atomicLong = f12042i;
            j = atomicLong.get();
            long j7 = (j >> 12) ^ j;
            long j10 = j7 ^ (j7 << 25);
            j5 = (j10 ^ (j10 >> 27)) * 2685821657736338717L;
        } while (!atomicLong.compareAndSet(j, j5));
        return j5;
    }

    public final void b(byte[] bArr) {
        for (int i5 = 0; i5 < bArr.length; i5++) {
            this.f12043d = (this.f12043d * 6364136223846793005L) + this.f12044e;
            bArr[i5] = (byte) ((((r1 >>> 22) ^ r1) >>> ((int) ((r1 >>> 61) + 22))) >>> 24);
        }
    }

    public final double c() {
        long j = this.f12043d * 6364136223846793005L;
        long j5 = this.f12044e;
        long j7 = j + j5;
        long j10 = (((j7 >>> 22) ^ j7) >>> ((int) ((j7 >>> 61) + 22))) & 4294967295L;
        this.f12043d = (j7 * 6364136223846793005L) + j5;
        return (((j10 >>> 6) << 27) + (((((r0 >>> 22) ^ r0) >>> ((int) ((r0 >>> 61) + 22))) & 4294967295L) >>> 5)) / 9.007199254740992E15d;
    }
}
