package com.google.android.exoplayer2;

import a5.h0;
import android.content.Context;
import android.graphics.Rect;
import android.graphics.SurfaceTexture;
import android.media.AudioManager;
import android.media.AudioTrack;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Pair;
import android.util.SparseBooleanArray;
import android.view.Surface;
import android.view.SurfaceHolder;
import android.view.SurfaceView;
import android.view.TextureView;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.audio.AudioAttributes;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.google.android.exoplayer2.trackselection.MappingTrackSelector$MappedTrackInfo;
import com.google.android.exoplayer2.video.VideoSize;
import fi.r0;
import ge.p;
import ge.r;
import ge.u;
import hc.b0;
import hc.e0;
import hc.e1;
import hc.i1;
import hc.k1;
import hc.l;
import hc.l1;
import hc.m1;
import hc.n;
import hc.n1;
import hc.o1;
import hc.p1;
import hc.s1;
import hc.t;
import hc.u0;
import hc.v;
import hc.w;
import ic.c0;
import ie.s;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Random;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.CopyOnWriteArraySet;
import java.util.concurrent.TimeoutException;
import ke.a0;
import ke.d0;
import ke.m;
import ke.x;
import ke.y;
import ke.z;
import me.k;
import nd.a1;
import nd.t0;
import org.webrtc.MediaStreamTrack;

/* loaded from: classes3.dex */
public final class d extends b {
    public final r8.c A;
    public final wi.d B;
    public final long C;
    public int D;
    public boolean E;
    public int F;
    public int G;
    public boolean H;
    public int I;
    public final p1 J;
    public t0 K;
    public Player.Commands L;
    public MediaMetadata M;
    public Format N;
    public AudioTrack O;
    public Object P;
    public Surface Q;
    public SurfaceHolder R;
    public k S;
    public boolean T;
    public TextureView U;
    public int V;
    public x W;
    public final int X;
    public final AudioAttributes Y;
    public float Z;
    public boolean a0;

    /* renamed from: b, reason: collision with root package name */
    public final u f5348b;

    /* renamed from: b0, reason: collision with root package name */
    public CueGroup f5349b0;

    /* renamed from: c, reason: collision with root package name */
    public final Player.Commands f5350c;

    /* renamed from: c0, reason: collision with root package name */
    public final boolean f5351c0;

    /* renamed from: d, reason: collision with root package name */
    public final h0 f5352d = new h0(0);

    /* renamed from: d0, reason: collision with root package name */
    public boolean f5353d0;

    /* renamed from: e, reason: collision with root package name */
    public final Context f5354e;

    /* renamed from: e0, reason: collision with root package name */
    public VideoSize f5355e0;

    /* renamed from: f, reason: collision with root package name */
    public final b f5356f;

    /* renamed from: f0, reason: collision with root package name */
    public MediaMetadata f5357f0;

    /* renamed from: g, reason: collision with root package name */
    public final hc.e[] f5358g;

    /* renamed from: g0, reason: collision with root package name */
    public i1 f5359g0;

    /* renamed from: h, reason: collision with root package name */
    public final r f5360h;
    public int h0;

    /* renamed from: i, reason: collision with root package name */
    public final a0 f5361i;

    /* renamed from: i0, reason: collision with root package name */
    public long f5362i0;
    public final hc.r j;
    public final e k;

    /* renamed from: l, reason: collision with root package name */
    public final m f5363l;

    /* renamed from: m, reason: collision with root package name */
    public final CopyOnWriteArraySet f5364m;

    /* renamed from: n, reason: collision with root package name */
    public final s1 f5365n;

    /* renamed from: o, reason: collision with root package name */
    public final ArrayList f5366o;

    /* renamed from: p, reason: collision with root package name */
    public final boolean f5367p;

    /* renamed from: q, reason: collision with root package name */
    public final ic.a f5368q;

    /* renamed from: r, reason: collision with root package name */
    public final Looper f5369r;

    /* renamed from: s, reason: collision with root package name */
    public final ie.g f5370s;

    /* renamed from: t, reason: collision with root package name */
    public final long f5371t;

    /* renamed from: u, reason: collision with root package name */
    public final long f5372u;

    /* renamed from: v, reason: collision with root package name */
    public final y f5373v;

    /* renamed from: w, reason: collision with root package name */
    public final w f5374w;

    /* renamed from: x, reason: collision with root package name */
    public final hc.x f5375x;

    /* renamed from: y, reason: collision with root package name */
    public final hc.b f5376y;

    /* renamed from: z, reason: collision with root package name */
    public final hc.d f5377z;

    static {
        e0.a("goog.exo.exoplayer");
    }

