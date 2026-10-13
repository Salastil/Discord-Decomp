package io.sentry.rrweb;

import com.facebook.react.uimanager.ViewProps;
import io.sentry.ILogger;
import io.sentry.y1;
import io.sentry.y2;
import java.util.Arrays;
import java.util.HashMap;
import java.util.concurrent.ConcurrentHashMap;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class m extends b implements y1 {
    public String E;
    public int F;
    public int G;
    public int H;
    public String I;
    public int J;
    public int K;
    public int L;
    public HashMap M;
    public ConcurrentHashMap N;
    public ConcurrentHashMap O;

    /* renamed from: i, reason: collision with root package name */
    public String f11969i;

    /* renamed from: v, reason: collision with root package name */
    public int f11970v;

    /* renamed from: w, reason: collision with root package name */
    public long f11971w;

    /* renamed from: x, reason: collision with root package name */
    public long f11972x;

    /* renamed from: y, reason: collision with root package name */
    public String f11973y;

    public m() {
        super(c.Custom);
        this.f11973y = "h264";
        this.E = "mp4";
        this.I = "constant";
        this.f11969i = MediaStreamTrack.VIDEO_TRACK_KIND;
    }

    @Override // io.sentry.rrweb.b
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || m.class != obj.getClass() || !super.equals(obj)) {
            return false;
        }
        m mVar = (m) obj;
        return this.f11970v == mVar.f11970v && this.f11971w == mVar.f11971w && this.f11972x == mVar.f11972x && this.F == mVar.F && this.G == mVar.G && this.H == mVar.H && this.J == mVar.J && this.K == mVar.K && this.L == mVar.L && d9.a.k(this.f11969i, mVar.f11969i) && d9.a.k(this.f11973y, mVar.f11973y) && d9.a.k(this.E, mVar.E) && d9.a.k(this.I, mVar.I);
    }

    @Override // io.sentry.rrweb.b
    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(super.hashCode()), this.f11969i, Integer.valueOf(this.f11970v), Long.valueOf(this.f11971w), Long.valueOf(this.f11972x), this.f11973y, this.E, Integer.valueOf(this.F), Integer.valueOf(this.G), Integer.valueOf(this.H), this.I, Integer.valueOf(this.J), Integer.valueOf(this.K), Integer.valueOf(this.L)});
    }

    @Override // io.sentry.y1
    public final void serialize(y2 y2Var, ILogger iLogger) {
        y2Var.n0();
        y2Var.C0("type").o0(iLogger, this.f11942d);
        y2Var.C0("timestamp").g(this.f11943e);
        y2Var.C0("data");
        y2Var.n0();
        y2Var.C0("tag").s(this.f11969i);
        y2Var.C0("payload");
        y2Var.n0();
        y2Var.C0("segmentId").g(this.f11970v);
        y2Var.C0("size").g(this.f11971w);
        y2Var.C0("duration").g(this.f11972x);
        y2Var.C0("encoding").s(this.f11973y);
        y2Var.C0("container").s(this.E);
        y2Var.C0("height").g(this.F);
        y2Var.C0("width").g(this.G);
        y2Var.C0("frameCount").g(this.H);
        y2Var.C0("frameRate").g(this.J);
        y2Var.C0("frameRateType").s(this.I);
        y2Var.C0(ViewProps.LEFT).g(this.K);
        y2Var.C0(ViewProps.TOP).g(this.L);
        ConcurrentHashMap concurrentHashMap = this.N;
        if (concurrentHashMap != null) {
            for (String str : concurrentHashMap.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.N, str, y2Var, str, iLogger);
            }
        }
        y2Var.O();
        ConcurrentHashMap concurrentHashMap2 = this.O;
        if (concurrentHashMap2 != null) {
            for (String str2 : concurrentHashMap2.keySet()) {
                com.discord.chat.bridge.botuikit.a.t(this.O, str2, y2Var, str2, iLogger);
            }
        }
        y2Var.O();
        HashMap hashMap = this.M;
        if (hashMap != null) {
            for (String str3 : hashMap.keySet()) {
                Object obj = this.M.get(str3);
                y2Var.C0(str3);
                y2Var.o0(iLogger, obj);
            }
        }
        y2Var.O();
    }
}
