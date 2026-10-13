package com.google.android.exoplayer2;

import ke.d0;

/* loaded from: classes3.dex */
public class PlaybackException extends Exception implements hc.g {

    /* renamed from: d, reason: collision with root package name */
    public final int f5272d;

    /* renamed from: e, reason: collision with root package name */
    public final long f5273e;

    static {
        int i5 = d0.a;
        Integer.toString(0, 36);
        Integer.toString(1, 36);
        Integer.toString(2, 36);
        Integer.toString(3, 36);
        Integer.toString(4, 36);
    }

    public PlaybackException(String str, Throwable th2, int i5, long j) {
        super(str, th2);
        this.f5272d = i5;
        this.f5273e = j;
    }
}
