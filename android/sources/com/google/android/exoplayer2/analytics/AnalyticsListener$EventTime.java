package com.google.android.exoplayer2.analytics;

import com.google.android.exoplayer2.Timeline;
import java.util.Arrays;
import nd.s;
import w3.q;

/* loaded from: classes3.dex */
public final class AnalyticsListener$EventTime {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final Timeline f5304b;

    /* renamed from: c, reason: collision with root package name */
    public final int f5305c;

    /* renamed from: d, reason: collision with root package name */
    public final s f5306d;

    /* renamed from: e, reason: collision with root package name */
    public final long f5307e;

    /* renamed from: f, reason: collision with root package name */
    public final Timeline f5308f;

    /* renamed from: g, reason: collision with root package name */
    public final int f5309g;

    /* renamed from: h, reason: collision with root package name */
    public final s f5310h;

    /* renamed from: i, reason: collision with root package name */
    public final long f5311i;
    public final long j;

    public AnalyticsListener$EventTime(long j, Timeline timeline, int i5, s sVar, long j5, Timeline timeline2, int i6, s sVar2, long j7, long j10) {
        this.a = j;
        this.f5304b = timeline;
        this.f5305c = i5;
        this.f5306d = sVar;
        this.f5307e = j5;
        this.f5308f = timeline2;
        this.f5309g = i6;
        this.f5310h = sVar2;
        this.f5311i = j7;
        this.j = j10;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && AnalyticsListener$EventTime.class == obj.getClass()) {
            AnalyticsListener$EventTime analyticsListener$EventTime = (AnalyticsListener$EventTime) obj;
            if (this.a == analyticsListener$EventTime.a && this.f5305c == analyticsListener$EventTime.f5305c && this.f5307e == analyticsListener$EventTime.f5307e && this.f5309g == analyticsListener$EventTime.f5309g && this.f5311i == analyticsListener$EventTime.f5311i && this.j == analyticsListener$EventTime.j && q.j(this.f5304b, analyticsListener$EventTime.f5304b) && q.j(this.f5306d, analyticsListener$EventTime.f5306d) && q.j(this.f5308f, analyticsListener$EventTime.f5308f) && q.j(this.f5310h, analyticsListener$EventTime.f5310h)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Long.valueOf(this.a), this.f5304b, Integer.valueOf(this.f5305c), this.f5306d, Long.valueOf(this.f5307e), this.f5308f, Integer.valueOf(this.f5309g), this.f5310h, Long.valueOf(this.f5311i), Long.valueOf(this.j)});
    }
}
