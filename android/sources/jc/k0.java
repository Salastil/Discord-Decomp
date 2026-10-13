package jc;

import android.content.Context;
import android.content.IntentFilter;
import android.media.AudioFormat;
import android.media.AudioManager;
import android.media.AudioTrack;
import android.media.PlaybackParams;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.util.Pair;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.audio.AudioAttributes;
import java.math.RoundingMode;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.ArrayDeque;
import java.util.Objects;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: classes3.dex */
public final class k0 implements u {

    /* renamed from: g0, reason: collision with root package name */
    public static final Object f12542g0 = new Object();
    public static ExecutorService h0;

    /* renamed from: i0, reason: collision with root package name */
    public static int f12543i0;
    public g0 A;
    public PlaybackParameters B;
    public boolean C;
    public ByteBuffer D;
    public int E;
    public long F;
    public long G;
    public long H;
    public long I;
    public int J;
    public boolean K;
    public boolean L;
    public long M;
    public float N;
    public ByteBuffer O;
    public int P;
    public ByteBuffer Q;
    public byte[] R;
    public int S;
    public boolean T;
    public boolean U;
    public boolean V;
    public boolean W;
    public int X;
    public y Y;
    public e0 Z;
    public final Context a;
    public boolean a0;

    /* renamed from: b, reason: collision with root package name */
    public final e4.m f12544b;

    /* renamed from: b0, reason: collision with root package name */
    public long f12545b0;

    /* renamed from: c, reason: collision with root package name */
    public final boolean f12546c;

    /* renamed from: c0, reason: collision with root package name */
    public long f12547c0;

    /* renamed from: d, reason: collision with root package name */
    public final a0 f12548d;

    /* renamed from: d0, reason: collision with root package name */
    public boolean f12549d0;

    /* renamed from: e, reason: collision with root package name */
    public final v0 f12550e;

    /* renamed from: e0, reason: collision with root package name */
    public boolean f12551e0;

    /* renamed from: f, reason: collision with root package name */
    public final fi.r0 f12552f;

    /* renamed from: f0, reason: collision with root package name */
    public Looper f12553f0;

    /* renamed from: g, reason: collision with root package name */
    public final fi.r0 f12554g;

    /* renamed from: h, reason: collision with root package name */
    public final a5.h0 f12555h;

    /* renamed from: i, reason: collision with root package name */
    public final x f12556i;
    public final ArrayDeque j;
    public final boolean k;

    /* renamed from: l, reason: collision with root package name */
    public final int f12557l;

    /* renamed from: m, reason: collision with root package name */
    public j0 f12558m;

    /* renamed from: n, reason: collision with root package name */
    public final androidx.recyclerview.widget.h f12559n;

    /* renamed from: o, reason: collision with root package name */
    public final androidx.recyclerview.widget.h f12560o;

    /* renamed from: p, reason: collision with root package name */
    public final l0 f12561p;

    /* renamed from: q, reason: collision with root package name */
    public ic.c0 f12562q;

    /* renamed from: r, reason: collision with root package name */
    public ve.i f12563r;

    /* renamed from: s, reason: collision with root package name */
    public f0 f12564s;

    /* renamed from: t, reason: collision with root package name */
    public f0 f12565t;

    /* renamed from: u, reason: collision with root package name */
    public k f12566u;

    /* renamed from: v, reason: collision with root package name */
    public AudioTrack f12567v;

    /* renamed from: w, reason: collision with root package name */
    public f f12568w;

    /* renamed from: x, reason: collision with root package name */
    public j f12569x;

    /* renamed from: y, reason: collision with root package name */
    public AudioAttributes f12570y;

    /* renamed from: z, reason: collision with root package name */
    public g0 f12571z;

    public k0(com.google.firebase.messaging.r rVar) {
        Context context = (Context) rVar.f6259e;
        this.a = context;
        this.f12568w = context != null ? f.a(context) : (f) rVar.f6260i;
        this.f12544b = (e4.m) rVar.f6261v;
        int i5 = ke.d0.a;
        this.f12546c = false;
        this.k = false;
        this.f12557l = 0;
        this.f12561p = (l0) rVar.f6262w;
        a5.h0 h0Var = new a5.h0(0);
        this.f12555h = h0Var;
        h0Var.q();
        this.f12556i = new x(new u4.c(this));
        a0 a0Var = new a0();
        this.f12548d = a0Var;
        v0 v0Var = new v0();
        v0Var.f12663m = ke.d0.f13298f;
        this.f12550e = v0Var;
        u0 u0Var = new u0();
        fi.c0 c0Var = fi.e0.f8656e;
        Object[] objArr = {u0Var, a0Var, v0Var};
        fi.p.b(3, objArr);
        this.f12552f = fi.e0.j(3, objArr);
        this.f12554g = fi.e0.s(new t0());
        this.N = 1.0f;
        this.f12570y = AudioAttributes.f5336y;
        this.X = 0;
        this.Y = new y();
        PlaybackParameters playbackParameters = PlaybackParameters.f5274v;
        this.A = new g0(playbackParameters, 0L, 0L);
        this.B = playbackParameters;
        this.C = false;
        this.j = new ArrayDeque();
        this.f12559n = new androidx.recyclerview.widget.h(1);
        this.f12560o = new androidx.recyclerview.widget.h(1);
    }

    public static AudioFormat f(int i5, int i6, int i10) {
        return new AudioFormat.Builder().setSampleRate(i5).setChannelMask(i6).setEncoding(i10).build();
    }

