package com.google.android.exoplayer2;

import android.net.Uri;
import fi.c0;
import fi.e0;
import fi.r0;
import fi.w0;
import hc.j0;
import hc.l0;
import hc.m0;
import hc.n0;
import hc.o0;
import hc.p0;
import hc.q0;
import java.util.Collections;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class MediaItem implements hc.g {
    public static final MediaItem E;
    public static final String F;
    public static final String G;
    public static final String H;
    public static final String I;
    public static final String J;
    public static final String K;
    public static final hb.a L;

    /* renamed from: d, reason: collision with root package name */
    public final String f5234d;

    /* renamed from: e, reason: collision with root package name */
    public final p0 f5235e;

    /* renamed from: i, reason: collision with root package name */
    public final p0 f5236i;

    /* renamed from: v, reason: collision with root package name */
    public final o0 f5237v;

    /* renamed from: w, reason: collision with root package name */
    public final MediaMetadata f5238w;

    /* renamed from: x, reason: collision with root package name */
    public final l0 f5239x;

    /* renamed from: y, reason: collision with root package name */
    public final q0 f5240y;

    static {
        j0 j0Var = new j0();
        c0 c0Var = e0.f8656e;
        r0 r0Var = r0.f8704w;
        List list = Collections.EMPTY_LIST;
        E = new MediaItem("", new l0(j0Var), null, new o0(-9223372036854775807L, -9223372036854775807L, -9223372036854775807L, -3.4028235E38f, -3.4028235E38f), MediaMetadata.f5241f0, q0.f9843i);
        int i5 = d0.a;
        F = Integer.toString(0, 36);
        G = Integer.toString(1, 36);
        H = Integer.toString(2, 36);
        I = Integer.toString(3, 36);
        J = Integer.toString(4, 36);
        K = Integer.toString(5, 36);
        L = new hb.a(10);
    }

    public MediaItem(String str, l0 l0Var, p0 p0Var, o0 o0Var, MediaMetadata mediaMetadata, q0 q0Var) {
        this.f5234d = str;
        this.f5235e = p0Var;
        this.f5236i = p0Var;
        this.f5237v = o0Var;
        this.f5238w = mediaMetadata;
        this.f5239x = l0Var;
        this.f5240y = q0Var;
    }

    public static MediaItem a(String str) {
        p0 p0Var;
        j0 j0Var = new j0();
        m0 m0Var = new m0();
        m0Var.f9786c = w0.f8728y;
        c0 c0Var = e0.f8656e;
        r0 r0Var = r0.f8704w;
        m0Var.f9790g = r0Var;
        List list = Collections.EMPTY_LIST;
        q0 q0Var = q0.f9843i;
        Uri parse = str == null ? null : Uri.parse(str);
        ke.b.k(m0Var.f9785b == null || m0Var.a != null);
        if (parse != null) {
            p0Var = new p0(parse, null, m0Var.a != null ? new n0(m0Var) : null, null, list, null, r0Var);
        } else {
            p0Var = null;
        }
        return new MediaItem("", new l0(j0Var), p0Var, new o0(-9223372036854775807L, -9223372036854775807L, -9223372036854775807L, -3.4028235E38f, -3.4028235E38f), MediaMetadata.f5241f0, q0Var);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof MediaItem)) {
            return false;
        }
        MediaItem mediaItem = (MediaItem) obj;
        return d0.a(this.f5234d, mediaItem.f5234d) && this.f5239x.equals(mediaItem.f5239x) && d0.a(this.f5235e, mediaItem.f5235e) && d0.a(this.f5237v, mediaItem.f5237v) && d0.a(this.f5238w, mediaItem.f5238w) && d0.a(this.f5240y, mediaItem.f5240y);
    }

    public final int hashCode() {
        int hashCode = this.f5234d.hashCode() * 31;
        p0 p0Var = this.f5235e;
        return this.f5240y.hashCode() + ((this.f5238w.hashCode() + ((this.f5239x.hashCode() + ((this.f5237v.hashCode() + ((hashCode + (p0Var != null ? p0Var.hashCode() : 0)) * 31)) * 31)) * 31)) * 31);
    }
}
