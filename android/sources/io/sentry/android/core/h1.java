package io.sentry.android.core;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.graphics.Typeface;
import android.os.Build;
import android.os.SystemClock;
import android.os.Trace;
import android.view.Choreographer;
import android.view.Surface;
import androidx.collection.SimpleArrayMap;
import androidx.customview.widget.ViewDragHelper;
import androidx.dynamicanimation.animation.SpringAnimation;
import com.discord.misc.utilities.measure.ViewMeasureExtensionsKt;
import com.discord.qr.scanner.QRScanner;
import com.discord.react.utilities.ReactSelfMeasurer;
import com.google.android.material.sidesheet.SideSheetBehavior;
import io.sentry.SentryLevel;
import io.sentry.android.replay.ReplayIntegration;
import io.sentry.android.replay.RootViewsSpy;
import io.sentry.android.replay.screenshot.PixelCopyStrategy;
import io.sentry.react.RNSentryModuleImpl;
import io.sentry.react.RNSentryOnDrawReporterManager;
import java.io.IOException;
import java.io.InputStream;
import java.lang.reflect.Method;
import java.nio.MappedByteBuffer;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.zip.ZipInputStream;

/* loaded from: classes3.dex */
public final /* synthetic */ class h1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11160d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f11161e;

    public /* synthetic */ h1(int i5, Object obj) {
        this.f11160d = i5;
        this.f11161e = obj;
    }

    /* JADX WARN: Removed duplicated region for block: B:182:0x031f  */
    /* JADX WARN: Removed duplicated region for block: B:184:0x0323 A[SYNTHETIC] */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        boolean z5;
        long j;
        boolean z6;
        boolean z7 = true;
        boolean z8 = false;
        switch (this.f11160d) {
            case 0:
                ((SystemEventsBreadcrumbsIntegration) this.f11161e).i();
                return;
            case 1:
                ((io.sentry.internal.modules.f) this.f11161e).a();
                return;
            case 2:
                ReplayIntegration.finalizePreviousReplay$lambda$10((ReplayIntegration) this.f11161e);
                return;
            case 3:
                RootViewsSpy.Companion.install$lambda$1$lambda$0((RootViewsSpy) this.f11161e);
                return;
            case 4:
                PixelCopyStrategy.close$lambda$4((PixelCopyStrategy) this.f11161e);
                return;
            case 5:
                io.sentry.cache.g gVar = (io.sentry.cache.g) this.f11161e;
                try {
                    ((io.sentry.cache.tape.f) gVar.f11442b.a()).clear();
                    return;
                } catch (IOException e9) {
                    gVar.a.getLogger().k(SentryLevel.ERROR, "Failed to clear breadcrumbs from file queue", e9);
                    return;
                }
            case 6:
                io.sentry.logger.c cVar = (io.sentry.logger.c) this.f11161e;
                cVar.f11660w.a(cVar.f11657e.getShutdownTimeoutMillis());
                return;
            case 7:
                io.sentry.logger.c cVar2 = (io.sentry.logger.c) this.f11161e;
                cVar2.f11660w.a(cVar2.f11657e.getShutdownTimeoutMillis());
                return;
            case 8:
                ((RNSentryModuleImpl) this.f11161e).lambda$createEmitNewFrameEvent$0();
                return;
            case 9:
                ((RNSentryOnDrawReporterManager.RNSentryOnDrawReporterView) this.f11161e).lambda$processPropsChanged$0();
                return;
            case 10:
                j2.c cVar3 = (j2.c) ((j2.c) this.f11161e).f12387c.f18811d;
                long uptimeMillis = SystemClock.uptimeMillis();
                ArrayList arrayList = cVar3.f12386b;
                long uptimeMillis2 = SystemClock.uptimeMillis();
                int i5 = 0;
                while (i5 < arrayList.size()) {
                    SpringAnimation springAnimation = (SpringAnimation) arrayList.get(i5);
                    if (springAnimation != null) {
                        SimpleArrayMap simpleArrayMap = cVar3.a;
                        Long l6 = (Long) simpleArrayMap.get(springAnimation);
                        if (l6 != null) {
                            if (l6.longValue() < uptimeMillis2) {
                                simpleArrayMap.remove(springAnimation);
                            }
                        }
                        long j5 = springAnimation.f1882i;
                        if (j5 == 0) {
                            springAnimation.f1882i = uptimeMillis;
                            springAnimation.e(springAnimation.f1875b);
                        } else {
                            long j7 = uptimeMillis - j5;
                            springAnimation.f1882i = uptimeMillis;
                            float f2 = SpringAnimation.d().f12391g;
                            long j10 = f2 == 0.0f ? 2147483647L : (long) (j7 / f2);
                            if (springAnimation.f1886o) {
                                float f10 = springAnimation.f1885n;
                                if (f10 != Float.MAX_VALUE) {
                                    z5 = z7;
                                    springAnimation.f1884m.f12403i = f10;
                                    springAnimation.f1885n = Float.MAX_VALUE;
                                } else {
                                    z5 = z7;
                                }
                                springAnimation.f1875b = (float) springAnimation.f1884m.f12403i;
                                springAnimation.a = 0.0f;
                                springAnimation.f1886o = z8;
                                j = uptimeMillis;
                            } else {
                                z5 = z7;
                                if (springAnimation.f1885n != Float.MAX_VALUE) {
                                    j = uptimeMillis;
                                    long j11 = j10 / 2;
                                    j2.f c6 = springAnimation.f1884m.c(springAnimation.f1875b, springAnimation.a, j11);
                                    j2.i iVar = springAnimation.f1884m;
                                    iVar.f12403i = springAnimation.f1885n;
                                    springAnimation.f1885n = Float.MAX_VALUE;
                                    j2.f c8 = iVar.c(c6.a, c6.f12393b, j11);
                                    springAnimation.f1875b = c8.a;
                                    springAnimation.a = c8.f12393b;
                                } else {
                                    j = uptimeMillis;
                                    j2.f c10 = springAnimation.f1884m.c(springAnimation.f1875b, springAnimation.a, j10);
                                    springAnimation.f1875b = c10.a;
                                    springAnimation.a = c10.f12393b;
                                }
                                float max = Math.max(springAnimation.f1875b, springAnimation.f1881h);
                                springAnimation.f1875b = max;
                                springAnimation.f1875b = Math.min(max, springAnimation.f1880g);
                                float f11 = springAnimation.a;
                                j2.i iVar2 = springAnimation.f1884m;
                                iVar2.getClass();
                                if (Math.abs(f11) >= iVar2.f12399e || Math.abs(r3 - ((float) iVar2.f12403i)) >= iVar2.f12398d) {
                                    z6 = false;
                                    float min = Math.min(springAnimation.f1875b, springAnimation.f1880g);
                                    springAnimation.f1875b = min;
                                    float max2 = Math.max(min, springAnimation.f1881h);
                                    springAnimation.f1875b = max2;
                                    springAnimation.e(max2);
                                    if (!z6) {
                                        springAnimation.c(false);
                                    }
                                    i5++;
                                    z7 = z5;
                                    uptimeMillis = j;
                                    z8 = false;
                                } else {
                                    springAnimation.f1875b = (float) springAnimation.f1884m.f12403i;
                                    springAnimation.a = 0.0f;
                                }
                            }
                            z6 = z5;
                            float min2 = Math.min(springAnimation.f1875b, springAnimation.f1880g);
                            springAnimation.f1875b = min2;
                            float max22 = Math.max(min2, springAnimation.f1881h);
                            springAnimation.f1875b = max22;
                            springAnimation.e(max22);
                            if (!z6) {
                            }
                            i5++;
                            z7 = z5;
                            uptimeMillis = j;
                            z8 = false;
                        }
                    }
                    z5 = z7;
                    j = uptimeMillis;
                    i5++;
                    z7 = z5;
                    uptimeMillis = j;
                    z8 = false;
                }
                if (cVar3.f12390f) {
                    for (int size = arrayList.size() - 1; size >= 0; size--) {
                        if (arrayList.get(size) == null) {
                            arrayList.remove(size);
                        }
                    }
                    if (arrayList.size() == 0 && Build.VERSION.SDK_INT >= 33) {
                        cVar3.f12392h.a();
                    }
                    cVar3.f12390f = false;
                }
                if (arrayList.size() > 0) {
                    ((Choreographer) cVar3.f12389e.f11622e).postFrameCallback(new com.facebook.react.modules.core.b(2, cVar3.f12388d));
                    return;
                }
                return;
            case 11:
                ((jm.b) this.f11161e).m();
                return;
            case 12:
                ((jm.h) this.f11161e).M();
                return;
            case 13:
                ((jm.i) this.f11161e).a(false);
                return;
            case 14:
                ((jm.s) this.f11161e).a(false);
                return;
            case 15:
                ((jm.a0) this.f11161e).m();
                return;
            case 16:
                k2.s sVar = (k2.s) this.f11161e;
                synchronized (sVar.f13147d) {
                    try {
                        if (sVar.f13151h == null) {
                            return;
                        }
                        try {
                            i1.g c11 = sVar.c();
                            int i6 = c11.f10457f;
                            if (i6 == 2) {
                                synchronized (sVar.f13147d) {
                                }
                            }
                            if (i6 != 0) {
                                throw new RuntimeException("fetchFonts result is not OK. (" + i6 + ")");
                            }
                            try {
                                Method method = f1.e.f8308b;
                                Trace.beginSection("EmojiCompat.FontRequestEmojiCompatConfig.buildTypeface");
                                lh.f fVar = sVar.f13146c;
                                Context context = sVar.a;
                                fVar.getClass();
                                i1.g[] gVarArr = {c11};
                                zk.a aVar = b1.f.a;
                                Trace.beginSection(com.facebook.imagepipeline.nativecode.c.Y("TypefaceCompat.createFromFontInfo"));
                                try {
                                    Typeface i10 = b1.f.a.i(context, gVarArr, 0);
                                    Trace.endSection();
                                    MappedByteBuffer C = zo.c0.C(sVar.a, c11.a);
                                    if (C == null || i10 == null) {
                                        throw new RuntimeException("Unable to open file.");
                                    }
                                    try {
                                        Trace.beginSection("EmojiCompat.MetadataRepo.create");
                                        e4.i iVar3 = new e4.i(i10, ys.l.u(C));
                                        Trace.endSection();
                                        synchronized (sVar.f13147d) {
                                            try {
                                                w3.q qVar = sVar.f13151h;
                                                if (qVar != null) {
                                                    qVar.t(iVar3);
                                                }
                                            } finally {
                                            }
                                        }
                                        sVar.b();
                                        return;
                                    } finally {
                                        Method method2 = f1.e.f8308b;
                                    }
                                } finally {
                                    Trace.endSection();
                                }
                            } catch (Throwable th2) {
                                throw th2;
                            }
                        } catch (Throwable th3) {
                            synchronized (sVar.f13147d) {
                                try {
                                    w3.q qVar2 = sVar.f13151h;
                                    if (qVar2 != null) {
                                        qVar2.s(th3);
                                    }
                                    sVar.b();
                                    return;
                                } finally {
                                }
                            }
                        }
                    } finally {
                    }
                }
            case 17:
                ((k6.b) this.f11161e).invoke();
                return;
            case 18:
                x4.h.b((InputStream) this.f11161e);
                return;
            case 19:
                x4.h.b((ZipInputStream) this.f11161e);
                return;
            case 20:
                ((l4.c0) this.f11161e).c();
                return;
            case 21:
                ll.c cVar4 = (ll.c) this.f11161e;
                cVar4.getClass();
                try {
                    cVar4.f14091l = cVar4.a.getNetworkCapabilities(cVar4.k);
                    cVar4.e();
                    return;
                } catch (SecurityException unused) {
                    return;
                }
            case 22:
                ViewMeasureExtensionsKt.measureAndLayout((QRScanner) this.f11161e);
                return;
            case 23:
                me.k kVar = (me.k) this.f11161e;
                Surface surface = kVar.E;
                if (surface != null) {
                    Iterator it = kVar.f14479d.iterator();
                    while (it.hasNext()) {
                        ((hc.w) it.next()).f9929d.r0(null);
                    }
                }
                SurfaceTexture surfaceTexture = kVar.f14485y;
                if (surfaceTexture != null) {
                    surfaceTexture.release();
                }
                if (surface != null) {
                    surface.release();
                }
                kVar.f14485y = null;
                kVar.E = null;
                return;
            case 24:
                af.k kVar2 = (af.k) this.f11161e;
                kVar2.f565c = false;
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) kVar2.f564b;
                ViewDragHelper viewDragHelper = sideSheetBehavior.f6094i;
                if (viewDragHelper != null && viewDragHelper.g()) {
                    kVar2.g(kVar2.f566d);
                    return;
                } else {
                    if (sideSheetBehavior.f6093h == 2) {
                        sideSheetBehavior.x(kVar2.f566d);
                        return;
                    }
                    return;
                }
            case 25:
                ReactSelfMeasurer.measureAndLayoutRunnable$lambda$0((ReactSelfMeasurer) this.f11161e);
                return;
            case 26:
                nc.e eVar = (nc.e) this.f11161e;
                if (eVar.f15007i) {
                    return;
                }
                nc.k kVar3 = eVar.f15006e;
                if (kVar3 != null) {
                    kVar3.d(eVar.f15005d);
                }
                eVar.f15008v.f15019n.remove(eVar);
                eVar.f15007i = true;
                return;
            case 27:
                ((nc.c) this.f11161e).d(null);
                return;
            case 28:
                ((oh.c) this.f11161e).s(true);
                return;
            default:
                oh.k kVar4 = (oh.k) this.f11161e;
                boolean isPopupShowing = kVar4.f15904h.isPopupShowing();
                kVar4.s(isPopupShowing);
                kVar4.f15907m = isPopupShowing;
                return;
        }
    }
}
