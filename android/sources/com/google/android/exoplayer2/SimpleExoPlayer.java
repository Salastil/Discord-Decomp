package com.google.android.exoplayer2;

import a5.h0;
import android.media.AudioTrack;
import android.os.Looper;
import android.view.Surface;
import android.view.SurfaceView;
import android.view.TextureView;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.video.VideoSize;
import fi.r0;
import hc.e0;
import hc.i1;
import hc.m;
import hc.n;
import ic.u;
import ie.s;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;
import ke.a0;
import ke.d0;

/* loaded from: classes3.dex */
public final class SimpleExoPlayer extends b {

    /* renamed from: b, reason: collision with root package name */
    public final d f5286b;

    /* renamed from: c, reason: collision with root package name */
    public final h0 f5287c;

    public SimpleExoPlayer(n nVar) {
        h0 h0Var = new h0(0);
        this.f5287c = h0Var;
        try {
            this.f5286b = new d(nVar, this);
            h0Var.q();
        } catch (Throwable th2) {
            this.f5287c.q();
            throw th2;
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final c A() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.f5359g0.f9736f;
    }

    @Override // com.google.android.exoplayer2.Player
    public final int C() {
        c0();
        return this.f5286b.C();
    }

    @Override // com.google.android.exoplayer2.Player
    public final int D() {
        c0();
        return this.f5286b.D();
    }

    @Override // com.google.android.exoplayer2.Player
    public final void F(int i5) {
        c0();
        this.f5286b.F(i5);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void G(SurfaceView surfaceView) {
        c0();
        this.f5286b.G(surfaceView);
    }

    @Override // com.google.android.exoplayer2.Player
    public final int H() {
        c0();
        return this.f5286b.H();
    }

    @Override // com.google.android.exoplayer2.Player
    public final int I() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.D;
    }

    @Override // com.google.android.exoplayer2.Player
    public final Timeline J() {
        c0();
        return this.f5286b.J();
    }

    @Override // com.google.android.exoplayer2.Player
    public final Looper K() {
        c0();
        return this.f5286b.f5369r;
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean L() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.E;
    }

    @Override // com.google.android.exoplayer2.Player
    public final long M() {
        c0();
        return this.f5286b.M();
    }

    @Override // com.google.android.exoplayer2.Player
    public final void P(TextureView textureView) {
        c0();
        this.f5286b.P(textureView);
    }

    @Override // com.google.android.exoplayer2.Player
    public final MediaMetadata R() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.M;
    }

    @Override // com.google.android.exoplayer2.Player
    public final long S() {
        c0();
        return this.f5286b.S();
    }

