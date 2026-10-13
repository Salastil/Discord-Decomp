package jc;

import android.content.Context;
import android.media.AudioTrack;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Handler;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.PlaybackParameters;
import com.google.android.exoplayer2.audio.AudioAttributes;
import com.google.android.exoplayer2.decoder.DecoderCounters;
import com.google.android.exoplayer2.decoder.DecoderReuseEvaluation;
import hc.o1;
import java.nio.ByteBuffer;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.regex.Pattern;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public final class n0 extends cd.s implements ke.n {

    /* renamed from: c1, reason: collision with root package name */
    public final Context f12576c1;

    /* renamed from: d1, reason: collision with root package name */
    public final e4.c f12577d1;
    public final k0 e1;

    /* renamed from: f1, reason: collision with root package name */
    public int f12578f1;

    /* renamed from: g1, reason: collision with root package name */
    public boolean f12579g1;

    /* renamed from: h1, reason: collision with root package name */
    public Format f12580h1;

    /* renamed from: i1, reason: collision with root package name */
    public Format f12581i1;

    /* renamed from: j1, reason: collision with root package name */
    public long f12582j1;

    /* renamed from: k1, reason: collision with root package name */
    public boolean f12583k1;

    /* renamed from: l1, reason: collision with root package name */
    public boolean f12584l1;

    /* renamed from: m1, reason: collision with root package name */
    public boolean f12585m1;

    /* renamed from: n1, reason: collision with root package name */
    public hc.z f12586n1;

    public n0(Context context, cd.k kVar, boolean z5, Handler handler, hc.w wVar, k0 k0Var) {
        super(1, kVar, z5, 44100.0f);
        this.f12576c1 = context.getApplicationContext();
        this.e1 = k0Var;
        this.f12577d1 = new e4.c(14, handler, wVar);
        k0Var.f12563r = new ve.i(this);
    }

    public static fi.r0 s0(cd.t tVar, Format format, boolean z5, k0 k0Var) {
        Iterable e9;
        if (format.I == null) {
            fi.c0 c0Var = fi.e0.f8656e;
            return fi.r0.f8704w;
        }
        if (k0Var.g(format) != 0) {
            List e10 = cd.z.e("audio/raw", false, false);
            cd.o oVar = e10.isEmpty() ? null : (cd.o) e10.get(0);
            if (oVar != null) {
                return fi.e0.s(oVar);
            }
        }
        Pattern pattern = cd.z.a;
        String str = format.I;
        tVar.getClass();
        List e11 = cd.z.e(str, z5, false);
        String b10 = cd.z.b(format);
        if (b10 == null) {
            fi.c0 c0Var2 = fi.e0.f8656e;
            e9 = fi.r0.f8704w;
        } else {
            e9 = cd.z.e(b10, z5, false);
        }
        fi.c0 c0Var3 = fi.e0.f8656e;
        fi.b0 b0Var = new fi.b0();
        b0Var.c(e11);
        b0Var.c(e9);
        return b0Var.f();
    }

    @Override // cd.s
    public final DecoderReuseEvaluation B(cd.o oVar, Format format, Format format2) {
        DecoderReuseEvaluation b10 = oVar.b(format, format2);
        int i5 = b10.f5390e;
        if (this.a0 == null && m0(format2)) {
            i5 |= PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
        }
        if (r0(oVar, format2) > this.f12578f1) {
            i5 |= 64;
        }
        int i6 = i5;
        return new DecoderReuseEvaluation(oVar.a, format, format2, i6 != 0 ? 0 : b10.f5389d, i6);
    }

    @Override // cd.s
    public final float L(float f2, Format[] formatArr) {
        int i5 = -1;
        for (Format format : formatArr) {
            int i6 = format.W;
            if (i6 != -1) {
                i5 = Math.max(i5, i6);
            }
        }
        if (i5 == -1) {
            return -1.0f;
        }
        return i5 * f2;
    }

    @Override // cd.s
    public final ArrayList M(cd.t tVar, Format format, boolean z5) {
        fi.r0 s02 = s0(tVar, format, z5, this.e1);
        Pattern pattern = cd.z.a;
        ArrayList arrayList = new ArrayList(s02);
        Collections.sort(arrayList, new cd.u(0, new app.rive.runtime.kotlin.core.a(5, format)));
        return arrayList;
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x00ae, code lost:
    
        if ("AXON 7 mini".equals(r6) == false) goto L35;
     */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00cb  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00f2  */
    @Override // cd.s
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final cd.j N(cd.o oVar, Format format, MediaCrypto mediaCrypto, float f2) {
        boolean z5;
        MediaFormat mediaFormat;
        Format[] formatArr = this.F;
        formatArr.getClass();
        int r02 = r0(oVar, format);
        if (formatArr.length != 1) {
            for (Format format2 : formatArr) {
                if (oVar.b(format, format2).f5389d != 0) {
                    r02 = Math.max(r02, r0(oVar, format2));
                }
            }
        }
        this.f12578f1 = r02;
        String str = oVar.a;
        int i5 = ke.d0.a;
        if (i5 < 24 && "OMX.SEC.aac.dec".equals(str) && "samsung".equals(ke.d0.f13295c)) {
            String str2 = ke.d0.f13294b;
            if (str2.startsWith("zeroflte") || str2.startsWith("herolte") || str2.startsWith("heroqlte")) {
                z5 = true;
                this.f12579g1 = z5;
                String str3 = oVar.f3442c;
                int i6 = this.f12578f1;
                mediaFormat = new MediaFormat();
                mediaFormat.setString("mime", str3);
                int i10 = format.V;
                String str4 = format.I;
                mediaFormat.setInteger("channel-count", i10);
                int i11 = format.W;
                mediaFormat.setInteger("sample-rate", i11);
                ke.b.L(mediaFormat, format.K);
                ke.b.D(mediaFormat, "max-input-size", i6);
                if (i5 >= 23) {
                    mediaFormat.setInteger("priority", 0);
                    if (f2 != -1.0f) {
                        if (i5 == 23) {
                            String str5 = ke.d0.f13296d;
                            if (!"ZTE B2017G".equals(str5)) {
                            }
                        }
                        mediaFormat.setFloat("operating-rate", f2);
                    }
                }
                if (i5 <= 28 && "audio/ac4".equals(str4)) {
                    mediaFormat.setInteger("ac4-is-sync", 1);
                }
                if (i5 >= 24) {
                    int i12 = format.V;
                    hc.f0 f0Var = new hc.f0();
                    f0Var.k = "audio/raw";
                    f0Var.f9690x = i12;
                    f0Var.f9691y = i11;
                    f0Var.f9692z = 4;
                    if (this.e1.g(new Format(f0Var)) == 2) {
                        mediaFormat.setInteger("pcm-encoding", 4);
                    }
                }
                if (i5 >= 32) {
                    mediaFormat.setInteger("max-output-channel-count", 99);
                }
                this.f12581i1 = ("audio/raw".equals(oVar.f3441b) || "audio/raw".equals(str4)) ? null : format;
                return new cd.j(oVar, mediaFormat, format, null, mediaCrypto);
            }
        }
        z5 = false;
        this.f12579g1 = z5;
        String str32 = oVar.f3442c;
        int i62 = this.f12578f1;
        mediaFormat = new MediaFormat();
        mediaFormat.setString("mime", str32);
        int i102 = format.V;
        String str42 = format.I;
        mediaFormat.setInteger("channel-count", i102);
        int i112 = format.W;
        mediaFormat.setInteger("sample-rate", i112);
        ke.b.L(mediaFormat, format.K);
        ke.b.D(mediaFormat, "max-input-size", i62);
        if (i5 >= 23) {
        }
        if (i5 <= 28) {
            mediaFormat.setInteger("ac4-is-sync", 1);
        }
        if (i5 >= 24) {
        }
        if (i5 >= 32) {
        }
        this.f12581i1 = ("audio/raw".equals(oVar.f3441b) || "audio/raw".equals(str42)) ? null : format;
        return new cd.j(oVar, mediaFormat, format, null, mediaCrypto);
    }

    @Override // cd.s
    public final void S(Exception exc) {
        ke.b.s("MediaCodecAudioRenderer", "Audio codec error", exc);
        e4.c cVar = this.f12577d1;
        Handler handler = (Handler) cVar.f7939e;
        if (handler != null) {
            handler.post(new p(cVar, exc, 0));
        }
    }

    @Override // cd.s
    public final void T(long j, long j5, String str) {
        e4.c cVar = this.f12577d1;
        Handler handler = (Handler) cVar.f7939e;
        if (handler != null) {
            handler.post(new o(cVar, str, j, j5, 0));
        }
    }

    @Override // cd.s
    public final void U(String str) {
        e4.c cVar = this.f12577d1;
        Handler handler = (Handler) cVar.f7939e;
        if (handler != null) {
            handler.post(new com.mkuczera.haptic.a(29, cVar, str));
        }
    }

    @Override // cd.s
    public final DecoderReuseEvaluation V(e4.l lVar) {
        Format format = (Format) lVar.f7960i;
        format.getClass();
        this.f12580h1 = format;
        DecoderReuseEvaluation V = super.V(lVar);
        Format format2 = this.f12580h1;
        e4.c cVar = this.f12577d1;
        Handler handler = (Handler) cVar.f7939e;
        if (handler != null) {
            handler.post(new androidx.fragment.app.e(cVar, format2, V, 25));
        }
        return V;
    }

    @Override // cd.s
    public final void W(Format format, MediaFormat mediaFormat) {
        Format format2 = this.f12581i1;
        int[] iArr = null;
        if (format2 != null) {
            format = format2;
        } else if (this.f3462g0 != null) {
            String str = format.I;
            int i5 = format.V;
            int w5 = "audio/raw".equals(str) ? format.X : (ke.d0.a < 24 || !mediaFormat.containsKey("pcm-encoding")) ? mediaFormat.containsKey("v-bits-per-sample") ? ke.d0.w(mediaFormat.getInteger("v-bits-per-sample")) : 2 : mediaFormat.getInteger("pcm-encoding");
            hc.f0 f0Var = new hc.f0();
            f0Var.k = "audio/raw";
            f0Var.f9692z = w5;
            f0Var.A = format.Y;
            f0Var.B = format.Z;
            f0Var.f9690x = mediaFormat.getInteger("channel-count");
            f0Var.f9691y = mediaFormat.getInteger("sample-rate");
            format = new Format(f0Var);
            if (this.f12579g1 && format.V == 6 && i5 < 6) {
                iArr = new int[i5];
                for (int i6 = 0; i6 < i5; i6++) {
                    iArr[i6] = i6;
                }
            }
        }
        try {
            this.e1.b(format, iArr);
        } catch (r e9) {
            throw f(e9, e9.f12618d, false, 5001);
        }
    }

    @Override // cd.s
    public final void X() {
        this.e1.getClass();
    }

    @Override // cd.s
    public final void Z() {
        this.e1.K = true;
    }

    @Override // ke.n
    public final long a() {
        if (this.f9664y == 2) {
            t0();
        }
        return this.f12582j1;
    }

    @Override // cd.s
    public final void a0(mc.f fVar) {
        if (!this.f12583k1 || fVar.c(Integer.MIN_VALUE)) {
            return;
        }
        if (Math.abs(fVar.f14438x - this.f12582j1) > 500000) {
            this.f12582j1 = fVar.f14438x;
        }
        this.f12583k1 = false;
    }

    @Override // ke.n
    public final PlaybackParameters b() {
        return this.e1.B;
    }

    @Override // hc.e, hc.k1
    public final void c(int i5, Object obj) {
        k0 k0Var = this.e1;
        if (i5 == 2) {
            float floatValue = ((Float) obj).floatValue();
            if (k0Var.N != floatValue) {
                k0Var.N = floatValue;
                if (k0Var.m()) {
                    if (ke.d0.a >= 21) {
                        k0Var.f12567v.setVolume(k0Var.N);
                        return;
                    }
                    AudioTrack audioTrack = k0Var.f12567v;
                    float f2 = k0Var.N;
                    audioTrack.setStereoVolume(f2, f2);
                    return;
                }
                return;
            }
            return;
        }
        if (i5 == 3) {
            AudioAttributes audioAttributes = (AudioAttributes) obj;
            if (k0Var.f12570y.equals(audioAttributes)) {
                return;
            }
            k0Var.f12570y = audioAttributes;
            if (k0Var.a0) {
                return;
            }
            k0Var.d();
            return;
        }
        if (i5 == 6) {
            y yVar = (y) obj;
            if (k0Var.Y.equals(yVar)) {
                return;
            }
            yVar.getClass();
            if (k0Var.f12567v != null) {
                k0Var.Y.getClass();
            }
            k0Var.Y = yVar;
            return;
        }
        switch (i5) {
            case 9:
                k0Var.C = ((Boolean) obj).booleanValue();
                g0 g0Var = new g0(k0Var.s() ? PlaybackParameters.f5274v : k0Var.B, -9223372036854775807L, -9223372036854775807L);
                if (!k0Var.m()) {
                    k0Var.A = g0Var;
                    break;
                } else {
                    k0Var.f12571z = g0Var;
                    break;
                }
            case 10:
                int intValue = ((Integer) obj).intValue();
                if (k0Var.X != intValue) {
                    k0Var.X = intValue;
                    k0Var.W = intValue != 0;
                    k0Var.d();
                    break;
                }
                break;
            case 11:
                this.f12586n1 = (hc.z) obj;
                break;
            case 12:
                if (ke.d0.a >= 23) {
                    m0.a(k0Var, obj);
                    break;
                }
                break;
        }
    }

    @Override // ke.n
    public final void d(PlaybackParameters playbackParameters) {
        k0 k0Var = this.e1;
        k0Var.getClass();
        k0Var.B = new PlaybackParameters(ke.d0.h(playbackParameters.f5275d, 0.1f, 8.0f), ke.d0.h(playbackParameters.f5276e, 0.1f, 8.0f));
        if (k0Var.s()) {
            k0Var.r();
            return;
        }
        g0 g0Var = new g0(playbackParameters, -9223372036854775807L, -9223372036854775807L);
        if (k0Var.m()) {
            k0Var.f12571z = g0Var;
        } else {
            k0Var.A = g0Var;
        }
    }

    @Override // cd.s
    public final boolean d0(long j, long j5, cd.l lVar, ByteBuffer byteBuffer, int i5, int i6, int i10, long j7, boolean z5, boolean z6, Format format) {
        byteBuffer.getClass();
        if (this.f12581i1 != null && (i6 & 2) != 0) {
            lVar.getClass();
            lVar.releaseOutputBuffer(i5, false);
            return true;
        }
        k0 k0Var = this.e1;
        if (z5) {
            if (lVar != null) {
                lVar.releaseOutputBuffer(i5, false);
            }
            this.X0.f5382f += i10;
            k0Var.K = true;
            return true;
        }
        try {
            if (!k0Var.j(byteBuffer, j7, i10)) {
                return false;
            }
            if (lVar != null) {
                lVar.releaseOutputBuffer(i5, false);
            }
            this.X0.f5381e += i10;
            return true;
        } catch (s e9) {
            throw f(e9, this.f12580h1, e9.f12639e, 5001);
        } catch (t e10) {
            throw f(e10, format, e10.f12654e, 5002);
        }
    }

    @Override // cd.s
    public final void g0() {
        try {
            k0 k0Var = this.e1;
            if (!k0Var.T && k0Var.m() && k0Var.c()) {
                k0Var.o();
                k0Var.T = true;
            }
        } catch (t e9) {
            throw f(e9, e9.f12655i, e9.f12654e, 5002);
        }
    }

    @Override // hc.e
    public final String h() {
        return "MediaCodecAudioRenderer";
    }

    @Override // hc.e
    public final boolean j() {
        if (!this.T0) {
            return false;
        }
        k0 k0Var = this.e1;
        if (k0Var.m()) {
            return k0Var.T && !k0Var.k();
        }
        return true;
    }

    @Override // cd.s, hc.e
    public final boolean k() {
        return this.e1.k() || super.k();
    }

    @Override // cd.s, hc.e
    public final void l() {
        e4.c cVar = this.f12577d1;
        this.f12585m1 = true;
        this.f12580h1 = null;
        try {
            this.e1.d();
            try {
                super.l();
            } finally {
            }
        } catch (Throwable th2) {
            try {
                super.l();
                throw th2;
            } finally {
            }
        }
    }

    @Override // hc.e
    public final void m(boolean z5, boolean z6) {
        DecoderCounters decoderCounters = new DecoderCounters();
        this.X0 = decoderCounters;
        e4.c cVar = this.f12577d1;
        Handler handler = (Handler) cVar.f7939e;
        if (handler != null) {
            handler.post(new q(cVar, decoderCounters, 0));
        }
        o1 o1Var = this.f9661v;
        o1Var.getClass();
        boolean z7 = o1Var.a;
        k0 k0Var = this.e1;
        if (z7) {
            k0Var.getClass();
            ke.b.k(ke.d0.a >= 21);
            ke.b.k(k0Var.W);
            if (!k0Var.a0) {
                k0Var.a0 = true;
                k0Var.d();
            }
        } else if (k0Var.a0) {
            k0Var.a0 = false;
            k0Var.d();
        }
        ic.c0 c0Var = this.f9663x;
        c0Var.getClass();
        k0Var.f12562q = c0Var;
    }

    @Override // cd.s
    public final boolean m0(Format format) {
        return this.e1.g(format) != 0;
    }

    @Override // cd.s, hc.e
    public final void n(long j, boolean z5) {
        super.n(j, z5);
        this.e1.d();
        this.f12582j1 = j;
        this.f12583k1 = true;
        this.f12584l1 = true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:24:0x0050, code lost:
    
        if ((r5.isEmpty() ? null : (cd.o) r5.get(0)) != null) goto L30;
     */
    @Override // cd.s
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int n0(cd.t tVar, Format format) {
        boolean z5;
        boolean z6 = true;
        int e9 = hc.e.e(1, 0, 0);
        if (!ke.o.j(format.I)) {
            return hc.e.e(0, 0, 0);
        }
        int i5 = ke.d0.a >= 21 ? 32 : 0;
        int i6 = format.f5226d0;
        boolean z7 = i6 != 0;
        boolean z8 = i6 == 0 || i6 == 2;
        int i10 = 8;
        k0 k0Var = this.e1;
        if (z8 && k0Var.g(format) != 0) {
            if (z7) {
                List e10 = cd.z.e("audio/raw", false, false);
            }
            return hc.e.e(4, 8, i5);
        }
        if (!"audio/raw".equals(format.I) || k0Var.g(format) != 0) {
            int i11 = format.V;
            int i12 = format.W;
            hc.f0 f0Var = new hc.f0();
            f0Var.k = "audio/raw";
            f0Var.f9690x = i11;
            f0Var.f9691y = i12;
            f0Var.f9692z = 2;
            if (k0Var.g(new Format(f0Var)) != 0) {
                fi.r0 s02 = s0(tVar, format, false, k0Var);
                if (!s02.isEmpty()) {
                    if (!z8) {
                        return hc.e.e(2, 0, 0);
                    }
                    cd.o oVar = (cd.o) s02.get(0);
                    boolean d6 = oVar.d(format);
                    if (!d6) {
                        for (int i13 = 1; i13 < s02.f8706v; i13++) {
                            cd.o oVar2 = (cd.o) s02.get(i13);
                            if (oVar2.d(format)) {
                                z5 = false;
                                oVar = oVar2;
                                break;
                            }
                        }
                    }
                    z5 = true;
                    z6 = d6;
                    int i14 = z6 ? 4 : 3;
                    if (z6 && oVar.e(format)) {
                        i10 = 16;
                    }
                    return i14 | i10 | i5 | (oVar.f3446g ? 64 : 0) | (z5 ? IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT : 0);
                }
            }
        }
        return e9;
    }

    @Override // hc.e
    public final void o() {
        h hVar;
        j jVar = this.e1.f12569x;
        if (jVar != null) {
            Context context = (Context) jVar.f12530b;
            if (jVar.a) {
                jVar.f12536h = null;
                if (ke.d0.a >= 23 && (hVar = (h) jVar.f12533e) != null) {
                    g.b(context, hVar);
                }
                c4.d dVar = (c4.d) jVar.f12534f;
                if (dVar != null) {
                    context.unregisterReceiver(dVar);
                }
                i iVar = (i) jVar.f12535g;
                if (iVar != null) {
                    iVar.a.unregisterContentObserver(iVar);
                }
                jVar.a = false;
            }
        }
    }

    @Override // hc.e
    public final void p() {
        k0 k0Var = this.e1;
        try {
            try {
                D();
                f0();
                nc.k kVar = this.a0;
                if (kVar != null) {
                    kVar.d(null);
                }
                this.a0 = null;
            } catch (Throwable th2) {
                nc.k kVar2 = this.a0;
                if (kVar2 != null) {
                    kVar2.d(null);
                }
                this.a0 = null;
                throw th2;
            }
        } finally {
            if (this.f12585m1) {
                this.f12585m1 = false;
                k0Var.q();
            }
        }
    }

    @Override // hc.e
    public final void q() {
        k0 k0Var = this.e1;
        k0Var.V = true;
        if (k0Var.m()) {
            w wVar = k0Var.f12556i.f12675f;
            wVar.getClass();
            wVar.a();
            k0Var.f12567v.play();
        }
    }

    @Override // hc.e
    public final void r() {
        t0();
        k0 k0Var = this.e1;
        k0Var.V = false;
        if (k0Var.m()) {
            x xVar = k0Var.f12556i;
            xVar.d();
            if (xVar.f12692y == -9223372036854775807L) {
                w wVar = xVar.f12675f;
                wVar.getClass();
                wVar.a();
                k0Var.f12567v.pause();
            }
        }
    }

    public final int r0(cd.o oVar, Format format) {
        int i5;
        if (!"OMX.google.raw.decoder".equals(oVar.a) || (i5 = ke.d0.a) >= 24 || (i5 == 23 && ke.d0.H(this.f12576c1))) {
            return format.J;
        }
        return -1;
    }

    public final void t0() {
        long j;
        long j5;
        long u5;
        long j7;
        boolean j10 = j();
        k0 k0Var = this.e1;
        e4.m mVar = k0Var.f12544b;
        if (!k0Var.m() || k0Var.L) {
            j = Long.MIN_VALUE;
            j5 = Long.MIN_VALUE;
        } else {
            long min = Math.min(k0Var.f12556i.a(j10), ke.d0.O(k0Var.f12565t.f12520e, k0Var.i()));
            ArrayDeque arrayDeque = k0Var.j;
            while (!arrayDeque.isEmpty() && min >= ((g0) arrayDeque.getFirst()).f12526c) {
                k0Var.A = (g0) arrayDeque.remove();
            }
            g0 g0Var = k0Var.A;
            long j11 = min - g0Var.f12526c;
            if (g0Var.a.equals(PlaybackParameters.f5274v)) {
                u5 = k0Var.A.f12525b + j11;
                j = Long.MIN_VALUE;
            } else if (arrayDeque.isEmpty()) {
                s0 s0Var = (s0) mVar.f7965v;
                if (s0Var.f12651o >= 1024) {
                    long j12 = s0Var.f12650n;
                    s0Var.j.getClass();
                    long j13 = j12 - ((r4.k * r4.f12619b) * 2);
                    int i5 = s0Var.f12646h.a;
                    int i6 = s0Var.f12645g.a;
                    if (i5 == i6) {
                        j7 = ke.d0.P(j11, j13, s0Var.f12651o);
                        j = Long.MIN_VALUE;
                    } else {
                        j = Long.MIN_VALUE;
                        j7 = ke.d0.P(j11, j13 * i5, s0Var.f12651o * i6);
                    }
                } else {
                    j = Long.MIN_VALUE;
                    j7 = (long) (s0Var.f12641c * j11);
                }
                u5 = j7 + k0Var.A.f12525b;
            } else {
                j = Long.MIN_VALUE;
                g0 g0Var2 = (g0) arrayDeque.getFirst();
                u5 = g0Var2.f12525b - ke.d0.u(g0Var2.f12526c - min, k0Var.A.a.f5275d);
            }
            j5 = ke.d0.O(k0Var.f12565t.f12520e, ((q0) mVar.f7964i).f12617t) + u5;
        }
        if (j5 != j) {
            if (!this.f12584l1) {
                j5 = Math.max(this.f12582j1, j5);
            }
            this.f12582j1 = j5;
            this.f12584l1 = false;
        }
    }

    @Override // hc.e
    public final ke.n g() {
        return this;
    }
}
