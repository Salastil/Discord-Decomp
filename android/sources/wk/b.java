package wk;

import android.media.MediaCodec;
import android.media.MediaFormat;
import android.view.Surface;
import com.linkedin.android.litr.render.OboeAudioProcessor;
import h5.m;
import java.nio.ByteBuffer;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import qa.s;
import r3.g;
import s4.h;

/* loaded from: classes3.dex */
public final class b implements e {
    public final rk.b a;

    /* renamed from: b, reason: collision with root package name */
    public final List f19856b;

    /* renamed from: c, reason: collision with root package name */
    public double f19857c;

    /* renamed from: d, reason: collision with root package name */
    public int f19858d;

    /* renamed from: e, reason: collision with root package name */
    public int f19859e;

    /* renamed from: f, reason: collision with root package name */
    public int f19860f;

    /* renamed from: g, reason: collision with root package name */
    public int f19861g;

    /* renamed from: h, reason: collision with root package name */
    public double f19862h;

    /* renamed from: i, reason: collision with root package name */
    public final g f19863i;
    public final lh.f j;
    public a k;

    /* renamed from: l, reason: collision with root package name */
    public final AtomicBoolean f19864l;

    /* renamed from: m, reason: collision with root package name */
    public final LinkedBlockingDeque f19865m;

    /* renamed from: n, reason: collision with root package name */
    public final m f19866n;

    public b(rk.b encoder) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        this.a = encoder;
        this.f19856b = m0.f13512d;
        this.f19858d = -1;
        this.f19859e = -1;
        this.f19860f = -1;
        this.f19861g = -1;
        this.f19862h = 1.0d;
        this.f19863i = new g(9);
        this.j = new lh.f(19);
        this.f19864l = new AtomicBoolean(false);
        this.f19865m = new LinkedBlockingDeque();
        this.f19866n = new m(4, this);
    }

    @Override // wk.e
    public final boolean a() {
        return !this.f19856b.isEmpty();
    }

    @Override // wk.e
    public final void b(Surface surface, MediaFormat mediaFormat, MediaFormat mediaFormat2) {
        c(mediaFormat, mediaFormat2);
        this.f19864l.set(false);
        this.f19866n.start();
        Iterator it = this.f19856b.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x0037, code lost:
    
        if (r7 == null) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0017, code lost:
    
        if (r4 == null) goto L6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x0026, code lost:
    
        if (r5 == null) goto L10;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v16, types: [java.lang.Number] */
    @Override // wk.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(MediaFormat format, MediaFormat format2) {
        Number number;
        Number number2;
        Number number3;
        Integer defaultValue = -1;
        if (format != null) {
            Intrinsics.checkNotNullParameter(format, "format");
            Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
            number = ah.d.c(format, "channel-count");
        }
        number = defaultValue;
        if (format2 != null) {
            Intrinsics.checkNotNullParameter(format2, "format");
            Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
            number2 = ah.d.c(format2, "channel-count");
        }
        number2 = defaultValue;
        if (format != null) {
            Intrinsics.checkNotNullParameter(format, "format");
            Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
            number3 = ah.d.c(format, "sample-rate");
        }
        number3 = defaultValue;
        if (format2 != null) {
            Intrinsics.checkNotNullParameter(format2, "format");
            Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
            ?? c6 = ah.d.c(format2, "sample-rate");
            if (c6 != 0) {
                defaultValue = c6;
            }
        }
        int i5 = this.f19858d;
        if ((number instanceof Integer) && i5 == number.intValue()) {
            int i6 = this.f19859e;
            if ((number2 instanceof Integer) && i6 == number2.intValue()) {
                int i10 = this.f19860f;
                if ((number3 instanceof Integer) && i10 == number3.intValue()) {
                    int i11 = this.f19861g;
                    if ((defaultValue instanceof Integer) && i11 == defaultValue.intValue()) {
                        return;
                    }
                }
            }
        }
        a aVar = this.k;
        if (aVar != null) {
            aVar.release();
        }
        this.j.getClass();
        this.k = (format != null && format2 != null && format.containsKey("sample-rate") && format2.containsKey("sample-rate") && format.containsKey("channel-count") && format2.containsKey("channel-count") && (format.getInteger("sample-rate") != format2.getInteger("sample-rate") || format.getInteger("channel-count") != format2.getInteger("channel-count"))) ? new OboeAudioProcessor(format.getInteger("channel-count"), format.getInteger("sample-rate"), format2.getInteger("channel-count"), format2.getInteger("sample-rate")) : new s();
        this.f19858d = number.intValue();
        this.f19859e = number2.intValue();
        this.f19860f = number3.intValue();
        this.f19861g = defaultValue.intValue();
        this.f19857c = 1000000.0d / defaultValue.doubleValue();
        this.f19862h = defaultValue.doubleValue() / number3.doubleValue();
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x0038, code lost:
    
        if (r0 == null) goto L11;
     */
    @Override // wk.e
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void d(rk.a aVar, long j) {
        if (this.f19864l.get()) {
            return;
        }
        int ceil = ((int) Math.ceil((aVar.f17402c.size / (this.f19858d * 2)) * this.f19862h)) * this.f19859e * 2;
        g gVar = this.f19863i;
        ByteBuffer byteBuffer = (ByteBuffer) ((LinkedBlockingQueue) gVar.f17126e).poll();
        if (byteBuffer != null) {
            if (byteBuffer.capacity() < ceil) {
                byteBuffer = gVar.d(ceil);
            }
        }
        byteBuffer = gVar.d(ceil);
        rk.a aVar2 = new rk.a(aVar.a, byteBuffer, new MediaCodec.BufferInfo());
        a aVar3 = this.k;
        if (aVar3 != null) {
            aVar3.g(aVar, aVar2);
        }
        Iterator it = this.f19856b.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
        this.f19865m.add(aVar2);
    }

    @Override // wk.e
    public final void release() {
        this.f19864l.set(true);
        a aVar = this.k;
        if (aVar != null) {
            aVar.release();
        }
        ((LinkedBlockingQueue) this.f19863i.f17126e).clear();
        Iterator it = this.f19856b.iterator();
        if (it.hasNext()) {
            throw h.b(it);
        }
    }
}