    @Override // com.google.android.exoplayer2.Player
    public final long T() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.f5371t;
    }

    @Override // com.google.android.exoplayer2.Player
    public final void a() {
        c0();
        this.f5286b.a();
    }

    @Override // com.google.android.exoplayer2.b
    public final void a0(int i5, long j, int i6, boolean z5) {
        c0();
        this.f5286b.a0(i5, j, i6, z5);
    }

    @Override // com.google.android.exoplayer2.Player
    public final PlaybackParameters b() {
        c0();
        return this.f5286b.b();
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean c() {
        c0();
        return this.f5286b.c();
    }

    public final void c0() {
        this.f5287c.j();
    }

    @Override // com.google.android.exoplayer2.Player
    public final long d() {
        c0();
        return this.f5286b.d();
    }

    public final void d0() {
        String str;
        boolean z5;
        AudioTrack audioTrack;
        c0();
        d dVar = this.f5286b;
        dVar.getClass();
        StringBuilder sb2 = new StringBuilder("Release ");
        sb2.append(Integer.toHexString(System.identityHashCode(dVar)));
        sb2.append(" [ExoPlayerLib/2.19.1] [");
        sb2.append(d0.f13297e);
        sb2.append("] [");
        HashSet hashSet = e0.a;
        synchronized (e0.class) {
            str = e0.f9665b;
        }
        sb2.append(str);
        sb2.append("]");
        ke.b.y("ExoPlayerImpl", sb2.toString());
        dVar.x0();
        int i5 = d0.a;
        int i6 = 21;
        if (i5 < 21 && (audioTrack = dVar.O) != null) {
            audioTrack.release();
            dVar.O = null;
        }
        dVar.f5376y.d();
        dVar.A.getClass();
        dVar.B.getClass();
        hc.d dVar2 = dVar.f5377z;
        dVar2.f9651c = null;
        dVar2.a();
        e eVar = dVar.k;
        synchronized (eVar) {
            if (!eVar.V && eVar.G.getThread().isAlive()) {
                eVar.E.d(7);
                eVar.f0(new m(7, eVar), eVar.R);
                z5 = eVar.V;
            }
            z5 = true;
        }
        if (!z5) {
            dVar.f5363l.e(10, new hb.a(4));
        }
        dVar.f5363l.d();
        dVar.f5361i.a.removeCallbacksAndMessages(null);
        ie.g gVar = dVar.f5370s;
        ic.a aVar = dVar.f5368q;
        CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) ((s) gVar).f10744b.f18810e;
        Iterator it = copyOnWriteArrayList.iterator();
        while (it.hasNext()) {
            ie.e eVar2 = (ie.e) it.next();
            if (eVar2.f10664b == aVar) {
                eVar2.f10665c = true;
                copyOnWriteArrayList.remove(eVar2);
            }
        }
        i1 i1Var = dVar.f5359g0;
        if (i1Var.f9743o) {
            dVar.f5359g0 = i1Var.a();
        }
        i1 g6 = dVar.f5359g0.g(1);
        dVar.f5359g0 = g6;
        i1 b10 = g6.b(g6.f9732b);
        dVar.f5359g0 = b10;
        b10.f9744p = b10.f9746r;
        dVar.f5359g0.f9745q = 0L;
        u uVar = (u) dVar.f5368q;
        a0 a0Var = uVar.E;
        ke.b.l(a0Var);
        a0Var.c(new com.google.firebase.messaging.s(i6, uVar));
        DefaultTrackSelector defaultTrackSelector = (DefaultTrackSelector) dVar.f5360h;
        synchronized (defaultTrackSelector.f5457d) {
            if (i5 >= 32) {
                try {
                    ge.j jVar = defaultTrackSelector.f5462i;
                    if (jVar != null) {
                        jVar.e();
                    }
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
        defaultTrackSelector.a = null;
        defaultTrackSelector.f9201b = null;
        dVar.n0();
        Surface surface = dVar.Q;
        if (surface != null) {
            surface.release();
            dVar.Q = null;
        }
        dVar.f5349b0 = CueGroup.f5454e;
    }

    public final void e0(PlaybackParameters playbackParameters) {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        if (dVar.f5359g0.f9742n.equals(playbackParameters)) {
            return;
        }
        i1 f2 = dVar.f5359g0.f(playbackParameters);
        dVar.F++;
        dVar.k.E.a(4, playbackParameters).b();
        dVar.v0(f2, 0, 1, false, 5, -9223372036854775807L, -1, false);
    }

    @Override // com.google.android.exoplayer2.Player
    public final Player.Commands f() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.L;
    }

    public final void f0(float f2) {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        final float h6 = d0.h(f2, 0.0f, 1.0f);
        if (dVar.Z == h6) {
            return;
        }
        dVar.Z = h6;
        dVar.o0(1, 2, Float.valueOf(dVar.f5377z.f9653e * h6));
        dVar.f5363l.e(22, new ke.j() { // from class: hc.q
            @Override // ke.j
            public final void invoke(Object obj) {
                ((com.google.android.exoplayer2.h) obj).onVolumeChanged(h6);
            }
        });
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean g() {
        c0();
        return this.f5286b.g();
    }

    public final void g0() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        dVar.f5377z.c(1, dVar.g());
        dVar.s0(null);
        r0 r0Var = r0.f8704w;
        long j = dVar.f5359g0.f9746r;
        dVar.f5349b0 = new CueGroup(r0Var);
    }

    @Override // com.google.android.exoplayer2.Player
    public final long getDuration() {
        c0();
        return this.f5286b.getDuration();
    }

    @Override // com.google.android.exoplayer2.Player
    public final void h(boolean z5) {
        c0();
        this.f5286b.h(z5);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void i() {
        c0();
        this.f5286b.x0();
    }

    @Override // com.google.android.exoplayer2.Player
    public final int j() {
        c0();
        return this.f5286b.j();
    }

    @Override // com.google.android.exoplayer2.Player
    public final void k(TextureView textureView) {
        c0();
        this.f5286b.k(textureView);
    }

    @Override // com.google.android.exoplayer2.Player
    public final VideoSize l() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.f5355e0;
    }

    @Override // com.google.android.exoplayer2.Player
    public final void m(h hVar) {
        c0();
        this.f5286b.m(hVar);
    }

    @Override // com.google.android.exoplayer2.Player
    public final int o() {
        c0();
        return this.f5286b.o();
    }

    @Override // com.google.android.exoplayer2.Player
    public final void p(SurfaceView surfaceView) {
        c0();
        this.f5286b.p(surfaceView);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void r(boolean z5) {
        c0();
        this.f5286b.r(z5);
    }

    @Override // com.google.android.exoplayer2.Player
    public final long s() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.f5372u;
    }

    @Override // com.google.android.exoplayer2.Player
    public final long t() {
        c0();
        return this.f5286b.t();
    }

    @Override // com.google.android.exoplayer2.Player
    public final void u(h hVar) {
        c0();
        this.f5286b.u(hVar);
    }

    @Override // com.google.android.exoplayer2.Player
    public final long v() {
        c0();
        return this.f5286b.v();
    }

    @Override // com.google.android.exoplayer2.Player
    public final int w() {
        c0();
        return this.f5286b.w();
    }

    @Override // com.google.android.exoplayer2.Player
    public final Tracks x() {
        c0();
        return this.f5286b.x();
    }

    @Override // com.google.android.exoplayer2.Player
    public final CueGroup z() {
        c0();
        d dVar = this.f5286b;
        dVar.x0();
        return dVar.f5349b0;
    }
}
