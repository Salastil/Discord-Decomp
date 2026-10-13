package jc;

import android.graphics.SurfaceTexture;
import android.graphics.drawable.Drawable;
import android.media.AudioTrack;
import android.net.Uri;
import android.os.Looper;
import android.os.Process;
import android.os.StrictMode;
import android.util.Log;
import android.view.Surface;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import com.discord.device.DeviceAccessibilityModule;
import com.discord.device.DeviceSettingsModule;
import com.facebook.react.bridge.ReadableArray;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.video.VideoSize;
import com.google.common.util.concurrent.ListenableFuture;
import java.util.Iterator;
import java.util.concurrent.Callable;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final /* synthetic */ class b0 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12510d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f12511e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f12512i;

    public /* synthetic */ b0(int i5, Object obj, Object obj2) {
        this.f12510d = i5;
        this.f12511e = obj;
        this.f12512i = obj2;
    }

    private final void a() {
        w3.e eVar = (w3.e) this.f12511e;
        e4.j jVar = (e4.j) this.f12512i;
        synchronized (eVar.k) {
            try {
                Iterator it = eVar.j.iterator();
                while (it.hasNext()) {
                    ((w3.c) it.next()).e(jVar, false);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        n1.k kVar;
        boolean z5 = false;
        n1.h hVar = null;
        switch (this.f12510d) {
            case 0:
                AudioTrack audioTrack = (AudioTrack) this.f12511e;
                a5.h0 h0Var = (a5.h0) this.f12512i;
                try {
                    audioTrack.flush();
                    audioTrack.release();
                    h0Var.q();
                    synchronized (k0.f12542g0) {
                        try {
                            int i5 = k0.f12543i0 - 1;
                            k0.f12543i0 = i5;
                            if (i5 == 0) {
                                k0.h0.shutdown();
                                k0.h0 = null;
                            }
                        } finally {
                        }
                    }
                    return;
                } catch (Throwable th2) {
                    h0Var.q();
                    synchronized (k0.f12542g0) {
                        try {
                            int i6 = k0.f12543i0 - 1;
                            k0.f12543i0 = i6;
                            if (i6 == 0) {
                                k0.h0.shutdown();
                                k0.h0 = null;
                            }
                            throw th2;
                        } finally {
                        }
                    }
                }
            case 1:
                ((ie.r) this.f12512i).a(((ke.u) this.f12511e).f());
                return;
            case 2:
                e4.l lVar = (e4.l) this.f12511e;
                VideoSize videoSize = (VideoSize) this.f12512i;
                hc.w wVar = (hc.w) lVar.f7960i;
                int i10 = ke.d0.a;
                com.google.android.exoplayer2.d dVar = wVar.f9929d;
                dVar.f5355e0 = videoSize;
                dVar.f5363l.e(25, new hc.m(6, videoSize));
                return;
            case 3:
                e4.l lVar2 = (e4.l) this.f12511e;
                String str = (String) this.f12512i;
                hc.w wVar2 = (hc.w) lVar2.f7960i;
                int i11 = ke.d0.a;
                ic.u uVar = (ic.u) wVar2.f9929d.f5368q;
                AnalyticsListener$EventTime j = uVar.j();
                uVar.k(j, 1019, new ic.p(j, str, 1));
                return;
            case 4:
                e4.l lVar3 = (e4.l) this.f12511e;
                Exception exc = (Exception) this.f12512i;
                hc.w wVar3 = (hc.w) lVar3.f7960i;
                int i12 = ke.d0.a;
                ic.u uVar2 = (ic.u) wVar3.f9929d.f5368q;
                AnalyticsListener$EventTime j5 = uVar2.j();
                uVar2.k(j5, 1030, new ic.r(j5, exc, 2));
                return;
            case 5:
                me.k kVar2 = (me.k) this.f12511e;
                SurfaceTexture surfaceTexture = (SurfaceTexture) this.f12512i;
                SurfaceTexture surfaceTexture2 = kVar2.f14485y;
                Surface surface = kVar2.E;
                Surface surface2 = new Surface(surfaceTexture);
                kVar2.f14485y = surfaceTexture;
                kVar2.E = surface2;
                Iterator it = kVar2.f14479d.iterator();
                while (it.hasNext()) {
                    ((hc.w) it.next()).f9929d.r0(surface2);
                }
                if (surfaceTexture2 != null) {
                    surfaceTexture2.release();
                }
                if (surface != null) {
                    surface.release();
                    return;
                }
                return;
            case 6:
                nc.e eVar = (nc.e) this.f12511e;
                Format format = (Format) this.f12512i;
                nc.f fVar = eVar.f15008v;
                if (fVar.f15021p == 0 || eVar.f15007i) {
                    return;
                }
                Looper looper = fVar.f15025t;
                looper.getClass();
                eVar.f15006e = fVar.f(looper, eVar.f15005d, format, false);
                fVar.f15019n.add(eVar);
                return;
            case 7:
                nd.h0 h0Var2 = (nd.h0) this.f12511e;
                qc.s sVar = (qc.s) this.f12512i;
                h0Var2.V = h0Var2.O == null ? sVar : new qc.n(-9223372036854775807L);
                h0Var2.W = sVar.i();
                if (!h0Var2.f15101c0 && sVar.i() == -9223372036854775807L) {
                    z5 = true;
                }
                h0Var2.X = z5;
                h0Var2.Y = z5 ? 7 : 1;
                h0Var2.f15113y.u(h0Var2.W, sVar.d(), h0Var2.X);
                if (h0Var2.S) {
                    return;
                }
                h0Var2.t();
                return;
            case 8:
                ni.o oVar = (ni.o) this.f12511e;
                yi.a aVar = (yi.a) this.f12512i;
                if (oVar.f15506b != ni.o.f15505d) {
                    throw new IllegalStateException("provide() can be called only once.");
                }
                synchronized (oVar) {
                    kVar = oVar.a;
                    oVar.a = null;
                    oVar.f15506b = aVar;
                }
                kVar.getClass();
                return;
            case 9:
                ni.n nVar = (ni.n) this.f12511e;
                yi.a aVar2 = (yi.a) this.f12512i;
                synchronized (nVar) {
                    try {
                        if (nVar.f15503b == null) {
                            nVar.a.add(aVar2);
                        } else {
                            nVar.f15503b.add(aVar2.get());
                        }
                    } finally {
                    }
                }
                return;
            case 10:
                oi.a aVar3 = (oi.a) this.f12511e;
                Runnable runnable = (Runnable) this.f12512i;
                Process.setThreadPriority(aVar3.f15974c);
                StrictMode.ThreadPolicy threadPolicy = aVar3.f15975d;
                if (threadPolicy != null) {
                    StrictMode.setThreadPolicy(threadPolicy);
                }
                runnable.run();
                return;
            case 11:
                Callable callable = (Callable) this.f12511e;
                oi.g gVar = (oi.g) ((u4.b) this.f12512i).f18810e;
                try {
                    Object call = callable.call();
                    if (call == null) {
                        call = o0.g.f15722y;
                    }
                    if (o0.g.f15721x.h(gVar, null, call)) {
                        o0.g.e(gVar);
                        return;
                    }
                    return;
                } catch (Exception e9) {
                    if (o0.g.f15721x.h(gVar, null, new o0.b(e9))) {
                        o0.g.e(gVar);
                        return;
                    }
                    return;
                }
            case 12:
                ((nr.j) this.f12511e).C((or.d) this.f12512i, Unit.a);
                return;
            case 13:
                String str2 = (String) this.f12511e;
                p2.m violation = (p2.m) this.f12512i;
                Intrinsics.checkNotNullParameter(violation, "$violation");
                Log.e("FragmentStrictMode", "Policy violation with PENALTY_DEATH in " + str2, violation);
                throw violation;
            case 14:
                DeviceAccessibilityModule.enableFocusLock$lambda$2((ReadableArray) this.f12511e, (DeviceAccessibilityModule) this.f12512i);
                return;
            case 15:
                DeviceSettingsModule.setSystemGestureExclusionRects$lambda$2((DeviceSettingsModule) this.f12511e, (ReadableArray) this.f12512i);
                return;
            case 16:
                CredentialProviderPlayServicesImpl.runFallbackClearCredFlow$lambda$2$0$0$0((n1.h) this.f12511e, (Exception) this.f12512i);
                return;
            case 17:
                ((n1.h) this.f12511e).e(this.f12512i);
                return;
            case 18:
                ((n1.h) this.f12511e).onResult((n1.q) this.f12512i);
                return;
            case 19:
                td.b bVar = (td.b) this.f12511e;
                Uri uri = (Uri) this.f12512i;
                bVar.F = false;
                bVar.b(uri);
                return;
            case 20:
                ((u1.d) this.f12511e).f().e(((Ref.ObjectRef) this.f12512i).element);
                return;
            case 21:
                ((u1.d) this.f12511e).f().e((o1.o) this.f12512i);
                return;
            case 22:
                ((u1.d) this.f12511e).f().onResult((n1.q) this.f12512i);
                return;
            case 23:
                ((Function1) this.f12511e).invoke((Drawable) this.f12512i);
                return;
            case 24:
                v1.h hVar2 = (v1.h) this.f12511e;
                n1.f fVar2 = (n1.f) this.f12512i;
                n1.h hVar3 = hVar2.f19169f;
                if (hVar3 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                } else {
                    hVar = hVar3;
                }
                hVar.onResult(fVar2);
                return;
            case 25:
                ((vr.e) ((vr.f) this.f12511e)).g((vr.b) this.f12512i, Unit.a);
                return;
            case 26:
                w1.e eVar2 = (w1.e) this.f12511e;
                n1.c cVar = (n1.c) this.f12512i;
                n1.h hVar4 = eVar2.f19616f;
                if (hVar4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("callback");
                } else {
                    hVar = hVar4;
                }
                hVar.onResult(cVar);
                return;
            case 27:
                ((n1.h) this.f12511e).onResult((n1.f) this.f12512i);
                return;
            case 28:
                a();
                return;
            default:
                w3.r rVar = (w3.r) this.f12511e;
                ListenableFuture listenableFuture = (ListenableFuture) this.f12512i;
                if (rVar.M.f9110d instanceof g4.a) {
                    listenableFuture.cancel(true);
                    return;
                }
                return;
        }
    }
}
