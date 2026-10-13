package hc;

import android.content.ClipData;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.Log;
import android.view.Display;
import androidx.appcompat.widget.AppCompatEditText;
import com.facebook.cache.common.CacheKey;
import com.facebook.imagepipeline.core.ImagePipeline;
import com.facebook.react.bridge.ReadableMap;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.metadata.Metadata;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.video.VideoSize;
import io.sentry.ILogger;
import io.sentry.IScope;
import io.sentry.SentryLevel;
import io.sentry.android.replay.capture.BufferCaptureStrategy;
import io.sentry.android.replay.capture.SessionCaptureStrategy;
import io.sentry.c6;
import io.sentry.d6;
import io.sentry.g6;
import io.sentry.h6;
import io.sentry.j6;
import io.sentry.m3;
import io.sentry.q6;
import io.sentry.r3;
import io.sentry.react.RNSentryModuleImpl;
import io.sentry.v5;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.List;
import java.util.ListIterator;
import java.util.concurrent.CancellationException;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicLong;
import java.util.concurrent.atomic.AtomicReference;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class m implements ei.j, ke.j, fh.n, j6, r3, io.sentry.util.runtime.a, io.sentry.util.d, m3, o8.f {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9783d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f9784e;

    public /* synthetic */ m(int i5, Object obj) {
        this.f9783d = i5;
        this.f9784e = obj;
    }

    public boolean a(ha.l lVar, int i5, Bundle bundle) {
        androidx.core.view.e eVar;
        AppCompatEditText appCompatEditText = (AppCompatEditText) this.f9784e;
        int i6 = Build.VERSION.SDK_INT;
        if (i6 >= 25 && (i5 & 1) != 0) {
            try {
                ((m1.f) lVar.f9613d).b();
                Parcelable parcelable = (Parcelable) ((m1.f) lVar.f9613d).c();
                bundle = bundle == null ? new Bundle() : new Bundle(bundle);
                bundle.putParcelable("androidx.core.view.extra.INPUT_CONTENT_INFO", parcelable);
            } catch (Exception e9) {
                Log.w("InputConnectionCompat", "Can't insert content from IME; requestPermission() failed", e9);
                return false;
            }
        }
        m1.f fVar = (m1.f) lVar.f9613d;
        ClipData clipData = new ClipData(fVar.getDescription(), new ClipData.Item(fVar.a()));
        if (i6 >= 31) {
            eVar = new androidx.core.view.d(clipData, 2);
        } else {
            androidx.core.view.f fVar2 = new androidx.core.view.f();
            fVar2.f1580b = clipData;
            fVar2.f1581c = 2;
            eVar = fVar2;
        }
        eVar.a(fVar.e());
        eVar.setExtras(bundle);
        return androidx.core.view.s0.l(appCompatEditText, eVar.build()) == null;
    }

    @Override // o8.f
    public boolean apply(Object obj) {
        Uri uri = (Uri) this.f9784e;
        CacheKey key = (CacheKey) obj;
        CancellationException cancellationException = ImagePipeline.k;
        Intrinsics.checkNotNullParameter(uri, "$uri");
        Intrinsics.checkNotNullParameter(key, "key");
        return key.a(uri);
    }

    @Override // io.sentry.util.d
    public Object b() {
        io.sentry.cache.tape.i iVar;
        switch (this.f9783d) {
            case 20:
                return ((io.sentry.cache.c) this.f9784e).f11431d.getSerializer();
            case 21:
                io.sentry.cache.g gVar = (io.sentry.cache.g) this.f9784e;
                v5 v5Var = gVar.a;
                File b10 = io.sentry.cache.a.b(v5Var, ".scope-cache");
                if (b10 == null) {
                    v5Var.getLogger().u(SentryLevel.INFO, "Cache dir is not set, cannot store in scope cache", new Object[0]);
                    return new io.sentry.cache.tape.b();
                }
                File file = new File(b10, "breadcrumbs.json");
                try {
                    int maxBreadcrumbs = v5Var.getMaxBreadcrumbs();
                    RandomAccessFile i5 = io.sentry.cache.tape.i.i(file);
                    try {
                        try {
                            iVar = new io.sentry.cache.tape.i(file, i5, maxBreadcrumbs);
                        } catch (IOException e9) {
                            v5Var.getLogger().k(SentryLevel.ERROR, "Failed to create breadcrumbs queue", e9);
                            return new io.sentry.cache.tape.b();
                        }
                    } catch (Throwable th2) {
                        i5.close();
                        throw th2;
                    }
                } catch (IOException unused) {
                    file.delete();
                    int maxBreadcrumbs2 = v5Var.getMaxBreadcrumbs();
                    RandomAccessFile i6 = io.sentry.cache.tape.i.i(file);
                    try {
                        iVar = new io.sentry.cache.tape.i(file, i6, maxBreadcrumbs2);
                    } catch (Throwable th3) {
                        i6.close();
                        throw th3;
                    }
                }
                return new io.sentry.cache.tape.e(iVar, new gj.c(18, gVar));
            default:
                return Boolean.valueOf(io.sentry.util.f.b("androidx.core.app.FrameMetricsAggregator", (ILogger) this.f9784e));
        }
    }

    @Override // io.sentry.j6
    public void c(h6 h6Var) {
        d6 d6Var = (d6) this.f9784e;
        io.sentry.k kVar = d6Var.f11523q;
        if (kVar != null) {
            kVar.b(h6Var);
        }
        c6 c6Var = d6Var.f11514f;
        q6 q6Var = d6Var.f11524r;
        if (q6Var.f11921g == null) {
            if (c6Var.a) {
                d6Var.q(c6Var.f11430b, null);
                return;
            }
            return;
        }
        if (q6Var.f11920f) {
            ListIterator listIterator = d6Var.f11511c.listIterator();
            while (listIterator.hasNext()) {
                h6 h6Var2 = (h6) listIterator.next();
                if (!h6Var2.f11593f && h6Var2.f11589b == null) {
                    return;
                }
            }
        }
        d6Var.m();
    }

    @Override // io.sentry.m3
    public void d(e4.m mVar) {
        ((IScope) this.f9784e).q(new e4.m(25));
    }

    public void e(Display display) {
        le.t tVar = (le.t) this.f9784e;
        tVar.getClass();
        if (display != null) {
            long refreshRate = (long) (1.0E9d / display.getRefreshRate());
            tVar.k = refreshRate;
            tVar.f13936l = (refreshRate * 80) / 100;
        } else {
            ke.b.N("VideoFrameReleaseHelper", "Unable to query display refresh rate");
            tVar.k = -9223372036854775807L;
            tVar.f13936l = -9223372036854775807L;
        }
    }

    @Override // ei.j
    public Object get() {
        switch (this.f9783d) {
            case 0:
                return (ie.g) this.f9784e;
            default:
                return Boolean.valueOf(((com.google.android.exoplayer2.e) this.f9784e).V);
        }
    }

    @Override // io.sentry.r3
    public void h(IScope iScope) {
        g6 v5;
        switch (this.f9783d) {
            case 10:
                iScope.M(new cc.i(28, (io.sentry.f1) this.f9784e, iScope));
                break;
            case 11:
            case 12:
            case 13:
            default:
                RNSentryModuleImpl.lambda$addBreadcrumb$6((ReadableMap) this.f9784e, iScope);
                break;
            case 14:
                ((AtomicReference) this.f9784e).set(iScope.clone());
                break;
            case 15:
                AtomicLong atomicLong = ((io.sentry.android.core.w0) this.f9784e).f11347d;
                if (atomicLong.get() == 0 && (v5 = iScope.v()) != null && v5.c() != null) {
                    atomicLong.set(v5.c().getTime());
                    break;
                }
                break;
            case 16:
                AtomicBoolean atomicBoolean = (AtomicBoolean) this.f9784e;
                g6 v6 = iScope.v();
                if (v6 != null && v6.c() != null) {
                    atomicBoolean.set(true);
                    break;
                }
                break;
            case 17:
                iScope.M(new io.sentry.android.core.w(2, (io.sentry.android.core.internal.gestures.f) this.f9784e, iScope));
                break;
            case 18:
                BufferCaptureStrategy.captureReplay$lambda$1((BufferCaptureStrategy) this.f9784e, iScope);
                break;
            case 19:
                SessionCaptureStrategy.start$lambda$0((SessionCaptureStrategy) this.f9784e, iScope);
                break;
        }
    }

    @Override // ke.j
    public void invoke(Object obj) {
        switch (this.f9783d) {
            case 1:
                ((com.google.android.exoplayer2.h) obj).onMediaMetadataChanged((MediaMetadata) this.f9784e);
                break;
            case 2:
                ((com.google.android.exoplayer2.h) obj).onCues((List) this.f9784e);
                break;
            case 3:
                ((com.google.android.exoplayer2.h) obj).onCues((CueGroup) this.f9784e);
                break;
            case 4:
                ((com.google.android.exoplayer2.h) obj).onMediaMetadataChanged(((w) this.f9784e).f9929d.M);
                break;
            case 5:
                ((com.google.android.exoplayer2.h) obj).onMetadata((Metadata) this.f9784e);
                break;
            default:
                ((com.google.android.exoplayer2.h) obj).onVideoSizeChanged((VideoSize) this.f9784e);
                break;
        }
    }

    @Override // io.sentry.util.runtime.a
    public Object run() {
        switch (this.f9783d) {
            case 11:
                return io.sentry.android.core.t0.a(((io.sentry.android.core.g0) this.f9784e).f11138d);
            case 12:
                return io.sentry.android.core.t0.a(((io.sentry.android.core.m0) this.f9784e).f11267d);
            default:
                return io.sentry.android.core.t0.a(((io.sentry.android.core.o0) this.f9784e).a);
        }
    }

    public /* synthetic */ m(int i5, Object obj, Object obj2) {
        this.f9783d = i5;
        this.f9784e = obj2;
    }
}
