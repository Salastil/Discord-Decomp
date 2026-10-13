package pk;

import android.media.MediaFormat;
import android.os.Bundle;
import android.os.Environment;
import android.os.Message;
import android.os.ParcelFileDescriptor;
import android.os.StatFs;
import android.text.TextUtils;
import android.util.Log;
import android.view.Surface;
import cd.d;
import com.discord.media.utils.Transcoder$convertCompress$3$2;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import com.google.firebase.messaging.r;
import io.sentry.e6;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import org.webrtc.MediaStreamTrack;
import qa.s;
import sk.e;
import wk.f;

/* loaded from: classes3.dex */
public final class b implements Runnable {
    public final String E;
    public final r F;

    /* renamed from: d, reason: collision with root package name */
    public ArrayList f16417d;

    /* renamed from: i, reason: collision with root package name */
    public final int f16419i;

    /* renamed from: x, reason: collision with root package name */
    public final e6 f16422x;

    /* renamed from: y, reason: collision with root package name */
    public final ArrayList f16423y;

    /* renamed from: e, reason: collision with root package name */
    public float f16418e = 0.0f;

    /* renamed from: v, reason: collision with root package name */
    public final s f16420v = new s();

    /* renamed from: w, reason: collision with root package name */
    public final j8.b f16421w = new j8.b(22, (byte) 0);

    public b(String str, ArrayList arrayList, int i5, r rVar) {
        this.E = str;
        this.f16423y = arrayList;
        this.f16419i = i5;
        this.F = rVar;
        e6 e6Var = new e6();
        e6Var.a = new ArrayList(2);
        this.f16422x = e6Var;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [io.sentry.e6] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.util.ArrayList] */
    public final void a() {
        e6 e6Var = this.f16422x;
        String str = this.E;
        r rVar = this.F;
        try {
            try {
                f();
                d();
                b();
            } catch (Exception e9) {
                Log.e("b", "cancel: ", e9);
            }
        } finally {
            rVar.k(str, e6Var.a);
        }
    }