    public d(n nVar, SimpleExoPlayer simpleExoPlayer) {
        boolean equals;
        try {
            ke.b.y("ExoPlayerImpl", "Init " + Integer.toHexString(System.identityHashCode(this)) + " [ExoPlayerLib/2.19.1] [" + d0.f13297e + "]");
            this.f5354e = nVar.a.getApplicationContext();
            this.f5368q = new ic.u(nVar.f9795b);
            this.Y = nVar.f9802i;
            this.V = nVar.j;
            this.a0 = false;
            this.C = nVar.f9808q;
            w wVar = new w(this);
            this.f5374w = wVar;
            this.f5375x = new hc.x();
            Handler handler = new Handler(nVar.f9801h);
            hc.e[] b10 = ((hc.b) nVar.f9796c.f2613e).b(handler, wVar, wVar, wVar, wVar);
            this.f5358g = b10;
            ke.b.k(b10.length > 0);
            this.f5360h = (r) nVar.f9798e.get();
            nVar.f9797d.get();
            this.f5370s = (ie.g) nVar.f9800g.get();
            this.f5367p = nVar.k;
            this.J = nVar.f9803l;
            this.f5371t = nVar.f9804m;
            this.f5372u = nVar.f9805n;
            Looper looper = nVar.f9801h;
            this.f5369r = looper;
            y yVar = nVar.f9795b;
            this.f5373v = yVar;
            this.f5356f = simpleExoPlayer;
            this.f5363l = new m(looper, yVar, new hc.r(this));
            this.f5364m = new CopyOnWriteArraySet();
            this.f5366o = new ArrayList();
            this.K = new t0();
            this.f5348b = new u(new o1[b10.length], new p[b10.length], Tracks.f5299e, null);
            this.f5365n = new s1();
            SparseBooleanArray sparseBooleanArray = new SparseBooleanArray();
            int[] iArr = {1, 2, 3, 13, 14, 15, 16, 17, 18, 19, 31, 20, 30, 21, 22, 24, 27, 28, 32};
            for (int i5 = 0; i5 < 19; i5++) {
                int i6 = iArr[i5];
                ke.b.k(!false);
                sparseBooleanArray.append(i6, true);
            }
            this.f5360h.getClass();
            ke.b.k(!false);
            sparseBooleanArray.append(29, true);
            ke.b.k(!false);
            ke.g gVar = new ke.g(sparseBooleanArray);
            this.f5350c = new Player.Commands(gVar);
            SparseBooleanArray sparseBooleanArray2 = new SparseBooleanArray();
            for (int i10 = 0; i10 < gVar.a.size(); i10++) {
                int a = gVar.a(i10);
                ke.b.k(!false);
                sparseBooleanArray2.append(a, true);
            }
            ke.b.k(!false);
            sparseBooleanArray2.append(4, true);
            ke.b.k(!false);
            sparseBooleanArray2.append(10, true);
            ke.b.k(!false);
            this.L = new Player.Commands(new ke.g(sparseBooleanArray2));
            this.f5361i = this.f5373v.a(this.f5369r, null);
            hc.r rVar = new hc.r(this);
            this.j = rVar;
            this.f5359g0 = i1.i(this.f5348b);
            ((ic.u) this.f5368q).l(this.f5356f, this.f5369r);
            int i11 = d0.a;
            this.k = new e(this.f5358g, this.f5360h, this.f5348b, (hc.j) nVar.f9799f.get(), this.f5370s, this.D, this.E, this.f5368q, this.J, nVar.f9806o, nVar.f9807p, this.f5369r, this.f5373v, rVar, i11 < 31 ? new c0() : v.a(this.f5354e, this, nVar.f9809r));
            this.Z = 1.0f;
            this.D = 0;
            MediaMetadata mediaMetadata = MediaMetadata.f5241f0;
            this.M = mediaMetadata;
            this.f5357f0 = mediaMetadata;
            int i12 = -1;
            this.h0 = -1;
            if (i11 < 21) {
                AudioTrack audioTrack = this.O;
                if (audioTrack != null && audioTrack.getAudioSessionId() != 0) {
                    this.O.release();
                    this.O = null;
                }
                if (this.O == null) {
                    this.O = new AudioTrack(3, 4000, 4, 2, 2, 0, 0);
                }
                this.X = this.O.getAudioSessionId();
            } else {
                AudioManager audioManager = (AudioManager) this.f5354e.getSystemService(MediaStreamTrack.AUDIO_TRACK_KIND);
                if (audioManager != null) {
                    i12 = audioManager.generateAudioSessionId();
                }
                this.X = i12;
            }
            this.f5349b0 = CueGroup.f5454e;
            this.f5351c0 = true;
            u(this.f5368q);
            ie.g gVar2 = this.f5370s;
            Handler handler2 = new Handler(this.f5369r);
            ic.a aVar = this.f5368q;
            s sVar = (s) gVar2;
            sVar.getClass();
            aVar.getClass();
            u4.b bVar = sVar.f10744b;
            bVar.getClass();
            CopyOnWriteArrayList copyOnWriteArrayList = (CopyOnWriteArrayList) bVar.f18810e;
            Iterator it = copyOnWriteArrayList.iterator();
            while (it.hasNext()) {
                ie.e eVar = (ie.e) it.next();
                if (eVar.f10664b == aVar) {
                    eVar.f10665c = true;
                    copyOnWriteArrayList.remove(eVar);
                }
            }
            copyOnWriteArrayList.add(new ie.e(handler2, aVar));
            this.f5364m.add(this.f5374w);
            Context context = nVar.a;
            w wVar2 = this.f5374w;
            hc.b bVar2 = new hc.b();
            bVar2.a = context.getApplicationContext();
            bVar2.f9625c = new hc.a(bVar2, handler, wVar2);
            this.f5376y = bVar2;
            bVar2.d();
            this.f5377z = new hc.d(nVar.a, handler, this.f5374w);
            int i13 = d0.a;
            Context context2 = nVar.a;
            int i14 = 8;
            r8.c cVar = new r8.c(i14);
            this.A = cVar;
            Context context3 = nVar.a;
            wi.d dVar = new wi.d(i14);
            this.B = dVar;
            l lVar = new l(0);
            lVar.f9773b = 0;
            lVar.f9774c = 0;
            lVar.a();
            this.f5355e0 = VideoSize.f5575w;
            this.W = x.f13365c;
            r rVar2 = this.f5360h;
            AudioAttributes audioAttributes = this.Y;
            DefaultTrackSelector defaultTrackSelector = (DefaultTrackSelector) rVar2;
            synchronized (defaultTrackSelector.f5457d) {
                equals = defaultTrackSelector.j.equals(audioAttributes);
                defaultTrackSelector.j = audioAttributes;
            }
            if (!equals) {
                defaultTrackSelector.e();
            }
            o0(1, 10, Integer.valueOf(this.X));
            o0(2, 10, Integer.valueOf(this.X));
            o0(1, 3, this.Y);
            o0(2, 4, Integer.valueOf(this.V));
            o0(2, 5, 0);
            o0(1, 9, Boolean.valueOf(this.a0));
            o0(2, 7, this.f5375x);
            o0(6, 8, this.f5375x);
            this.f5352d.q();
        } catch (Throwable th2) {
            this.f5352d.q();
            throw th2;
        }
    }

    public static long i0(i1 i1Var) {
        Timeline.Window window = new Timeline.Window();
        s1 s1Var = new s1();
        i1Var.a.g(i1Var.f9732b.a, s1Var);
        long j = i1Var.f9733c;
        return j == -9223372036854775807L ? i1Var.a.m(s1Var.f9871i, window, 0L).J : s1Var.f9873w + j;
    }

    @Override // com.google.android.exoplayer2.Player
    public final c A() {
        x0();
        return this.f5359g0.f9736f;
    }

