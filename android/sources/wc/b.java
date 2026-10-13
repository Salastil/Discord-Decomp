package wc;

import java.util.ArrayDeque;
import qc.k;
import qd.f;

/* loaded from: classes3.dex */
public final class b {
    public final byte[] a = new byte[8];

    /* renamed from: b, reason: collision with root package name */
    public final ArrayDeque f19721b = new ArrayDeque();

    /* renamed from: c, reason: collision with root package name */
    public final e f19722c = new e();

    /* renamed from: d, reason: collision with root package name */
    public f f19723d;

    /* renamed from: e, reason: collision with root package name */
    public int f19724e;

    /* renamed from: f, reason: collision with root package name */
    public int f19725f;

    /* renamed from: g, reason: collision with root package name */
    public long f19726g;

    public final long a(k kVar, int i5) {
        kVar.readFully(this.a, 0, i5);
        long j = 0;
        for (int i6 = 0; i6 < i5; i6++) {
            j = (j << 8) | (r0[i6] & 255);
        }
        return j;
    }
}