    public static boolean n(AudioTrack audioTrack) {
        return ke.d0.a >= 29 && audioTrack.isOffloadedPlayback();
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0025, code lost:
    
        if (r0 != 4) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x0067, code lost:
    
        if (r0 != 4) goto L36;
     */
    /* JADX WARN: Removed duplicated region for block: B:34:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:40:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(long j) {
        PlaybackParameters playbackParameters;
        boolean z5;
        ve.i iVar;
        boolean s2 = s();
        boolean z6 = this.f12546c;
        e4.m mVar = this.f12544b;
        if (s2) {
            playbackParameters = PlaybackParameters.f5274v;
        } else {
            if (!this.a0) {
                f0 f0Var = this.f12565t;
                if (f0Var.f12518c == 0) {
                    int i5 = f0Var.a.X;
                    if (z6) {
                        int i6 = ke.d0.a;
                        if (i5 != 536870912) {
                            if (i5 != 805306368) {
                            }
                        }
                    }
                    playbackParameters = this.B;
                    s0 s0Var = (s0) mVar.f7965v;
                    float f2 = playbackParameters.f5275d;
                    if (s0Var.f12641c != f2) {
                        s0Var.f12641c = f2;
                        s0Var.f12647i = true;
                    }
                    float f10 = playbackParameters.f5276e;
                    if (s0Var.f12642d != f10) {
                        s0Var.f12642d = f10;
                        s0Var.f12647i = true;
                    }
                    this.B = playbackParameters;
                }
            }
            playbackParameters = PlaybackParameters.f5274v;
            this.B = playbackParameters;
        }
        PlaybackParameters playbackParameters2 = playbackParameters;
        if (!this.a0) {
            f0 f0Var2 = this.f12565t;
            if (f0Var2.f12518c == 0) {
                int i10 = f0Var2.a.X;
                if (z6) {
                    int i11 = ke.d0.a;
                    if (i10 != 536870912) {
                        if (i10 != 805306368) {
                        }
                    }
                }
                z5 = this.C;
                ((q0) mVar.f7964i).f12610m = z5;
                this.C = z5;
                long max = Math.max(0L, j);
                f0 f0Var3 = this.f12565t;
                this.j.add(new g0(playbackParameters2, max, ke.d0.O(f0Var3.f12520e, i())));
                k kVar = this.f12565t.f12524i;
                this.f12566u = kVar;
                kVar.a();
                iVar = this.f12563r;
                if (iVar == null) {
                    boolean z7 = this.C;
                    e4.c cVar = ((n0) iVar.f19405d).f12577d1;
                    Handler handler = (Handler) cVar.f7939e;
                    if (handler != null) {
                        handler.post(new com.facebook.react.devsupport.e(cVar, z7, 6));
                        return;
                    }
                    return;
                }
                return;
            }
        }
        z5 = false;
        this.C = z5;
        long max2 = Math.max(0L, j);
        f0 f0Var32 = this.f12565t;
        this.j.add(new g0(playbackParameters2, max2, ke.d0.O(f0Var32.f12520e, i())));
        k kVar2 = this.f12565t.f12524i;
        this.f12566u = kVar2;
        kVar2.a();
        iVar = this.f12563r;
        if (iVar == null) {
        }
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:71:0x01b9, code lost:
    
        if (r9 > 0) goto L88;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x01bc, code lost:
    
        if (r13 > 0) goto L88;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x01bf, code lost:
    
        if (r13 < 0) goto L88;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void b(Format format, int[] iArr) {
        int i5;
        int i6;
        int i10;
        int i11;
        int i12;
        boolean z5;
        int i13;
        k kVar;
        int i14;
        k kVar2;
        int i15;
        int i16;
        int a;
        int[] iArr2;
        String str = format.I;
        int i17 = format.W;
        int i18 = format.V;
        int i19 = format.X;
        boolean equals = "audio/raw".equals(str);
        boolean z6 = this.k;
        if (equals) {
            ke.b.g(ke.d0.F(i19));
            int x5 = ke.d0.x(i19, i18);
            fi.b0 b0Var = new fi.b0();
            if (this.f12546c && (i19 == 536870912 || i19 == 805306368 || i19 == 4)) {
                b0Var.c(this.f12554g);
            } else {
                b0Var.c(this.f12552f);
                n[] nVarArr = (n[]) this.f12544b.f7963e;
                int length = nVarArr.length;
                fi.p.b(length, nVarArr);
                b0Var.e(b0Var.f8741b + length);
                System.arraycopy(nVarArr, 0, b0Var.a, b0Var.f8741b, length);
                b0Var.f8741b += length;
            }
            k kVar3 = new k(b0Var.f());
            if (kVar3.equals(this.f12566u)) {
                kVar3 = this.f12566u;
            }
            int i20 = format.Y;
            int i21 = format.Z;
            v0 v0Var = this.f12550e;
            v0Var.f12661i = i20;
            v0Var.j = i21;
            if (ke.d0.a < 21 && i18 == 8 && iArr == null) {
                iArr2 = new int[6];
                for (int i22 = 0; i22 < 6; i22++) {
                    iArr2[i22] = i22;
                }
            } else {
                iArr2 = iArr;
            }
            this.f12548d.f12509i = iArr2;
            l lVar = new l(i17, i18, i19);
            try {
                fi.e0 e0Var = kVar3.a;
                if (lVar.equals(l.f12572e)) {
                    throw new m(lVar);
                }
                for (int i23 = 0; i23 < e0Var.size(); i23++) {
                    n nVar = (n) e0Var.get(i23);
                    l h6 = nVar.h(lVar);
                    if (nVar.c()) {
                        ke.b.k(!h6.equals(l.f12572e));
                        lVar = h6;
                    }
                }
                int i24 = lVar.f12573b;
                int i25 = lVar.f12574c;
                int i26 = lVar.a;
                int o6 = ke.d0.o(i24);
                int x10 = ke.d0.x(i25, i24);
                i10 = x5;
                i5 = i25;
                k kVar4 = kVar3;
                i14 = x10;
                kVar = kVar4;
                i6 = 8;
                i11 = o6;
                z5 = z6;
                i13 = i26;
                i12 = 0;
            } catch (m e9) {
                throw new r(e9, format);
            }
        } else {
            fi.c0 c0Var = fi.e0.f8656e;
            k kVar5 = new k(fi.r0.f8704w);
            if (t(format, this.f12570y)) {
                String str2 = format.I;
                str2.getClass();
                i5 = ke.o.c(str2, format.F);
                int o7 = ke.d0.o(i18);
                i13 = i17;
                kVar = kVar5;
                i6 = 8;
                i10 = -1;
                i14 = -1;
                i12 = 1;
                i11 = o7;
                z5 = true;
            } else {
                Pair c6 = e().c(format);
                if (c6 == null) {
                    throw new r("Unable to configure passthrough for: " + format, format);
                }
                int intValue = ((Integer) c6.first).intValue();
                int intValue2 = ((Integer) c6.second).intValue();
                i5 = intValue;
                i6 = 8;
                i10 = -1;
                i11 = intValue2;
                i12 = 2;
                z5 = z6;
                i13 = i17;
                kVar = kVar5;
                i14 = -1;
            }
        }
        if (i5 == 0) {
            throw new r("Invalid output encoding (mode=" + i12 + ") for: " + format, format);
        }
        if (i11 == 0) {
            throw new r("Invalid output channel config (mode=" + i12 + ") for: " + format, format);
        }
        int minBufferSize = AudioTrack.getMinBufferSize(i13, i11, i5);
        ke.b.k(minBufferSize != -2);
        int i27 = i14 != -1 ? i14 : 1;
        int i28 = i6;
        int i29 = format.E;
        double d6 = z5 ? 8.0d : 1.0d;
        this.f12561p.getClass();
        if (i12 != 0) {
            if (i12 == 1) {
                kVar2 = kVar;
                i16 = ki.b.d((50000000 * l0.a(i5)) / 1000000);
            } else {
                if (i12 != 2) {
                    throw new IllegalArgumentException();
                }
                int i30 = i5 == 5 ? 500000 : 250000;
                if (i29 != -1) {
                    RoundingMode roundingMode = RoundingMode.CEILING;
                    roundingMode.getClass();
                    a = i29 / 8;
                    int i31 = i29 - (i28 * a);
                    if (i31 != 0) {
                        int i32 = ((i29 ^ 8) >> 31) | 1;
                        switch (gi.b.a[roundingMode.ordinal()]) {
                            case 1:
                                if (i31 != 0) {
                                    throw new ArithmeticException("mode was UNNECESSARY, but rounding was necessary");
                                }
                                break;
                            case 2:
                                break;
                            case 3:
                                break;
                            case 4:
                                a += i32;
                                break;
                            case 5:
                                break;
                            case 6:
                            case 7:
                            case 8:
                                int abs = Math.abs(i31);
                                int abs2 = abs - (Math.abs(i28) - abs);
                                if (abs2 == 0) {
                                    RoundingMode roundingMode2 = RoundingMode.HALF_UP;
                                    RoundingMode roundingMode3 = RoundingMode.HALF_EVEN;
                                    break;
                                }
                                break;
                            default:
                                throw new AssertionError();
                        }
                    }
                } else {
                    a = l0.a(i5);
                }
                kVar2 = kVar;
                i16 = ki.b.d((i30 * a) / 1000000);
            }
            i15 = i10;
        } else {
            kVar2 = kVar;
            i15 = i10;
            long j = i13;
            long j5 = 250000 * j;
            long j7 = i27;
            i16 = ke.d0.i(minBufferSize * 4, ki.b.d((j5 * j7) / 1000000), ki.b.d(((750000 * j) * j7) / 1000000));
        }
        this.f12549d0 = false;
        f0 f0Var = new f0(format, i15, i12, i14, i13, i11, i5, (((Math.max(minBufferSize, (int) (i16 * d6)) + i27) - 1) / i27) * i27, kVar2, z5);
        if (m()) {
            this.f12564s = f0Var;
        } else {
            this.f12565t = f0Var;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:7:0x0049 A[RETURN] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean c() {
        ByteBuffer byteBuffer;
        if (!this.f12566u.d()) {
            ByteBuffer byteBuffer2 = this.Q;
            if (byteBuffer2 != null) {
                u(Long.MIN_VALUE, byteBuffer2);
                if (this.Q != null) {
                    return false;
                }
            }
            return true;
        }
        k kVar = this.f12566u;
        if (kVar.d() && !kVar.f12541d) {
            kVar.f12541d = true;
            ((n) kVar.f12539b.get(0)).f();
        }
        p(Long.MIN_VALUE);
        if (this.f12566u.c() && ((byteBuffer = this.Q) == null || !byteBuffer.hasRemaining())) {
            return true;
        }
    }

    public final void d() {
        if (m()) {
            this.F = 0L;
            this.G = 0L;
            this.H = 0L;
            this.I = 0L;
            this.f12551e0 = false;
            this.J = 0;
            this.A = new g0(this.B, 0L, 0L);
            this.M = 0L;
            this.f12571z = null;
            this.j.clear();
            this.O = null;
            this.P = 0;
            this.Q = null;
            this.U = false;
            this.T = false;
            this.D = null;
            this.E = 0;
            this.f12550e.f12665o = 0L;
            k kVar = this.f12565t.f12524i;
            this.f12566u = kVar;
            kVar.a();
            AudioTrack audioTrack = this.f12556i.f12672c;
            audioTrack.getClass();
            if (audioTrack.getPlayState() == 3) {
                this.f12567v.pause();
            }
            if (n(this.f12567v)) {
                j0 j0Var = this.f12558m;
                j0Var.getClass();
                j0Var.a(this.f12567v);
            }
            if (ke.d0.a < 21 && !this.W) {
                this.X = 0;
            }
            f0 f0Var = this.f12564s;
            if (f0Var != null) {
                this.f12565t = f0Var;
                this.f12564s = null;
            }
            x xVar = this.f12556i;
            xVar.d();
            xVar.f12672c = null;
            xVar.f12675f = null;
            AudioTrack audioTrack2 = this.f12567v;
            a5.h0 h0Var = this.f12555h;
            h0Var.l();
            synchronized (f12542g0) {
                try {
                    if (h0 == null) {
                        h0 = Executors.newSingleThreadExecutor(new k2.a("ExoPlayer:AudioTrackReleaseThread", 1));
                    }
                    f12543i0++;
                    h0.execute(new b0(0, audioTrack2, h0Var));
                } catch (Throwable th2) {
                    throw th2;
                }
            }
            this.f12567v = null;
        }
        this.f12560o.f2402i = null;
        this.f12559n.f2402i = null;
    }

    public final f e() {
        Context context;
        f b10;
        h hVar;
        if (this.f12569x == null && (context = this.a) != null) {
            this.f12553f0 = Looper.myLooper();
            j jVar = new j(context, new hc.m(26, this));
            this.f12569x = jVar;
            c4.d dVar = (c4.d) jVar.f12534f;
            Handler handler = (Handler) jVar.f12532d;
            Context context2 = (Context) jVar.f12530b;
            if (jVar.a) {
                b10 = (f) jVar.f12536h;
                b10.getClass();
            } else {
                jVar.a = true;
                i iVar = (i) jVar.f12535g;
                if (iVar != null) {
                    iVar.a.registerContentObserver(iVar.f12528b, false, iVar);
                }
                if (ke.d0.a >= 23 && (hVar = (h) jVar.f12533e) != null) {
                    g.a(context2, hVar, handler);
                }
                b10 = f.b(context2, dVar != null ? context2.registerReceiver(dVar, new IntentFilter("android.media.action.HDMI_AUDIO_PLUG"), null, handler) : null);
                jVar.f12536h = b10;
            }
            this.f12568w = b10;
        }
        return this.f12568w;
    }

    public final int g(Format format) {
        String str = format.I;
        int i5 = format.X;
        if ("audio/raw".equals(str)) {
            if (!ke.d0.F(i5)) {
                com.discord.chat.bridge.botuikit.a.q(i5, "Invalid PCM encoding: ", "DefaultAudioSink");
                return 0;
            }
            if (i5 != 2 && (!this.f12546c || i5 != 4)) {
                return 1;
            }
        } else if ((this.f12549d0 || !t(format, this.f12570y)) && e().c(format) == null) {
            return 0;
        }
        return 2;
    }

    public final long h() {
        return this.f12565t.f12518c == 0 ? this.F / r0.f12517b : this.G;
    }

    public final long i() {
        return this.f12565t.f12518c == 0 ? this.H / r0.f12519d : this.I;
    }

    /* JADX WARN: Code restructure failed: missing block: B:208:0x009c, code lost:
    
        if (l() == false) goto L221;
     */
    /* JADX WARN: Code restructure failed: missing block: B:54:0x0104, code lost:
    
        if (r10.b() == 0) goto L221;
     */
    /* JADX WARN: Removed duplicated region for block: B:118:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:195:0x0417  */
    /* JADX WARN: Removed duplicated region for block: B:197:0x041e  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0155  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean j(ByteBuffer byteBuffer, long j, int i5) {
        boolean z5;
        boolean z6;
        int i6;
        int i10;
        byte b10;
        int i11;
        byte b11;
        int i12;
        int i13;
        ByteBuffer byteBuffer2 = this.O;
        boolean z7 = true;
        ke.b.g(byteBuffer2 == null || byteBuffer == byteBuffer2);
        if (this.f12564s != null) {
            if (c()) {
                f0 f0Var = this.f12564s;
                f0 f0Var2 = this.f12565t;
                f0Var.getClass();
                if (f0Var2.f12518c == f0Var.f12518c && f0Var2.f12522g == f0Var.f12522g && f0Var2.f12520e == f0Var.f12520e && f0Var2.f12521f == f0Var.f12521f && f0Var2.f12519d == f0Var.f12519d && f0Var2.j == f0Var.j) {
                    this.f12565t = this.f12564s;
                    this.f12564s = null;
                    if (n(this.f12567v) && this.f12557l != 3) {
                        if (this.f12567v.getPlayState() == 3) {
                            this.f12567v.setOffloadEndOfStream();
                        }
                        AudioTrack audioTrack = this.f12567v;
                        Format format = this.f12565t.a;
                        audioTrack.setOffloadDelayPadding(format.Y, format.Z);
                        this.f12551e0 = true;
                    }
                } else {
                    o();
                    if (!k()) {
                        d();
                    }
                }
                a(j);
            }
            return false;
        }
        boolean m5 = m();
        androidx.recyclerview.widget.h hVar = this.f12559n;
        if (!m5) {
            try {
            } catch (s e9) {
                if (e9.f12639e) {
                    throw e9;
                }
                hVar.N(e9);
                return false;
            }
        }
        hVar.f2402i = null;
        boolean z8 = this.L;
        x xVar = this.f12556i;
        if (z8) {
            this.M = Math.max(0L, j);
            this.K = false;
            this.L = false;
            if (s()) {
                r();
            }
            a(j);
            if (this.V) {
                this.V = true;
                if (m()) {
                    w wVar = xVar.f12675f;
                    wVar.getClass();
                    wVar.a();
                    this.f12567v.play();
                }
            }
        }
        long i14 = i();
        AudioTrack audioTrack2 = xVar.f12672c;
        audioTrack2.getClass();
        int playState = audioTrack2.getPlayState();
        if (xVar.f12677h) {
            if (playState == 2) {
                xVar.f12683p = false;
                return false;
            }
            if (playState == 1) {
            }
        }
        boolean z10 = xVar.f12683p;
        boolean c6 = xVar.c(i14);
        xVar.f12683p = c6;
        if (z10 && !c6 && playState != 1) {
            u4.c cVar = xVar.a;
            int i15 = xVar.f12674e;
            long U = ke.d0.U(xVar.f12678i);
            k0 k0Var = (k0) cVar.f18811d;
            if (k0Var.f12563r != null) {
                z5 = 2;
                long elapsedRealtime = SystemClock.elapsedRealtime() - k0Var.f12547c0;
                e4.c cVar2 = ((n0) k0Var.f12563r.f19405d).f12577d1;
                Handler handler = (Handler) cVar2.f7939e;
                if (handler != null) {
                    handler.post(new ie.d(cVar2, i15, U, elapsedRealtime, 1));
                }
                if (this.O == null) {
                    ke.b.g(byteBuffer.order() == ByteOrder.LITTLE_ENDIAN);
                    if (!byteBuffer.hasRemaining()) {
                        return true;
                    }
                    f0 f0Var3 = this.f12565t;
                    if (f0Var3.f12518c != 0 && this.J == 0) {
                        int i16 = f0Var3.f12522g;
                        char c8 = 16;
                        switch (i16) {
                            case 5:
                            case 6:
                            case 18:
                                z6 = true;
                                i6 = ((byteBuffer.get(byteBuffer.position() + 5) & 248) >> 3) > 10 ? a.f12494c[((byteBuffer.get(byteBuffer.position() + 4) & 192) >> 6) != 3 ? (byteBuffer.get(byteBuffer.position() + 4) & 48) >> 4 : 3] * IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER : 1536;
                                this.J = i6;
                                if (i6 == 0) {
                                    return z6;
                                }
                                break;
                            case 7:
                            case 8:
                                z6 = true;
                                if (byteBuffer.getInt(0) != -233094848 && byteBuffer.getInt(0) != -398277519) {
                                    if (byteBuffer.getInt(0) == 622876772) {
                                        i6 = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                                    } else {
                                        int position = byteBuffer.position();
                                        byte b12 = byteBuffer.get(position);
                                        if (b12 != -2) {
                                            if (b12 == -1) {
                                                i10 = (byteBuffer.get(position + 4) & 7) << 4;
                                                b11 = byteBuffer.get(position + 7);
                                            } else if (b12 != 31) {
                                                i10 = (byteBuffer.get(position + 4) & 1) << 6;
                                                b10 = byteBuffer.get(position + 5);
                                            } else {
                                                i10 = (byteBuffer.get(position + 5) & 7) << 4;
                                                b11 = byteBuffer.get(position + 6);
                                            }
                                            i11 = b11 & 60;
                                            i6 = (((i11 >> 2) | i10) + 1) * 32;
                                        } else {
                                            i10 = (byteBuffer.get(position + 5) & 1) << 6;
                                            b10 = byteBuffer.get(position + 4);
                                        }
                                        i11 = b10 & 252;
                                        i6 = (((i11 >> 2) | i10) + 1) * 32;
                                    }
                                    this.J = i6;
                                    if (i6 == 0) {
                                    }
                                }
                                i6 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                            case 9:
                                z6 = true;
                                int i17 = byteBuffer.getInt(byteBuffer.position());
                                if (byteBuffer.order() != ByteOrder.BIG_ENDIAN) {
                                    i17 = Integer.reverseBytes(i17);
                                }
                                i6 = a.j(i17);
                                if (i6 == -1) {
                                    throw new IllegalArgumentException();
                                }
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                            case 10:
                            case 16:
                                z6 = true;
                                i6 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                            case 11:
                            case 12:
                                z6 = true;
                                i6 = RecyclerView.ItemAnimator.FLAG_MOVED;
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                            case 13:
                            case 19:
                            default:
                                throw new IllegalStateException(k0.d.i(i16, "Unexpected audio encoding: "));
                            case 14:
                                int position2 = byteBuffer.position();
                                int limit = byteBuffer.limit() - 10;
                                int i18 = position2;
                                while (true) {
                                    if (i18 <= limit) {
                                        int i19 = byteBuffer.getInt(i18 + 4);
                                        char c10 = c8;
                                        z6 = z7;
                                        if (byteBuffer.order() != ByteOrder.BIG_ENDIAN) {
                                            i19 = Integer.reverseBytes(i19);
                                        }
                                        if ((i19 & (-2)) == -126718022) {
                                            i12 = i18 - position2;
                                        } else {
                                            i18++;
                                            c8 = c10;
                                            z7 = z6;
                                        }
                                    } else {
                                        z6 = z7;
                                        i12 = -1;
                                    }
                                }
                                if (i12 == -1) {
                                    i6 = 0;
                                } else {
                                    i6 = (40 << ((byteBuffer.get((byteBuffer.position() + i12) + ((byteBuffer.get((byteBuffer.position() + i12) + 7) & 255) == 187 ? z6 : false ? 9 : 8)) >> 4) & 7)) * 16;
                                }
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                            case 15:
                                i6 = IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                                z6 = true;
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                            case 17:
                                byte[] bArr = new byte[16];
                                int position3 = byteBuffer.position();
                                byteBuffer.get(bArr);
                                byteBuffer.position(position3);
                                i6 = a.h(new ke.v(bArr, 16)).f9774c;
                                z6 = true;
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                            case 20:
                                if ((byteBuffer.get(5) & 2) == 0) {
                                    i13 = 0;
                                } else {
                                    byte b13 = byteBuffer.get(26);
                                    int i20 = 28;
                                    int i21 = 28;
                                    for (int i22 = 0; i22 < b13; i22++) {
                                        i21 += byteBuffer.get(i22 + 27);
                                    }
                                    byte b14 = byteBuffer.get(i21 + 26);
                                    for (int i23 = 0; i23 < b14; i23++) {
                                        i20 += byteBuffer.get(i21 + 27 + i23);
                                    }
                                    i13 = i21 + i20;
                                }
                                int i24 = byteBuffer.get(i13 + 26) + 27 + i13;
                                i6 = (int) ((a.f(byteBuffer.get(i24), byteBuffer.limit() - i24 > 1 ? byteBuffer.get(i24 + 1) : (byte) 0) * 48000) / 1000000);
                                z6 = true;
                                this.J = i6;
                                if (i6 == 0) {
                                }
                                break;
                        }
                    } else {
                        z6 = true;
                    }
                    if (this.f12571z != null) {
                        if (c()) {
                            a(j);
                            this.f12571z = null;
                        }
                        return false;
                    }
                    long O = ke.d0.O(this.f12565t.a.W, h() - this.f12550e.f12665o) + this.M;
                    if (!this.K && Math.abs(O - j) > 200000) {
                        ve.i iVar = this.f12563r;
                        if (iVar != null) {
                            StringBuilder n6 = k0.d.n(O, "Unexpected audio track timestamp discontinuity: expected ", ", got ");
                            n6.append(j);
                            iVar.d(new ap.a(n6.toString(), 6));
                        }
                        this.K = z6;
                    }
                    if (this.K) {
                        if (c()) {
                            long j5 = j - O;
                            this.M += j5;
                            this.K = false;
                            a(j);
                            ve.i iVar2 = this.f12563r;
                            if (iVar2 != null && j5 != 0) {
                                ((n0) iVar2.f19405d).f12584l1 = true;
                            }
                        }
                        return false;
                    }
                    if (this.f12565t.f12518c == 0) {
                        this.F += byteBuffer.remaining();
                    } else {
                        this.G = (this.J * i5) + this.G;
                    }
                    this.O = byteBuffer;
                    this.P = i5;
                }
                p(j);
                if (this.O.hasRemaining()) {
                    this.O = null;
                    this.P = 0;
                    return true;
                }
                long i25 = i();
                if (xVar.f12693z != -9223372036854775807L && i25 > 0 && SystemClock.elapsedRealtime() - xVar.f12693z >= 200) {
                    ke.b.N("DefaultAudioSink", "Resetting stalled audio track");
                    d();
                    return true;
                }
                return false;
            }
        }
        z5 = 2;
        if (this.O == null) {
        }
        p(j);
        if (this.O.hasRemaining()) {
        }
    }

    public final boolean k() {
        return m() && this.f12556i.c(i());
    }

    /* JADX WARN: Removed duplicated region for block: B:82:0x0154  */
    /* JADX WARN: Removed duplicated region for block: B:84:? A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean l() {
        boolean z5;
        AudioTrack a;
        ic.c0 c0Var;
        a5.h0 h0Var = this.f12555h;
        synchronized (h0Var) {
            z5 = h0Var.f175e;
        }
        if (!z5) {
            return false;
        }
        try {
            f0 f0Var = this.f12565t;
            f0Var.getClass();
            try {
                a = f0Var.a(this.a0, this.f12570y, this.X);
            } catch (s e9) {
                ve.i iVar = this.f12563r;
                if (iVar != null) {
                    iVar.d(e9);
                }
                throw e9;
            }
        } catch (s e10) {
            f0 f0Var2 = this.f12565t;
            if (f0Var2.f12523h > 1000000) {
                f0 f0Var3 = new f0(f0Var2.a, f0Var2.f12517b, f0Var2.f12518c, f0Var2.f12519d, f0Var2.f12520e, f0Var2.f12521f, f0Var2.f12522g, 1000000, f0Var2.f12524i, f0Var2.j);
                try {
                    try {
                        a = f0Var3.a(this.a0, this.f12570y, this.X);
                        this.f12565t = f0Var3;
                    } catch (s e11) {
                        ve.i iVar2 = this.f12563r;
                        if (iVar2 != null) {
                            iVar2.d(e11);
                        }
                        throw e11;
                    }
                } catch (s e12) {
                    e10.addSuppressed(e12);
                    if (this.f12565t.f12518c == 1) {
                        throw e10;
                    }
                    this.f12549d0 = true;
                    throw e10;
                }
            }
            if (this.f12565t.f12518c == 1) {
            }
        }
        this.f12567v = a;
        if (n(a)) {
            AudioTrack audioTrack = this.f12567v;
            if (this.f12558m == null) {
                this.f12558m = new j0(this);
            }
            j0 j0Var = this.f12558m;
            Handler handler = j0Var.a;
            Objects.requireNonNull(handler);
            audioTrack.registerStreamEventCallback(new h0(handler), j0Var.f12537b);
            if (this.f12557l != 3) {
                AudioTrack audioTrack2 = this.f12567v;
                Format format = this.f12565t.a;
                audioTrack2.setOffloadDelayPadding(format.Y, format.Z);
            }
        }
        int i5 = ke.d0.a;
        if (i5 >= 31 && (c0Var = this.f12562q) != null) {
            d0.a(this.f12567v, c0Var);
        }
        this.X = this.f12567v.getAudioSessionId();
        x xVar = this.f12556i;
        AudioTrack audioTrack3 = this.f12567v;
        f0 f0Var4 = this.f12565t;
        boolean z6 = f0Var4.f12518c == 2;
        int i6 = f0Var4.f12522g;
        int i10 = f0Var4.f12519d;
        int i11 = f0Var4.f12523h;
        xVar.f12672c = audioTrack3;
        xVar.f12673d = i10;
        xVar.f12674e = i11;
        xVar.f12675f = new w(audioTrack3);
        xVar.f12676g = audioTrack3.getSampleRate();
        xVar.f12677h = z6 && i5 < 23 && (i6 == 5 || i6 == 6);
        boolean F = ke.d0.F(i6);
        xVar.f12684q = F;
        xVar.f12678i = F ? ke.d0.O(xVar.f12676g, i11 / i10) : -9223372036854775807L;
        xVar.f12687t = 0L;
        xVar.f12688u = 0L;
        xVar.f12689v = 0L;
        xVar.f12683p = false;
        xVar.f12692y = -9223372036854775807L;
        xVar.f12693z = -9223372036854775807L;
        xVar.f12685r = 0L;
        xVar.f12682o = 0L;
        xVar.j = 1.0f;
        if (m()) {
            if (i5 >= 21) {
                this.f12567v.setVolume(this.N);
            } else {
                AudioTrack audioTrack4 = this.f12567v;
                float f2 = this.N;
                audioTrack4.setStereoVolume(f2, f2);
            }
        }
        this.Y.getClass();
        e0 e0Var = this.Z;
        if (e0Var != null && i5 >= 23) {
            c0.a(this.f12567v, e0Var);
        }
        this.L = true;
        return true;
    }

    public final boolean m() {
        return this.f12567v != null;
    }

    public final void o() {
        if (this.U) {
            return;
        }
        this.U = true;
        long i5 = i();
        x xVar = this.f12556i;
        xVar.A = xVar.b();
        xVar.f12692y = SystemClock.elapsedRealtime() * 1000;
        xVar.B = i5;
        this.f12567v.stop();
        this.E = 0;
    }

    public final void p(long j) {
        ByteBuffer byteBuffer;
        if (!this.f12566u.d()) {
            ByteBuffer byteBuffer2 = this.O;
            if (byteBuffer2 == null) {
                byteBuffer2 = n.a;
            }
            u(j, byteBuffer2);
            return;
        }
        while (!this.f12566u.c()) {
            do {
                k kVar = this.f12566u;
                if (kVar.d()) {
                    ByteBuffer byteBuffer3 = kVar.f12540c[kVar.b()];
                    if (!byteBuffer3.hasRemaining()) {
                        kVar.e(n.a);
                    }
                    byteBuffer = byteBuffer3;
                } else {
                    byteBuffer = n.a;
                }
                if (byteBuffer.hasRemaining()) {
                    u(j, byteBuffer);
                } else {
                    ByteBuffer byteBuffer4 = this.O;
                    if (byteBuffer4 == null || !byteBuffer4.hasRemaining()) {
                        return;
                    }
                    k kVar2 = this.f12566u;
                    ByteBuffer byteBuffer5 = this.O;
                    if (kVar2.d() && !kVar2.f12541d) {
                        kVar2.e(byteBuffer5);
                    }
                }
            } while (!byteBuffer.hasRemaining());
            return;
        }
    }

    public final void q() {
        d();
        fi.c0 listIterator = this.f12552f.listIterator(0);
        while (listIterator.hasNext()) {
            ((n) listIterator.next()).reset();
        }
        fi.c0 listIterator2 = this.f12554g.listIterator(0);
        while (listIterator2.hasNext()) {
            ((n) listIterator2.next()).reset();
        }
        k kVar = this.f12566u;
        if (kVar != null) {
            fi.e0 e0Var = kVar.a;
            for (int i5 = 0; i5 < e0Var.size(); i5++) {
                n nVar = (n) e0Var.get(i5);
                nVar.flush();
                nVar.reset();
            }
            kVar.f12540c = new ByteBuffer[0];
            l lVar = l.f12572e;
            kVar.f12541d = false;
        }
        this.V = false;
        this.f12549d0 = false;
    }

    public final void r() {
        if (m()) {
            try {
                this.f12567v.setPlaybackParams(new PlaybackParams().allowDefaults().setSpeed(this.B.f5275d).setPitch(this.B.f5276e).setAudioFallbackMode(2));
            } catch (IllegalArgumentException e9) {
                ke.b.O("DefaultAudioSink", "Failed to set playback params", e9);
            }
            PlaybackParameters playbackParameters = new PlaybackParameters(this.f12567v.getPlaybackParams().getSpeed(), this.f12567v.getPlaybackParams().getPitch());
            this.B = playbackParameters;
            float f2 = playbackParameters.f5275d;
            x xVar = this.f12556i;
            xVar.j = f2;
            w wVar = xVar.f12675f;
            if (wVar != null) {
                wVar.a();
            }
            xVar.d();
        }
    }

    public final boolean s() {
        f0 f0Var = this.f12565t;
        return f0Var != null && f0Var.j && ke.d0.a >= 23;
    }

    public final boolean t(Format format, AudioAttributes audioAttributes) {
        int i5;
        int o6;
        int i6 = ke.d0.a;
        if (i6 >= 29 && (i5 = this.f12557l) != 0) {
            String str = format.I;
            str.getClass();
            int c6 = ke.o.c(str, format.F);
            if (c6 == 0 || (o6 = ke.d0.o(format.V)) == 0) {
                return false;
            }
            AudioFormat f2 = f(format.W, o6, c6);
            android.media.AudioAttributes audioAttributes2 = (android.media.AudioAttributes) audioAttributes.a().f18810e;
            int playbackOffloadSupport = i6 >= 31 ? AudioManager.getPlaybackOffloadSupport(f2, audioAttributes2) : !AudioManager.isOffloadedPlaybackSupported(f2, audioAttributes2) ? 0 : (i6 == 30 && ke.d0.f13296d.startsWith("Pixel")) ? 2 : 1;
            if (playbackOffloadSupport != 0) {
                if (playbackOffloadSupport == 1) {
                    return ((format.Y != 0 || format.Z != 0) && (i5 == 1)) ? false : true;
                }
                if (playbackOffloadSupport == 2) {
                    return true;
                }
                throw new IllegalStateException();
            }
        }
        return false;
    }

    public final void u(long j, ByteBuffer byteBuffer) {
        ByteBuffer byteBuffer2;
        int write;
        ve.i iVar;
        hc.z zVar;
        if (byteBuffer.hasRemaining()) {
            ByteBuffer byteBuffer3 = this.Q;
            if (byteBuffer3 != null) {
                ke.b.g(byteBuffer3 == byteBuffer);
            } else {
                this.Q = byteBuffer;
                if (ke.d0.a < 21) {
                    int remaining = byteBuffer.remaining();
                    byte[] bArr = this.R;
                    if (bArr == null || bArr.length < remaining) {
                        this.R = new byte[remaining];
                    }
                    int position = byteBuffer.position();
                    byteBuffer.get(this.R, 0, remaining);
                    byteBuffer.position(position);
                    this.S = 0;
                }
            }
            int remaining2 = byteBuffer.remaining();
            int i5 = ke.d0.a;
            if (i5 < 21) {
                long j5 = this.H;
                x xVar = this.f12556i;
                int b10 = xVar.f12674e - ((int) (j5 - (xVar.b() * xVar.f12673d)));
                if (b10 > 0) {
                    write = this.f12567v.write(this.R, this.S, Math.min(remaining2, b10));
                    if (write > 0) {
                        this.S += write;
                        byteBuffer.position(byteBuffer.position() + write);
                    }
                } else {
                    write = 0;
                }
                byteBuffer2 = byteBuffer;
            } else if (this.a0) {
                ke.b.k(j != -9223372036854775807L);
                if (j == Long.MIN_VALUE) {
                    j = this.f12545b0;
                } else {
                    this.f12545b0 = j;
                }
                AudioTrack audioTrack = this.f12567v;
                if (i5 >= 26) {
                    byteBuffer2 = byteBuffer;
                    write = audioTrack.write(byteBuffer2, remaining2, 1, j * 1000);
                } else {
                    byteBuffer2 = byteBuffer;
                    if (this.D == null) {
                        ByteBuffer allocate = ByteBuffer.allocate(16);
                        this.D = allocate;
                        allocate.order(ByteOrder.BIG_ENDIAN);
                        this.D.putInt(1431633921);
                    }
                    if (this.E == 0) {
                        this.D.putInt(4, remaining2);
                        this.D.putLong(8, j * 1000);
                        this.D.position(0);
                        this.E = remaining2;
                    }
                    int remaining3 = this.D.remaining();
                    if (remaining3 > 0) {
                        int write2 = audioTrack.write(this.D, remaining3, 1);
                        if (write2 < 0) {
                            this.E = 0;
                            write = write2;
                        } else if (write2 < remaining3) {
                            write = 0;
                        }
                    }
                    write = audioTrack.write(byteBuffer2, remaining2, 1);
                    if (write < 0) {
                        this.E = 0;
                    } else {
                        this.E -= write;
                    }
                }
            } else {
                byteBuffer2 = byteBuffer;
                write = this.f12567v.write(byteBuffer2, remaining2, 1);
            }
            this.f12547c0 = SystemClock.elapsedRealtime();
            androidx.recyclerview.widget.h hVar = this.f12560o;
            if (write < 0) {
                t tVar = new t(write, this.f12565t.a, ((i5 >= 24 && write == -6) || write == -32) && this.I > 0);
                ve.i iVar2 = this.f12563r;
                if (iVar2 != null) {
                    iVar2.d(tVar);
                }
                if (tVar.f12654e) {
                    this.f12568w = f.f12513c;
                    throw tVar;
                }
                hVar.N(tVar);
                return;
            }
            hVar.f2402i = null;
            if (n(this.f12567v)) {
                if (this.I > 0) {
                    this.f12551e0 = false;
                }
                if (this.V && (iVar = this.f12563r) != null && write < remaining2 && !this.f12551e0 && (zVar = ((n0) iVar.f19405d).f12586n1) != null) {
                    zVar.a.f5394d0 = true;
                }
            }
            int i6 = this.f12565t.f12518c;
            if (i6 == 0) {
                this.H += write;
            }
            if (write == remaining2) {
                if (i6 != 0) {
                    ke.b.k(byteBuffer2 == this.O);
                    this.I = (this.J * this.P) + this.I;
                }
                this.Q = null;
            }
        }
    }
}