    @Override // com.google.android.exoplayer2.Player
    public final int C() {
        x0();
        if (c()) {
            return this.f5359g0.f9732b.f15167b;
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.Player
    public final int D() {
        x0();
        int h0 = h0(this.f5359g0);
        if (h0 == -1) {
            return 0;
        }
        return h0;
    }

    @Override // com.google.android.exoplayer2.Player
    public final void F(int i5) {
        x0();
        if (this.D != i5) {
            this.D = i5;
            a0 a0Var = this.k.E;
            a0Var.getClass();
            z b10 = a0.b();
            b10.a = a0Var.a.obtainMessage(11, i5, 0);
            b10.b();
            cd.b bVar = new cd.b(i5, 2);
            m mVar = this.f5363l;
            mVar.c(8, bVar);
            t0();
            mVar.b();
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final void G(SurfaceView surfaceView) {
        x0();
        SurfaceHolder holder = surfaceView == null ? null : surfaceView.getHolder();
        x0();
        if (holder == null || holder != this.R) {
            return;
        }
        d0();
    }

    @Override // com.google.android.exoplayer2.Player
    public final int H() {
        x0();
        return this.f5359g0.f9741m;
    }

    @Override // com.google.android.exoplayer2.Player
    public final int I() {
        x0();
        return this.D;
    }

    @Override // com.google.android.exoplayer2.Player
    public final Timeline J() {
        x0();
        return this.f5359g0.a;
    }

    @Override // com.google.android.exoplayer2.Player
    public final Looper K() {
        return this.f5369r;
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean L() {
        x0();
        return this.E;
    }

    @Override // com.google.android.exoplayer2.Player
    public final long M() {
        x0();
        if (this.f5359g0.a.p()) {
            return this.f5362i0;
        }
        i1 i1Var = this.f5359g0;
        if (i1Var.k.f15169d != i1Var.f9732b.f15169d) {
            return d0.U(i1Var.a.m(D(), this.a, 0L).K);
        }
        long j = i1Var.f9744p;
        if (this.f5359g0.k.a()) {
            i1 i1Var2 = this.f5359g0;
            s1 g6 = i1Var2.a.g(i1Var2.k.a, this.f5365n);
            long d6 = g6.d(this.f5359g0.k.f15167b);
            j = d6 == Long.MIN_VALUE ? g6.f9872v : d6;
        }
        i1 i1Var3 = this.f5359g0;
        Timeline timeline = i1Var3.a;
        Object obj = i1Var3.k.a;
        s1 s1Var = this.f5365n;
        timeline.g(obj, s1Var);
        return d0.U(j + s1Var.f9873w);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void P(TextureView textureView) {
        x0();
        if (textureView == null) {
            d0();
            return;
        }
        n0();
        this.U = textureView;
        if (textureView.getSurfaceTextureListener() != null) {
            ke.b.N("ExoPlayerImpl", "Replacing existing SurfaceTextureListener.");
        }
        textureView.setSurfaceTextureListener(this.f5374w);
        SurfaceTexture surfaceTexture = textureView.isAvailable() ? textureView.getSurfaceTexture() : null;
        if (surfaceTexture == null) {
            r0(null);
            l0(0, 0);
        } else {
            Surface surface = new Surface(surfaceTexture);
            r0(surface);
            this.Q = surface;
            l0(textureView.getWidth(), textureView.getHeight());
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final MediaMetadata R() {
        x0();
        return this.M;
    }

    @Override // com.google.android.exoplayer2.Player
    public final long S() {
        x0();
        return d0.U(g0(this.f5359g0));
    }

    @Override // com.google.android.exoplayer2.Player
    public final long T() {
        x0();
        return this.f5371t;
    }

    @Override // com.google.android.exoplayer2.Player
    public final void a() {
        x0();
        boolean g6 = g();
        int c6 = this.f5377z.c(2, g6);
        u0(c6, (!g6 || c6 == 1) ? 1 : 2, g6);
        i1 i1Var = this.f5359g0;
        if (i1Var.f9735e != 1) {
            return;
        }
        i1 e9 = i1Var.e(null);
        i1 g10 = e9.g(e9.a.p() ? 4 : 2);
        this.F++;
        a0 a0Var = this.k.E;
        a0Var.getClass();
        z b10 = a0.b();
        b10.a = a0Var.a.obtainMessage(0);
        b10.b();
        v0(g10, 1, 1, false, 5, -9223372036854775807L, -1, false);
    }

    @Override // com.google.android.exoplayer2.b
    public final void a0(int i5, long j, int i6, boolean z5) {
        x0();
        ke.b.g(i5 >= 0);
        ic.u uVar = (ic.u) this.f5368q;
        if (!uVar.F) {
            AnalyticsListener$EventTime c6 = uVar.c();
            uVar.F = true;
            uVar.k(c6, -1, new ic.i(c6, 0));
        }
        Timeline timeline = this.f5359g0.a;
        if (timeline.p() || i5 < timeline.o()) {
            this.F++;
            if (c()) {
                ke.b.N("ExoPlayerImpl", "seekTo ignored because an ad is playing");
                b0 b0Var = new b0(this.f5359g0);
                b0Var.a(1);
                d dVar = this.j.f9855d;
                dVar.f5361i.c(new com.mkuczera.haptic.a(6, dVar, b0Var));
                return;
            }
            i1 i1Var = this.f5359g0;
            int i10 = i1Var.f9735e;
            if (i10 == 3 || (i10 == 4 && !timeline.p())) {
                i1Var = this.f5359g0.g(2);
            }
            int D = D();
            i1 j02 = j0(i1Var, timeline, k0(timeline, i5, j));
            this.k.E.a(3, new hc.d0(timeline, i5, d0.I(j))).b();
            v0(j02, 0, 1, true, 1, g0(j02), D, z5);
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final PlaybackParameters b() {
        x0();
        return this.f5359g0.f9742n;
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean c() {
        x0();
        return this.f5359g0.f9732b.a();
    }

    public final MediaMetadata c0() {
        Timeline J = J();
        if (J.p()) {
            return this.f5357f0;
        }
        MediaItem mediaItem = J.m(D(), this.a, 0L).f5294i;
        u0 a = this.f5357f0.a();
        MediaMetadata mediaMetadata = mediaItem.f5238w;
        if (mediaMetadata != null) {
            CharSequence charSequence = mediaMetadata.f5263d;
            if (charSequence != null) {
                a.a = charSequence;
            }
            CharSequence charSequence2 = mediaMetadata.f5265e;
            if (charSequence2 != null) {
                a.f9894b = charSequence2;
            }
            CharSequence charSequence3 = mediaMetadata.f5267i;
            if (charSequence3 != null) {
                a.f9895c = charSequence3;
            }
            CharSequence charSequence4 = mediaMetadata.f5268v;
            if (charSequence4 != null) {
                a.f9896d = charSequence4;
            }
            CharSequence charSequence5 = mediaMetadata.f5269w;
            if (charSequence5 != null) {
                a.f9897e = charSequence5;
            }
            CharSequence charSequence6 = mediaMetadata.f5270x;
            if (charSequence6 != null) {
                a.f9898f = charSequence6;
            }
            CharSequence charSequence7 = mediaMetadata.f5271y;
            if (charSequence7 != null) {
                a.f9899g = charSequence7;
            }
            n1 n1Var = mediaMetadata.E;
            if (n1Var != null) {
                a.f9900h = n1Var;
            }
            n1 n1Var2 = mediaMetadata.F;
            if (n1Var2 != null) {
                a.f9901i = n1Var2;
            }
            byte[] bArr = mediaMetadata.G;
            if (bArr != null) {
                Integer num = mediaMetadata.H;
                a.j = (byte[]) bArr.clone();
                a.k = num;
            }
            Uri uri = mediaMetadata.I;
            if (uri != null) {
                a.f9902l = uri;
            }
            Integer num2 = mediaMetadata.J;
            if (num2 != null) {
                a.f9903m = num2;
            }
            Integer num3 = mediaMetadata.K;
            if (num3 != null) {
                a.f9904n = num3;
            }
            Integer num4 = mediaMetadata.L;
            if (num4 != null) {
                a.f9905o = num4;
            }
            Boolean bool = mediaMetadata.M;
            if (bool != null) {
                a.f9906p = bool;
            }
            Boolean bool2 = mediaMetadata.N;
            if (bool2 != null) {
                a.f9907q = bool2;
            }
            Integer num5 = mediaMetadata.O;
            if (num5 != null) {
                a.f9908r = num5;
            }
            Integer num6 = mediaMetadata.P;
            if (num6 != null) {
                a.f9908r = num6;
            }
            Integer num7 = mediaMetadata.Q;
            if (num7 != null) {
                a.f9909s = num7;
            }
            Integer num8 = mediaMetadata.R;
            if (num8 != null) {
                a.f9910t = num8;
            }
            Integer num9 = mediaMetadata.S;
            if (num9 != null) {
                a.f9911u = num9;
            }
            Integer num10 = mediaMetadata.T;
            if (num10 != null) {
                a.f9912v = num10;
            }
            Integer num11 = mediaMetadata.U;
            if (num11 != null) {
                a.f9913w = num11;
            }
            CharSequence charSequence8 = mediaMetadata.V;
            if (charSequence8 != null) {
                a.f9914x = charSequence8;
            }
            CharSequence charSequence9 = mediaMetadata.W;
            if (charSequence9 != null) {
                a.f9915y = charSequence9;
            }
            CharSequence charSequence10 = mediaMetadata.X;
            if (charSequence10 != null) {
                a.f9916z = charSequence10;
            }
            Integer num12 = mediaMetadata.Y;
            if (num12 != null) {
                a.A = num12;
            }
            Integer num13 = mediaMetadata.Z;
            if (num13 != null) {
                a.B = num13;
            }
            CharSequence charSequence11 = mediaMetadata.a0;
            if (charSequence11 != null) {
                a.C = charSequence11;
            }
            CharSequence charSequence12 = mediaMetadata.f5261b0;
            if (charSequence12 != null) {
                a.D = charSequence12;
            }
            CharSequence charSequence13 = mediaMetadata.f5262c0;
            if (charSequence13 != null) {
                a.E = charSequence13;
            }
            Integer num14 = mediaMetadata.f5264d0;
            if (num14 != null) {
                a.F = num14;
            }
            Bundle bundle = mediaMetadata.f5266e0;
            if (bundle != null) {
                a.G = bundle;
            }
        }
        return new MediaMetadata(a);
    }

    @Override // com.google.android.exoplayer2.Player
    public final long d() {
        x0();
        return d0.U(this.f5359g0.f9745q);
    }

    public final void d0() {
        x0();
        n0();
        r0(null);
        l0(0, 0);
    }

    public final l1 e0(k1 k1Var) {
        int h0 = h0(this.f5359g0);
        Timeline timeline = this.f5359g0.a;
        if (h0 == -1) {
            h0 = 0;
        }
        y yVar = this.f5373v;
        e eVar = this.k;
        return new l1(eVar, k1Var, timeline, h0, yVar, eVar.G);
    }

    @Override // com.google.android.exoplayer2.Player
    public final Player.Commands f() {
        x0();
        return this.L;
    }

    public final long f0(i1 i1Var) {
        nd.s sVar = i1Var.f9732b;
        long j = i1Var.f9733c;
        Timeline timeline = i1Var.a;
        if (!sVar.a()) {
            return d0.U(g0(i1Var));
        }
        Object obj = i1Var.f9732b.a;
        s1 s1Var = this.f5365n;
        timeline.g(obj, s1Var);
        if (j == -9223372036854775807L) {
            return d0.U(timeline.m(h0(i1Var), this.a, 0L).J);
        }
        return d0.U(j) + d0.U(s1Var.f9873w);
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean g() {
        x0();
        return this.f5359g0.f9740l;
    }

    public final long g0(i1 i1Var) {
        if (i1Var.a.p()) {
            return d0.I(this.f5362i0);
        }
        long j = i1Var.f9743o ? i1Var.j() : i1Var.f9746r;
        if (i1Var.f9732b.a()) {
            return j;
        }
        Timeline timeline = i1Var.a;
        Object obj = i1Var.f9732b.a;
        s1 s1Var = this.f5365n;
        timeline.g(obj, s1Var);
        return j + s1Var.f9873w;
    }

    @Override // com.google.android.exoplayer2.Player
    public final long getDuration() {
        x0();
        if (!c()) {
            Timeline J = J();
            if (J.p()) {
                return -9223372036854775807L;
            }
            return d0.U(J.m(D(), this.a, 0L).K);
        }
        i1 i1Var = this.f5359g0;
        nd.s sVar = i1Var.f9732b;
        Timeline timeline = i1Var.a;
        Object obj = sVar.a;
        s1 s1Var = this.f5365n;
        timeline.g(obj, s1Var);
        return d0.U(s1Var.a(sVar.f15167b, sVar.f15168c));
    }

    @Override // com.google.android.exoplayer2.Player
    public final void h(boolean z5) {
        x0();
        if (this.E != z5) {
            this.E = z5;
            a0 a0Var = this.k.E;
            a0Var.getClass();
            z b10 = a0.b();
            b10.a = a0Var.a.obtainMessage(12, z5 ? 1 : 0, 0);
            b10.b();
            t tVar = new t(z5, 0);
            m mVar = this.f5363l;
            mVar.c(9, tVar);
            t0();
            mVar.b();
        }
    }

    public final int h0(i1 i1Var) {
        return i1Var.a.p() ? this.h0 : i1Var.a.g(i1Var.f9732b.a, this.f5365n).f9871i;
    }

    @Override // com.google.android.exoplayer2.Player
    public final void i() {
        x0();
    }

    @Override // com.google.android.exoplayer2.Player
    public final int j() {
        x0();
        if (this.f5359g0.a.p()) {
            return 0;
        }
        i1 i1Var = this.f5359g0;
        return i1Var.a.b(i1Var.f9732b.a);
    }

    public final i1 j0(i1 i1Var, Timeline timeline, Pair pair) {
        List list;
        ke.b.g(timeline.p() || pair != null);
        Timeline timeline2 = i1Var.a;
        long f02 = f0(i1Var);
        i1 h6 = i1Var.h(timeline);
        if (timeline.p()) {
            nd.s sVar = i1.f9731t;
            long I = d0.I(this.f5362i0);
            i1 b10 = h6.c(sVar, I, I, I, 0L, a1.f15063v, this.f5348b, r0.f8704w).b(sVar);
            b10.f9744p = b10.f9746r;
            return b10;
        }
        Object obj = h6.f9732b.a;
        int i5 = d0.a;
        boolean equals = obj.equals(pair.first);
        nd.s sVar2 = !equals ? new nd.s(pair.first) : h6.f9732b;
        long longValue = ((Long) pair.second).longValue();
        long I2 = d0.I(f02);
        if (!timeline2.p()) {
            I2 -= timeline2.g(obj, this.f5365n).f9873w;
        }
        if (!equals || longValue < I2) {
            nd.s sVar3 = sVar2;
            ke.b.k(!sVar3.a());
            a1 a1Var = !equals ? a1.f15063v : h6.f9738h;
            u uVar = !equals ? this.f5348b : h6.f9739i;
            if (equals) {
                list = h6.j;
            } else {
                fi.c0 c0Var = fi.e0.f8656e;
                list = r0.f8704w;
            }
            i1 b11 = h6.c(sVar3, longValue, longValue, longValue, 0L, a1Var, uVar, list).b(sVar3);
            b11.f9744p = longValue;
            return b11;
        }
        if (longValue != I2) {
            nd.s sVar4 = sVar2;
            ke.b.k(!sVar4.a());
            long max = Math.max(0L, h6.f9745q - (longValue - I2));
            long j = h6.f9744p;
            if (h6.k.equals(h6.f9732b)) {
                j = longValue + max;
            }
            i1 c6 = h6.c(sVar4, longValue, longValue, longValue, max, h6.f9738h, h6.f9739i, h6.j);
            c6.f9744p = j;
            return c6;
        }
        int b12 = timeline.b(h6.k.a);
        if (b12 != -1 && timeline.f(b12, this.f5365n, false).f9871i == timeline.g(sVar2.a, this.f5365n).f9871i) {
            return h6;
        }
        timeline.g(sVar2.a, this.f5365n);
        long a = sVar2.a() ? this.f5365n.a(sVar2.f15167b, sVar2.f15168c) : this.f5365n.f9872v;
        nd.s sVar5 = sVar2;
        i1 b13 = h6.c(sVar5, h6.f9746r, h6.f9746r, h6.f9734d, a - h6.f9746r, h6.f9738h, h6.f9739i, h6.j).b(sVar5);
        b13.f9744p = a;
        return b13;
    }

    @Override // com.google.android.exoplayer2.Player
    public final void k(TextureView textureView) {
        x0();
        if (textureView == null || textureView != this.U) {
            return;
        }
        d0();
    }

    public final Pair k0(Timeline timeline, int i5, long j) {
        if (timeline.p()) {
            this.h0 = i5;
            if (j == -9223372036854775807L) {
                j = 0;
            }
            this.f5362i0 = j;
            return null;
        }
        if (i5 == -1 || i5 >= timeline.o()) {
            i5 = timeline.a(this.E);
            j = d0.U(timeline.m(i5, this.a, 0L).J);
        }
        return timeline.i(this.a, this.f5365n, i5, d0.I(j));
    }

    @Override // com.google.android.exoplayer2.Player
    public final VideoSize l() {
        x0();
        return this.f5355e0;
    }

    public final void l0(final int i5, final int i6) {
        x xVar = this.W;
        if (i5 == xVar.a && i6 == xVar.f13366b) {
            return;
        }
        this.W = new x(i5, i6);
        this.f5363l.e(24, new ke.j() { // from class: hc.s
            @Override // ke.j
            public final void invoke(Object obj) {
                ((com.google.android.exoplayer2.h) obj).onSurfaceSizeChanged(i5, i6);
            }
        });
        o0(2, 14, new x(i5, i6));
    }

    @Override // com.google.android.exoplayer2.Player
    public final void m(h hVar) {
        x0();
        hVar.getClass();
        m mVar = this.f5363l;
        mVar.f();
        CopyOnWriteArraySet copyOnWriteArraySet = mVar.f13319d;
        Iterator it = copyOnWriteArraySet.iterator();
        while (it.hasNext()) {
            ke.l lVar = (ke.l) it.next();
            if (lVar.a.equals(hVar)) {
                ke.k kVar = mVar.f13318c;
                lVar.f13316d = true;
                if (lVar.f13315c) {
                    lVar.f13315c = false;
                    kVar.d(lVar.a, lVar.f13314b.k());
                }
                copyOnWriteArraySet.remove(lVar);
            }
        }
    }

    public final void m0(int i5) {
        for (int i6 = i5 - 1; i6 >= 0; i6--) {
            this.f5366o.remove(i6);
        }
        t0 t0Var = this.K;
        int[] iArr = t0Var.f15171b;
        int[] iArr2 = new int[iArr.length - i5];
        int i10 = 0;
        for (int i11 = 0; i11 < iArr.length; i11++) {
            int i12 = iArr[i11];
            if (i12 < 0 || i12 >= i5) {
                int i13 = i11 - i10;
                if (i12 >= 0) {
                    i12 -= i5;
                }
                iArr2[i13] = i12;
            } else {
                i10++;
            }
        }
        this.K = new t0(iArr2, new Random(t0Var.a.nextLong()));
    }

    public final void n0() {
        k kVar = this.S;
        w wVar = this.f5374w;
        if (kVar != null) {
            l1 e02 = e0(this.f5375x);
            ke.b.k(!e02.f9780g);
            e02.f9777d = 10000;
            ke.b.k(!e02.f9780g);
            e02.f9778e = null;
            e02.c();
            this.S.f14479d.remove(wVar);
            this.S = null;
        }
        TextureView textureView = this.U;
        if (textureView != null) {
            if (textureView.getSurfaceTextureListener() != wVar) {
                ke.b.N("ExoPlayerImpl", "SurfaceTextureListener already unset or replaced.");
            } else {
                this.U.setSurfaceTextureListener(null);
            }
            this.U = null;
        }
        SurfaceHolder surfaceHolder = this.R;
        if (surfaceHolder != null) {
            surfaceHolder.removeCallback(wVar);
            this.R = null;
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final int o() {
        x0();
        if (c()) {
            return this.f5359g0.f9732b.f15168c;
        }
        return -1;
    }

    public final void o0(int i5, int i6, Object obj) {
        for (hc.e eVar : this.f5358g) {
            if (eVar.f9659e == i5) {
                l1 e02 = e0(eVar);
                ke.b.k(!e02.f9780g);
                e02.f9777d = i6;
                ke.b.k(!e02.f9780g);
                e02.f9778e = obj;
                e02.c();
            }
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final void p(SurfaceView surfaceView) {
        x0();
        if (surfaceView instanceof le.n) {
            n0();
            r0(surfaceView);
            q0(surfaceView.getHolder());
            return;
        }
        boolean z5 = surfaceView instanceof k;
        w wVar = this.f5374w;
        if (z5) {
            n0();
            this.S = (k) surfaceView;
            l1 e02 = e0(this.f5375x);
            ke.b.k(!e02.f9780g);
            e02.f9777d = 10000;
            k kVar = this.S;
            ke.b.k(true ^ e02.f9780g);
            e02.f9778e = kVar;
            e02.c();
            this.S.f14479d.add(wVar);
            r0(this.S.getVideoSurface());
            q0(surfaceView.getHolder());
            return;
        }
        SurfaceHolder holder = surfaceView == null ? null : surfaceView.getHolder();
        x0();
        if (holder == null) {
            d0();
            return;
        }
        n0();
        this.T = true;
        this.R = holder;
        holder.addCallback(wVar);
        Surface surface = holder.getSurface();
        if (surface == null || !surface.isValid()) {
            r0(null);
            l0(0, 0);
        } else {
            r0(surface);
            Rect surfaceFrame = holder.getSurfaceFrame();
            l0(surfaceFrame.width(), surfaceFrame.height());
        }
    }

    public final void p0(List list, boolean z5) {
        x0();
        int h0 = h0(this.f5359g0);
        long S = S();
        this.F++;
        ArrayList arrayList = this.f5366o;
        if (!arrayList.isEmpty()) {
            m0(arrayList.size());
        }
        ArrayList arrayList2 = new ArrayList();
        for (int i5 = 0; i5 < list.size(); i5++) {
            e1 e1Var = new e1((nd.a) list.get(i5), this.f5367p);
            arrayList2.add(e1Var);
            arrayList.add(i5, new hc.y(e1Var.f9666b, e1Var.a.L));
        }
        this.K = this.K.a(arrayList2.size());
        m1 m1Var = new m1(arrayList, this.K);
        boolean p3 = m1Var.p();
        int i6 = m1Var.f9792w;
        if (!p3 && -1 >= i6) {
            throw new hc.h0();
        }
        if (z5) {
            h0 = m1Var.a(this.E);
            S = -9223372036854775807L;
        }
        i1 j02 = j0(this.f5359g0, m1Var, k0(m1Var, h0, S));
        int i10 = j02.f9735e;
        if (h0 != -1 && i10 != 1) {
            i10 = (m1Var.p() || h0 >= i6) ? 4 : 2;
        }
        i1 g6 = j02.g(i10);
        this.k.E.a(17, new hc.a0(arrayList2, this.K, h0, d0.I(S))).b();
        v0(g6, 0, 1, (this.f5359g0.f9732b.a.equals(g6.f9732b.a) || this.f5359g0.a.p()) ? false : true, 4, g0(g6), -1, false);
    }

    public final void q0(SurfaceHolder surfaceHolder) {
        this.T = false;
        this.R = surfaceHolder;
        surfaceHolder.addCallback(this.f5374w);
        Surface surface = this.R.getSurface();
        if (surface == null || !surface.isValid()) {
            l0(0, 0);
        } else {
            Rect surfaceFrame = this.R.getSurfaceFrame();
            l0(surfaceFrame.width(), surfaceFrame.height());
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final void r(boolean z5) {
        x0();
        int c6 = this.f5377z.c(w(), z5);
        int i5 = 1;
        if (z5 && c6 != 1) {
            i5 = 2;
        }
        u0(c6, i5, z5);
    }

    public final void r0(Object obj) {
        ArrayList arrayList = new ArrayList();
        boolean z5 = false;
        for (hc.e eVar : this.f5358g) {
            if (eVar.f9659e == 2) {
                l1 e02 = e0(eVar);
                ke.b.k(!e02.f9780g);
                e02.f9777d = 1;
                ke.b.k(true ^ e02.f9780g);
                e02.f9778e = obj;
                e02.c();
                arrayList.add(e02);
            }
        }
        Object obj2 = this.P;
        if (obj2 != null && obj2 != obj) {
            try {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    ((l1) it.next()).a(this.C);
                }
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
            } catch (TimeoutException unused2) {
                z5 = true;
            }
            Object obj3 = this.P;
            Surface surface = this.Q;
            if (obj3 == surface) {
                surface.release();
                this.Q = null;
            }
        }
        this.P = obj;
        if (z5) {
            s0(new c(2, new ai.k("Detaching surface timed out."), 1003));
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final long s() {
        x0();
        return this.f5372u;
    }

    public final void s0(c cVar) {
        i1 i1Var = this.f5359g0;
        i1 b10 = i1Var.b(i1Var.f9732b);
        b10.f9744p = b10.f9746r;
        b10.f9745q = 0L;
        i1 g6 = b10.g(1);
        if (cVar != null) {
            g6 = g6.e(cVar);
        }
        i1 i1Var2 = g6;
        this.F++;
        a0 a0Var = this.k.E;
        a0Var.getClass();
        z b11 = a0.b();
        b11.a = a0Var.a.obtainMessage(6);
        b11.b();
        v0(i1Var2, 0, 1, false, 5, -9223372036854775807L, -1, false);
    }

    @Override // com.google.android.exoplayer2.Player
    public final long t() {
        x0();
        return f0(this.f5359g0);
    }

    public final void t0() {
        Player.Commands commands = this.L;
        int i5 = d0.a;
        b bVar = this.f5356f;
        boolean c6 = bVar.c();
        boolean Z = bVar.Z();
        boolean W = bVar.W();
        boolean V = bVar.V();
        boolean Y = bVar.Y();
        boolean X = bVar.X();
        boolean p3 = bVar.J().p();
        g gVar = new g();
        ke.g gVar2 = this.f5350c.f5278d;
        h0 h0Var = gVar.a;
        h0Var.getClass();
        boolean z5 = false;
        for (int i6 = 0; i6 < gVar2.a.size(); i6++) {
            h0Var.e(gVar2.a(i6));
        }
        boolean z6 = !c6;
        gVar.a(4, z6);
        gVar.a(5, Z && !c6);
        gVar.a(6, W && !c6);
        gVar.a(7, !p3 && (W || !Y || Z) && !c6);
        gVar.a(8, V && !c6);
        gVar.a(9, !p3 && (V || (Y && X)) && !c6);
        gVar.a(10, z6);
        gVar.a(11, Z && !c6);
        if (Z && !c6) {
            z5 = true;
        }
        gVar.a(12, z5);
        Player.Commands commands2 = new Player.Commands(h0Var.k());
        this.L = commands2;
        if (commands2.equals(commands)) {
            return;
        }
        this.f5363l.c(13, new hc.r(this));
    }

    @Override // com.google.android.exoplayer2.Player
    public final void u(h hVar) {
        hVar.getClass();
        this.f5363l.a(hVar);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r15v1 */
    /* JADX WARN: Type inference failed for: r15v2, types: [boolean, int] */
    /* JADX WARN: Type inference failed for: r15v4 */
    public final void u0(int i5, int i6, boolean z5) {
        int i10 = 0;
        ?? r15 = (!z5 || i5 == -1) ? 0 : 1;
        if (r15 != 0 && i5 != 1) {
            i10 = 1;
        }
        i1 i1Var = this.f5359g0;
        if (i1Var.f9740l == r15 && i1Var.f9741m == i10) {
            return;
        }
        this.F++;
        boolean z6 = i1Var.f9743o;
        i1 i1Var2 = i1Var;
        if (z6) {
            i1Var2 = i1Var.a();
        }
        i1 d6 = i1Var2.d(i10, r15);
        a0 a0Var = this.k.E;
        a0Var.getClass();
        z b10 = a0.b();
        b10.a = a0Var.a.obtainMessage(1, r15, i10);
        b10.b();
        v0(d6, 0, i6, false, 5, -9223372036854775807L, -1, false);
    }

    @Override // com.google.android.exoplayer2.Player
    public final long v() {
        x0();
        if (!c()) {
            return M();
        }
        i1 i1Var = this.f5359g0;
        return i1Var.k.equals(i1Var.f9732b) ? d0.U(this.f5359g0.f9744p) : getDuration();
    }

    public final void v0(final i1 i1Var, final int i5, final int i6, boolean z5, int i10, long j, int i11, boolean z6) {
        Pair pair;
        int i12;
        MediaItem mediaItem;
        boolean z7;
        boolean z8;
        boolean z10;
        int i13;
        Object obj;
        MediaItem mediaItem2;
        Object obj2;
        int i14;
        long j5;
        long j7;
        long j10;
        long i02;
        Object obj3;
        MediaItem mediaItem3;
        Object obj4;
        int i15;
        i1 i1Var2 = this.f5359g0;
        this.f5359g0 = i1Var;
        boolean equals = i1Var2.a.equals(i1Var.a);
        Timeline.Window window = this.a;
        s1 s1Var = this.f5365n;
        Timeline timeline = i1Var2.a;
        nd.s sVar = i1Var2.f9732b;
        Timeline timeline2 = i1Var.a;
        nd.s sVar2 = i1Var.f9732b;
        if (timeline2.p() && timeline.p()) {
            pair = new Pair(Boolean.FALSE, -1);
        } else if (timeline2.p() != timeline.p()) {
            pair = new Pair(Boolean.TRUE, 3);
        } else if (timeline.m(timeline.g(sVar.a, s1Var).f9871i, window, 0L).f5292d.equals(timeline2.m(timeline2.g(sVar2.a, s1Var).f9871i, window, 0L).f5292d)) {
            pair = (z5 && i10 == 0 && sVar.f15169d < sVar2.f15169d) ? new Pair(Boolean.TRUE, 0) : (z5 && i10 == 1 && z6) ? new Pair(Boolean.TRUE, 2) : new Pair(Boolean.FALSE, -1);
        } else {
            if (z5 && i10 == 0) {
                i12 = 1;
            } else if (z5 && i10 == 1) {
                i12 = 2;
            } else {
                if (equals) {
                    throw new IllegalStateException();
                }
                i12 = 3;
            }
            pair = new Pair(Boolean.TRUE, Integer.valueOf(i12));
        }
        boolean booleanValue = ((Boolean) pair.first).booleanValue();
        int intValue = ((Integer) pair.second).intValue();
        MediaMetadata mediaMetadata = this.M;
        if (booleanValue) {
            mediaItem = !i1Var.a.p() ? i1Var.a.m(i1Var.a.g(i1Var.f9732b.a, this.f5365n).f9871i, this.a, 0L).f5294i : null;
            this.f5357f0 = MediaMetadata.f5241f0;
        } else {
            mediaItem = null;
        }
        if (booleanValue || !i1Var2.j.equals(i1Var.j)) {
            u0 a = this.f5357f0.a();
            List list = i1Var.j;
            for (int i16 = 0; i16 < list.size(); i16++) {
                Metadata metadata = (Metadata) list.get(i16);
                int i17 = 0;
                while (true) {
                    dd.b[] bVarArr = metadata.f5427d;
                    if (i17 < bVarArr.length) {
                        bVarArr[i17].o(a);
                        i17++;
                    }
                }
            }
            this.f5357f0 = new MediaMetadata(a);
            mediaMetadata = c0();
        }
        boolean equals2 = mediaMetadata.equals(this.M);
        this.M = mediaMetadata;
        boolean z11 = i1Var2.f9740l != i1Var.f9740l;
        boolean z12 = i1Var2.f9735e != i1Var.f9735e;
        if (z12 || z11) {
            w0();
        }
        boolean z13 = i1Var2.f9737g != i1Var.f9737g;
        if (!equals) {
            final int i18 = 0;
            this.f5363l.c(0, new ke.j() { // from class: hc.o
                @Override // ke.j
                public final void invoke(Object obj5) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj5;
                    switch (i18) {
                        case 0:
                            hVar.onTimelineChanged(i1Var.a, i5);
                            break;
                        default:
                            hVar.onPlayWhenReadyChanged(i1Var.f9740l, i5);
                            break;
                    }
                }
            });
        }
        if (z5) {
            s1 s1Var2 = new s1();
            if (i1Var2.a.p()) {
                z7 = booleanValue;
                z8 = z11;
                z10 = equals2;
                i13 = i11;
                obj = null;
                mediaItem2 = null;
                obj2 = null;
                i14 = -1;
            } else {
                Object obj5 = i1Var2.f9732b.a;
                i1Var2.a.g(obj5, s1Var2);
                int i19 = s1Var2.f9871i;
                int b10 = i1Var2.a.b(obj5);
                z7 = booleanValue;
                z8 = z11;
                z10 = equals2;
                obj = i1Var2.a.m(i19, this.a, 0L).f5292d;
                mediaItem2 = this.a.f5294i;
                obj2 = obj5;
                i13 = i19;
                i14 = b10;
            }
            if (i10 == 0) {
                if (i1Var2.f9732b.a()) {
                    nd.s sVar3 = i1Var2.f9732b;
                    j10 = s1Var2.a(sVar3.f15167b, sVar3.f15168c);
                    i02 = i0(i1Var2);
                } else if (i1Var2.f9732b.f15170e != -1) {
                    j10 = i0(this.f5359g0);
                    i02 = j10;
                } else {
                    j5 = s1Var2.f9873w;
                    j7 = s1Var2.f9872v;
                    j10 = j5 + j7;
                    i02 = j10;
                }
            } else if (i1Var2.f9732b.a()) {
                j10 = i1Var2.f9746r;
                i02 = i0(i1Var2);
            } else {
                j5 = s1Var2.f9873w;
                j7 = i1Var2.f9746r;
                j10 = j5 + j7;
                i02 = j10;
            }
            long U = d0.U(j10);
            long U2 = d0.U(i02);
            nd.s sVar4 = i1Var2.f9732b;
            Player.PositionInfo positionInfo = new Player.PositionInfo(obj, i13, mediaItem2, obj2, i14, U, U2, sVar4.f15167b, sVar4.f15168c);
            Timeline.Window window2 = this.a;
            int D = D();
            if (this.f5359g0.a.p()) {
                obj3 = null;
                mediaItem3 = null;
                obj4 = null;
                i15 = -1;
            } else {
                i1 i1Var3 = this.f5359g0;
                Object obj6 = i1Var3.f9732b.a;
                i1Var3.a.g(obj6, this.f5365n);
                int b11 = this.f5359g0.a.b(obj6);
                Object obj7 = this.f5359g0.a.m(D, window2, 0L).f5292d;
                mediaItem3 = window2.f5294i;
                i15 = b11;
                obj4 = obj6;
                obj3 = obj7;
            }
            long U3 = d0.U(j);
            long U4 = this.f5359g0.f9732b.a() ? d0.U(i0(this.f5359g0)) : U3;
            nd.s sVar5 = this.f5359g0.f9732b;
            this.f5363l.c(11, new cc.f(positionInfo, new Player.PositionInfo(obj3, D, mediaItem3, obj4, i15, U3, U4, sVar5.f15167b, sVar5.f15168c), i10));
        } else {
            z7 = booleanValue;
            z8 = z11;
            z10 = equals2;
        }
        if (z7) {
            this.f5363l.c(1, new hc.u(intValue, mediaItem));
        }
        if (i1Var2.f9736f != i1Var.f9736f) {
            final int i20 = 6;
            this.f5363l.c(10, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj8) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj8;
                    switch (i20) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
            if (i1Var.f9736f != null) {
                final int i21 = 7;
                this.f5363l.c(10, new ke.j() { // from class: hc.p
                    @Override // ke.j
                    public final void invoke(Object obj8) {
                        com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj8;
                        switch (i21) {
                            case 0:
                                i1 i1Var4 = i1Var;
                                hVar.onLoadingChanged(i1Var4.f9737g);
                                hVar.onIsLoadingChanged(i1Var4.f9737g);
                                break;
                            case 1:
                                i1 i1Var5 = i1Var;
                                hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                                break;
                            case 2:
                                hVar.onPlaybackStateChanged(i1Var.f9735e);
                                break;
                            case 3:
                                hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                                break;
                            case 4:
                                hVar.onIsPlayingChanged(i1Var.k());
                                break;
                            case 5:
                                hVar.onPlaybackParametersChanged(i1Var.f9742n);
                                break;
                            case 6:
                                hVar.onPlayerErrorChanged(i1Var.f9736f);
                                break;
                            case 7:
                                hVar.onPlayerError(i1Var.f9736f);
                                break;
                            default:
                                hVar.onTracksChanged(i1Var.f9739i.f9232d);
                                break;
                        }
                    }
                });
            }
        }
        u uVar = i1Var2.f9739i;
        u uVar2 = i1Var.f9739i;
        if (uVar != uVar2) {
            r rVar = this.f5360h;
            Object obj8 = uVar2.f9233e;
            rVar.getClass();
            rVar.f9202c = (MappingTrackSelector$MappedTrackInfo) obj8;
            final int i22 = 8;
            this.f5363l.c(2, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj82) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj82;
                    switch (i22) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
        }
        if (!z10) {
            this.f5363l.c(14, new hc.m(1, this.M));
        }
        if (z13) {
            final int i23 = 0;
            this.f5363l.c(3, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj82) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj82;
                    switch (i23) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
        }
        if (z12 || z8) {
            final int i24 = 1;
            this.f5363l.c(-1, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj82) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj82;
                    switch (i24) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
        }
        if (z12) {
            final int i25 = 2;
            this.f5363l.c(4, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj82) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj82;
                    switch (i25) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
        }
        if (z8) {
            final int i26 = 1;
            this.f5363l.c(5, new ke.j() { // from class: hc.o
                @Override // ke.j
                public final void invoke(Object obj52) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj52;
                    switch (i26) {
                        case 0:
                            hVar.onTimelineChanged(i1Var.a, i6);
                            break;
                        default:
                            hVar.onPlayWhenReadyChanged(i1Var.f9740l, i6);
                            break;
                    }
                }
            });
        }
        if (i1Var2.f9741m != i1Var.f9741m) {
            final int i27 = 3;
            this.f5363l.c(6, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj82) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj82;
                    switch (i27) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
        }
        if (i1Var2.k() != i1Var.k()) {
            final int i28 = 4;
            this.f5363l.c(7, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj82) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj82;
                    switch (i28) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
        }
        if (!i1Var2.f9742n.equals(i1Var.f9742n)) {
            final int i29 = 5;
            this.f5363l.c(12, new ke.j() { // from class: hc.p
                @Override // ke.j
                public final void invoke(Object obj82) {
                    com.google.android.exoplayer2.h hVar = (com.google.android.exoplayer2.h) obj82;
                    switch (i29) {
                        case 0:
                            i1 i1Var4 = i1Var;
                            hVar.onLoadingChanged(i1Var4.f9737g);
                            hVar.onIsLoadingChanged(i1Var4.f9737g);
                            break;
                        case 1:
                            i1 i1Var5 = i1Var;
                            hVar.onPlayerStateChanged(i1Var5.f9740l, i1Var5.f9735e);
                            break;
                        case 2:
                            hVar.onPlaybackStateChanged(i1Var.f9735e);
                            break;
                        case 3:
                            hVar.onPlaybackSuppressionReasonChanged(i1Var.f9741m);
                            break;
                        case 4:
                            hVar.onIsPlayingChanged(i1Var.k());
                            break;
                        case 5:
                            hVar.onPlaybackParametersChanged(i1Var.f9742n);
                            break;
                        case 6:
                            hVar.onPlayerErrorChanged(i1Var.f9736f);
                            break;
                        case 7:
                            hVar.onPlayerError(i1Var.f9736f);
                            break;
                        default:
                            hVar.onTracksChanged(i1Var.f9739i.f9232d);
                            break;
                    }
                }
            });
        }
        t0();
        this.f5363l.b();
        if (i1Var2.f9743o != i1Var.f9743o) {
            Iterator it = this.f5364m.iterator();
            while (it.hasNext()) {
                ((w) it.next()).f9929d.w0();
            }
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final int w() {
        x0();
        return this.f5359g0.f9735e;
    }

    public final void w0() {
        int w5 = w();
        wi.d dVar = this.B;
        r8.c cVar = this.A;
        if (w5 != 1) {
            if (w5 == 2 || w5 == 3) {
                x0();
                boolean z5 = this.f5359g0.f9743o;
                g();
                cVar.getClass();
                g();
                dVar.getClass();
                return;
            }
            if (w5 != 4) {
                throw new IllegalStateException();
            }
        }
        cVar.getClass();
        dVar.getClass();
    }

    @Override // com.google.android.exoplayer2.Player
    public final Tracks x() {
        x0();
        return this.f5359g0.f9739i.f9232d;
    }

    public final void x0() {
        this.f5352d.j();
        Thread currentThread = Thread.currentThread();
        Looper looper = this.f5369r;
        if (currentThread != looper.getThread()) {
            String name = Thread.currentThread().getName();
            String name2 = looper.getThread().getName();
            int i5 = d0.a;
            Locale locale = Locale.US;
            String g6 = s4.h.g("Player is accessed on the wrong thread.\nCurrent thread: '", name, "'\nExpected thread: '", name2, "'\nSee https://developer.android.com/guide/topics/media/issues/player-accessed-on-wrong-thread");
            if (this.f5351c0) {
                throw new IllegalStateException(g6);
            }
            ke.b.O("ExoPlayerImpl", g6, this.f5353d0 ? null : new IllegalStateException());
            this.f5353d0 = true;
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final CueGroup z() {
        x0();
        return this.f5349b0;
    }
}
