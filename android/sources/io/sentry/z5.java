package io.sentry;

import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.concurrent.CopyOnWriteArraySet;

/* loaded from: classes3.dex */
public final class z5 {

    /* renamed from: u, reason: collision with root package name */
    public static final List f12102u = Collections.unmodifiableList(Arrays.asList("Content-Type", "Content-Length", "Accept"));
    public Double a;

    /* renamed from: b, reason: collision with root package name */
    public Double f12103b;

    /* renamed from: c, reason: collision with root package name */
    public final CopyOnWriteArraySet f12104c;

    /* renamed from: d, reason: collision with root package name */
    public final CopyOnWriteArraySet f12105d;

    /* renamed from: e, reason: collision with root package name */
    public String f12106e;

    /* renamed from: f, reason: collision with root package name */
    public String f12107f;

    /* renamed from: g, reason: collision with root package name */
    public y5 f12108g;

    /* renamed from: h, reason: collision with root package name */
    public final int f12109h;

    /* renamed from: i, reason: collision with root package name */
    public final long f12110i;
    public final long j;
    public final long k;

    /* renamed from: l, reason: collision with root package name */
    public final boolean f12111l;

    /* renamed from: m, reason: collision with root package name */
    public io.sentry.protocol.t f12112m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f12113n;

    /* renamed from: o, reason: collision with root package name */
    public w3 f12114o;

    /* renamed from: p, reason: collision with root package name */
    public List f12115p;

    /* renamed from: q, reason: collision with root package name */
    public List f12116q;

    /* renamed from: r, reason: collision with root package name */
    public boolean f12117r;

    /* renamed from: s, reason: collision with root package name */
    public List f12118s;

    /* renamed from: t, reason: collision with root package name */
    public List f12119t;

    public z5(boolean z5, io.sentry.protocol.t tVar) {
        CopyOnWriteArraySet copyOnWriteArraySet = new CopyOnWriteArraySet();
        this.f12104c = copyOnWriteArraySet;
        this.f12105d = new CopyOnWriteArraySet();
        this.f12106e = null;
        this.f12107f = null;
        this.f12108g = y5.MEDIUM;
        this.f12109h = 1;
        this.f12110i = 30000L;
        this.j = 5000L;
        this.k = LogThrottleSingleton.RATE_LIMIT_ONE_HOUR;
        this.f12111l = true;
        this.f12113n = false;
        this.f12114o = w3.PIXEL_COPY;
        List list = Collections.EMPTY_LIST;
        this.f12115p = list;
        this.f12116q = list;
        this.f12117r = true;
        List list2 = f12102u;
        this.f12118s = list2;
        this.f12119t = list2;
        if (z5) {
            return;
        }
        j(true);
        i(true);
        copyOnWriteArraySet.add("android.webkit.WebView");
        copyOnWriteArraySet.add("android.widget.VideoView");
        copyOnWriteArraySet.add("androidx.media3.ui.PlayerView");
        copyOnWriteArraySet.add("com.google.android.exoplayer2.ui.PlayerView");
        copyOnWriteArraySet.add("com.google.android.exoplayer2.ui.StyledPlayerView");
        this.f12112m = tVar;
    }

    public final List a() {
        return this.f12115p;
    }

    public final List b() {
        return this.f12116q;
    }

    public final List c() {
        return this.f12118s;
    }

    public final List d() {
        return this.f12119t;
    }

    public final Double e() {
        return this.f12103b;
    }

    public final Double f() {
        return this.a;
    }

    public final boolean g() {
        return this.f12117r;
    }

    public final void h(boolean z5) {
        this.f12113n = z5;
    }

    public final void i(boolean z5) {
        CopyOnWriteArraySet copyOnWriteArraySet = this.f12105d;
        CopyOnWriteArraySet copyOnWriteArraySet2 = this.f12104c;
        if (z5) {
            copyOnWriteArraySet2.add("android.widget.ImageView");
            copyOnWriteArraySet.remove("android.widget.ImageView");
        } else {
            copyOnWriteArraySet.add("android.widget.ImageView");
            copyOnWriteArraySet2.remove("android.widget.ImageView");
        }
    }

    public final void j(boolean z5) {
        CopyOnWriteArraySet copyOnWriteArraySet = this.f12105d;
        CopyOnWriteArraySet copyOnWriteArraySet2 = this.f12104c;
        if (z5) {
            copyOnWriteArraySet2.add("android.widget.TextView");
            copyOnWriteArraySet.remove("android.widget.TextView");
        } else {
            copyOnWriteArraySet.add("android.widget.TextView");
            copyOnWriteArraySet2.remove("android.widget.TextView");
        }
    }

    public final void k(boolean z5) {
        this.f12117r = z5;
    }

    public final void l(ArrayList arrayList) {
        this.f12115p = Collections.unmodifiableList(new ArrayList(arrayList));
    }

    public final void m(ArrayList arrayList) {
        this.f12116q = Collections.unmodifiableList(new ArrayList(arrayList));
    }

    public final void n(ArrayList arrayList) {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        linkedHashSet.addAll(f12102u);
        linkedHashSet.addAll(arrayList);
        this.f12118s = Collections.unmodifiableList(new ArrayList(linkedHashSet));
    }

    public final void o(ArrayList arrayList) {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        linkedHashSet.addAll(f12102u);
        linkedHashSet.addAll(arrayList);
        this.f12119t = Collections.unmodifiableList(new ArrayList(linkedHashSet));
    }

    public final void p(Double d6) {
        if (e4.f.B(d6, true)) {
            this.f12103b = d6;
            return;
        }
        throw new IllegalArgumentException("The value " + d6 + " is not valid. Use null to disable or values >= 0.0 and <= 1.0.");
    }

    public final void q(Double d6) {
        if (e4.f.B(d6, true)) {
            this.a = d6;
            return;
        }
        throw new IllegalArgumentException("The value " + d6 + " is not valid. Use null to disable or values >= 0.0 and <= 1.0.");
    }
}
