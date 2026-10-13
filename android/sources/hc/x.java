package hc;

import android.media.MediaFormat;
import com.google.android.exoplayer2.Format;

/* loaded from: classes3.dex */
public final class x implements le.o, me.a, k1 {

    /* renamed from: d, reason: collision with root package name */
    public le.o f9938d;

    /* renamed from: e, reason: collision with root package name */
    public me.a f9939e;

    /* renamed from: i, reason: collision with root package name */
    public le.o f9940i;

    /* renamed from: v, reason: collision with root package name */
    public me.a f9941v;

    @Override // me.a
    public final void a(long j, float[] fArr) {
        me.a aVar = this.f9941v;
        if (aVar != null) {
            aVar.a(j, fArr);
        }
        me.a aVar2 = this.f9939e;
        if (aVar2 != null) {
            aVar2.a(j, fArr);
        }
    }

    @Override // me.a
    public final void b() {
        me.a aVar = this.f9941v;
        if (aVar != null) {
            aVar.b();
        }
        me.a aVar2 = this.f9939e;
        if (aVar2 != null) {
            aVar2.b();
        }
    }

    @Override // hc.k1
    public final void c(int i5, Object obj) {
        if (i5 == 7) {
            this.f9938d = (le.o) obj;
            return;
        }
        if (i5 == 8) {
            this.f9939e = (me.a) obj;
            return;
        }
        if (i5 != 10000) {
            return;
        }
        me.k kVar = (me.k) obj;
        if (kVar == null) {
            this.f9940i = null;
            this.f9941v = null;
        } else {
            this.f9940i = kVar.getVideoFrameMetadataListener();
            this.f9941v = kVar.getCameraMotionListener();
        }
    }

    @Override // le.o
    public final void d(long j, long j5, Format format, MediaFormat mediaFormat) {
        long j7;
        long j10;
        Format format2;
        MediaFormat mediaFormat2;
        le.o oVar = this.f9940i;
        if (oVar != null) {
            oVar.d(j, j5, format, mediaFormat);
            mediaFormat2 = mediaFormat;
            format2 = format;
            j10 = j5;
            j7 = j;
        } else {
            j7 = j;
            j10 = j5;
            format2 = format;
            mediaFormat2 = mediaFormat;
        }
        le.o oVar2 = this.f9938d;
        if (oVar2 != null) {
            oVar2.d(j7, j10, format2, mediaFormat2);
        }
    }
}
