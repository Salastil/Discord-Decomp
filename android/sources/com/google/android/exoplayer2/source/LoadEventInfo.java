package com.google.android.exoplayer2.source;

import android.net.Uri;
import ie.p;
import java.util.Collections;
import java.util.Map;
import java.util.concurrent.atomic.AtomicLong;

/* loaded from: classes3.dex */
public final class LoadEventInfo {

    /* renamed from: c, reason: collision with root package name */
    public static final AtomicLong f5429c = new AtomicLong();
    public final Map a;

    /* renamed from: b, reason: collision with root package name */
    public final long f5430b;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public LoadEventInfo(p pVar) {
        this(0L, Collections.EMPTY_MAP);
        Uri uri = pVar.a;
    }

    public LoadEventInfo(long j, Map map) {
        this.a = map;
        this.f5430b = j;
    }
}