    public final void b() {
        Iterator it = this.f16423y.iterator();
        while (it.hasNext()) {
            try {
                vk.b bVar = ((a) it.next()).f16413e;
                if (!TextUtils.isEmpty("")) {
                    new File("").delete();
                }
            } catch (Exception e9) {
                Log.e("b", "deleteOutputFiles: ", e9);
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [io.sentry.e6] */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.util.ArrayList] */
    public final void c(Exception exc) {
        e6 e6Var = this.f16422x;
        String str = this.E;
        r rVar = this.F;
        try {
            try {
                f();
                d();
                b();
            } catch (Exception e9) {
                Log.e("b", "error: ", e9);
            }
        } finally {
            rVar.l(str, exc, e6Var.a);
        }
    }

    public final void d() {
        ParcelFileDescriptor parcelFileDescriptor;
        if (this.f16417d != null) {
            for (int i5 = 0; i5 < this.f16417d.size(); i5++) {
                try {
                    ((xk.c) this.f16417d.get(i5)).g();
                } catch (Exception e9) {
                    Log.e("b", "release: Exception when stopping track transcoder: ", e9);
                }
            }
        }
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        Iterator it = this.f16423y.iterator();
        while (it.hasNext()) {
            a aVar = (a) it.next();
            hashSet.add(aVar.a);
            hashSet2.add(aVar.f16413e);
        }
        Iterator it2 = hashSet.iterator();
        while (it2.hasNext()) {
            try {
                ((vk.a) it2.next()).release();
            } catch (Exception e10) {
                Log.e("b", "release: Exception when releasing media source: ", e10);
            }
        }
        Iterator it3 = hashSet2.iterator();
        while (it3.hasNext()) {
            vk.b bVar = (vk.b) it3.next();
            bVar.getClass();
            try {
                bVar.f19447c.release();
                try {
                    if (parcelFileDescriptor != null) {
                        parcelFileDescriptor.close();
                        bVar.f19449e = null;
                    }
                } catch (IOException unused) {
                }
            } finally {
                try {
                    parcelFileDescriptor = bVar.f19449e;
                    if (parcelFileDescriptor != null) {
                        parcelFileDescriptor.close();
                        bVar.f19449e = null;
                    }
                } catch (IOException unused2) {
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:175:0x03d0, code lost:
    
        if (r12 >= ((1.0f / r10) + r36.f16418e)) goto L140;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:159:0x03fa  */
    /* JADX WARN: Removed duplicated region for block: B:170:0x03f5 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:177:0x0424  */
    /* JADX WARN: Removed duplicated region for block: B:59:0x0134  */
    /* JADX WARN: Type inference failed for: r7v14, types: [xk.b] */
    /* JADX WARN: Type inference failed for: r7v15, types: [xk.a, xk.c] */
    /* JADX WARN: Type inference failed for: r7v18, types: [java.lang.Object, xk.c] */
    /* JADX WARN: Type inference failed for: r7v20 */
    /* JADX WARN: Type inference failed for: r7v28 */
    /* JADX WARN: Type inference failed for: r7v29 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void e() {
        ArrayList arrayList;
        e6 e6Var;
        String str;
        long j;
        long j5;
        int size;
        boolean z5;
        String str2;
        ?? bVar;
        long j7;
        int i5;
        r rVar = this.F;
        Transcoder$convertCompress$3$2 transcoder$convertCompress$3$2 = (Transcoder$convertCompress$3$2) rVar.f6260i;
        d dVar = (d) rVar.f6262w;
        Bundle bundle = (Bundle) rVar.f6261v;
        int i6 = 0;
        while (true) {
            arrayList = this.f16423y;
            int size2 = arrayList.size();
            e6Var = this.f16422x;
            if (i6 >= size2) {
                break;
            }
            a aVar = (a) arrayList.get(i6);
            aVar.a.getTrackFormat(aVar.f16415g);
            e6Var.getClass();
            ArrayList arrayList2 = e6Var.a;
            arrayList2.add(new qk.a());
            ((qk.a) arrayList2.get(i6)).getClass();
            i6++;
        }
        Iterator it = arrayList.iterator();
        long j10 = 0;
        while (it.hasNext()) {
            j10 = Math.max(d9.a.p((a) it.next()), j10);
        }
        Iterator it2 = arrayList.iterator();
        float f2 = 0.0f;
        while (true) {
            str = "mime";
            if (!it2.hasNext()) {
                break;
            }
            a aVar2 = (a) it2.next();
            MediaFormat trackFormat = aVar2.a.getTrackFormat(aVar2.f16415g);
            int integer = trackFormat.containsKey("bitrate") ? trackFormat.getInteger("bitrate") : -1;
            long p3 = d9.a.p(aVar2);
            Iterator it3 = it2;
            long j11 = j10;
            if (p3 < 0) {
                Log.d("a", "Track duration is not available, using maximum duration");
                j7 = j11;
            } else {
                j7 = p3;
            }
            String string = trackFormat.containsKey("mime") ? trackFormat.getString("mime") : null;
            if (string != null) {
                MediaFormat mediaFormat = aVar2.f16414f;
                if (mediaFormat != null) {
                    integer = mediaFormat.containsKey("bitrate") ? mediaFormat.getInteger("bitrate") : -1;
                } else if (string.startsWith(MediaStreamTrack.AUDIO_TRACK_KIND) && integer < 0) {
                    integer = 320000;
                }
            }
            if (integer < 0) {
                Log.d("a", "Bitrate is not available, cannot use that track to estimate size");
                i5 = 0;
            } else {
                i5 = integer;
            }
            f2 += (j7 / 1000000.0f) * i5;
            it2 = it3;
            j10 = j11;
        }
        long j12 = (long) (f2 / 8.0f);
        long j13 = (long) (j12 * 1.1f);
        this.f16421w.getClass();
        try {
            j = -1;
            try {
                j5 = new StatFs(Environment.getDataDirectory().getAbsolutePath()).getAvailableBytes();
            } catch (Exception unused) {
                Log.e("b", "Could not get Available Disk Space");
                j5 = j;
                if (j5 == j) {
                }
                size = arrayList.size();
                this.f16417d = new ArrayList(size);
                if (size >= 1) {
                }
            }
        } catch (Exception unused2) {
            j = -1;
        }
        if (j5 == j && j5 < j13) {
            throw new sk.a(j12, j5);
        }
        size = arrayList.size();
        this.f16417d = new ArrayList(size);
        if (size >= 1) {
            throw new e(9, null, null);
        }
        int i10 = 0;
        while (i10 < size) {
            a aVar3 = (a) arrayList.get(i10);
            int i11 = aVar3.f16415g;
            int i12 = aVar3.f16416h;
            vk.a aVar4 = aVar3.a;
            rk.b bVar2 = aVar3.f16410b;
            int i13 = size;
            wk.e eVar = aVar3.f16411c;
            rk.b encoder = aVar3.f16412d;
            vk.b bVar3 = aVar3.f16413e;
            MediaFormat mediaFormat2 = aVar3.f16414f;
            ArrayList arrayList3 = arrayList;
            this.f16420v.getClass();
            if (mediaFormat2 == null) {
                str2 = str;
                bVar = new xk.b(aVar4, i11, bVar3, i12);
            } else {
                String string2 = mediaFormat2.getString(str);
                if (string2 == null) {
                    throw new e(8, mediaFormat2, null);
                }
                if (string2.startsWith(MediaStreamTrack.VIDEO_TRACK_KIND) || string2.startsWith(MediaStreamTrack.AUDIO_TRACK_KIND)) {
                    if (bVar2 == null) {
                        throw new e(12, mediaFormat2, null);
                    }
                    if (encoder == null) {
                        throw new e(13, mediaFormat2, null);
                    }
                }
                if (!string2.startsWith(MediaStreamTrack.VIDEO_TRACK_KIND)) {
                    str2 = str;
                    wk.e eVar2 = eVar;
                    if (string2.startsWith(MediaStreamTrack.AUDIO_TRACK_KIND)) {
                        if (eVar2 == null) {
                            Intrinsics.checkNotNullParameter(encoder, "encoder");
                            eVar2 = new wk.b(encoder);
                        }
                        wk.e eVar3 = eVar2;
                        bVar = new xk.a(i11, i12, mediaFormat2, bVar2, encoder, aVar4, bVar3, eVar3);
                        bVar.f20501m = 2;
                        bVar.f20502n = 2;
                        bVar.f20503o = 2;
                        bVar.f20504p = aVar4.getTrackFormat(i11);
                        encoder.a(bVar.j);
                        eVar3.b(null, bVar.f20504p, bVar.j);
                        MediaFormat mediaFormat3 = bVar.f20504p;
                        bVar2.getClass();
                        bVar2.f17403b = yk.a.c(mediaFormat3, null, false, 5, 1, 2);
                        bVar2.f17405d = false;
                    } else {
                        Log.i("s", "Unsupported track mime type: " + string2 + ", will use passthrough transcoder");
                        bVar = new xk.b(aVar4, i11, bVar3, i12);
                    }
                    this.f16417d.add(bVar);
                    bVar.c();
                    bVar.d();
                    ((qk.a) e6Var.a.get(i10)).getClass();
                    i10++;
                    size = i13;
                    arrayList = arrayList3;
                    str = str2;
                } else {
                    if (eVar == null) {
                        throw new e(14, mediaFormat2, null);
                    }
                    str2 = str;
                    xk.d dVar2 = new xk.d(i11, i12, mediaFormat2, bVar2, encoder, aVar4, bVar3, eVar);
                    dVar2.f20517m = 2;
                    dVar2.f20518n = 2;
                    dVar2.f20519o = 2;
                    dVar2.f20522r = mediaFormat2;
                    if (!(eVar instanceof wk.d)) {
                        throw new IllegalArgumentException("Cannot use non-OpenGL video renderer in ".concat(xk.d.class.getSimpleName()));
                    }
                    wk.d dVar3 = (wk.d) eVar;
                    dVar2.f20520p = dVar3;
                    MediaFormat trackFormat2 = aVar4.getTrackFormat(i11);
                    dVar2.f20521q = trackFormat2;
                    Number c6 = ah.d.c(trackFormat2, "frame-rate");
                    Number c8 = ah.d.c(dVar2.f20522r, "frame-rate");
                    if (c8 == null || c8.intValue() < 1) {
                        c8 = c6;
                    }
                    dVar2.f20523s = (c6 == null || c6.intValue() <= c8.intValue()) ? null : new wk.c(c6.intValue(), c8.intValue());
                    encoder.a(dVar2.j);
                    dVar3.b(encoder.f17403b.createInputSurface(), dVar2.f20521q, dVar2.f20522r);
                    MediaFormat mediaFormat4 = dVar2.f20521q;
                    f fVar = dVar3.f19870b;
                    Surface surface = fVar != null ? fVar.f19876e : null;
                    bVar2.getClass();
                    bVar2.f17403b = yk.a.c(mediaFormat4, surface, false, 5, 1, 2);
                    bVar2.f17405d = false;
                    bVar = dVar2;
                }
            }
            this.f16417d.add(bVar);
            bVar.c();
            bVar.d();
            ((qk.a) e6Var.a.get(i10)).getClass();
            i10++;
            size = i13;
            arrayList = arrayList3;
            str = str2;
        }
        ArrayList arrayList4 = arrayList;
        Iterator it4 = this.f16417d.iterator();
        while (it4.hasNext()) {
            ((xk.c) it4.next()).f();
        }
        Iterator it5 = arrayList4.iterator();
        while (it5.hasNext()) {
            vk.a aVar5 = ((a) it5.next()).a;
            aVar5.getSelection().getClass();
            aVar5.seekTo(0L, 0);
        }
        String str3 = this.E;
        if (dVar == null) {
            transcoder$convertCompress$3$2.onStarted(str3);
        } else {
            Message obtain = Message.obtain(dVar, 0);
            obtain.obj = null;
            bundle.putString("jobId", str3);
            obtain.setData(bundle);
            obtain.sendToTarget();
        }
        this.f16418e = 0.0f;
        while (true) {
            z5 = true;
            for (int i14 = 0; i14 < this.f16417d.size(); i14++) {
                xk.c cVar = (xk.c) this.f16417d.get(i14);
                System.currentTimeMillis();
                z5 &= cVar.e() == 4;
                System.currentTimeMillis();
                ((qk.a) e6Var.a.get(i14)).getClass();
            }
            Iterator it6 = this.f16417d.iterator();
            float f10 = 0.0f;
            while (it6.hasNext()) {
                f10 += ((xk.c) it6.next()).f20516l;
            }
            float size3 = f10 / this.f16417d.size();
            int i15 = this.f16419i;
            if (i15 != 0 || size3 == this.f16418e) {
                if (i15 != 0) {
                }
                if (Thread.interrupted()) {
                    if (z5) {
                        break;
                    }
                } else {
                    a();
                    z5 = false;
                    break;
                }
            }
            if (dVar == null) {
                transcoder$convertCompress$3$2.onProgress(str3, size3);
            } else {
                Message obtain2 = Message.obtain(dVar, 3);
                obtain2.obj = null;
                bundle.putString("jobId", str3);
                bundle.putFloat(ReactProgressBarViewManager.PROP_PROGRESS, size3);
                obtain2.setData(bundle);
                obtain2.sendToTarget();
            }
            this.f16418e = size3;
            if (Thread.interrupted()) {
            }
        }
        if (z5) {
            f();
            d();
            ArrayList arrayList5 = e6Var.a;
            ((Map) rVar.f6259e).remove(str3);
            if (dVar == null) {
                transcoder$convertCompress$3$2.onCompleted(str3, arrayList5);
                return;
            }
            Message obtain3 = Message.obtain(dVar, 1);
            obtain3.obj = arrayList5;
            bundle.putString("jobId", str3);
            obtain3.setData(bundle);
            obtain3.sendToTarget();
        }
    }

    public final void f() {
        if (this.f16417d != null) {
            for (int i5 = 0; i5 < this.f16417d.size(); i5++) {
                MediaFormat mediaFormat = ((xk.c) this.f16417d.get(i5)).j;
                ((qk.a) this.f16422x.a.get(i5)).getClass();
            }
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            e();
        } catch (RuntimeException e9) {
            Log.e("b", "Transformation job error", e9);
            if (e9.getCause() instanceof InterruptedException) {
                a();
            } else {
                c(e9);
            }
        } catch (sk.d e10) {
            Log.e("b", "Transformation job error", e10);
            e10.f18043d = this.E;
            c(e10);
        }
    }
}
